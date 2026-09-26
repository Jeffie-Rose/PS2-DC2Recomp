#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReadBG__Fv
// Address: 0x148cd0 - 0x148e64
void ReadBG__Fv_0x148cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadBG__Fv_0x148cd0");
#endif

    switch (ctx->pc) {
        case 0x148ce0u: goto label_148ce0;
        case 0x148d14u: goto label_148d14;
        case 0x148da0u: goto label_148da0;
        case 0x148dbcu: goto label_148dbc;
        case 0x148de4u: goto label_148de4;
        case 0x148df4u: goto label_148df4;
        case 0x148e0cu: goto label_148e0c;
        case 0x148e20u: goto label_148e20;
        case 0x148e38u: goto label_148e38;
        case 0x148e4cu: goto label_148e4c;
        default: break;
    }

    ctx->pc = 0x148cd0u;

    // 0x148cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148cd8: 0xc0504c4  jal         func_141310
    ctx->pc = 0x148CD8u;
    SET_GPR_U32(ctx, 31, 0x148CE0u);
    ctx->pc = 0x148CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CD8u;
            // 0x148cdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CE0u; }
        if (ctx->pc != 0x148CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CE0u; }
        if (ctx->pc != 0x148CE0u) { return; }
    }
    ctx->pc = 0x148CE0u;
label_148ce0:
    // 0x148ce0: 0x8f8388ac  lw          $v1, -0x7754($gp)
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936748)));
    // 0x148ce4: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x148CE4u;
    {
        const bool branch_taken_0x148ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x148CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148CE4u;
            // 0x148ce8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ce4) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148CECu;
    // 0x148cec: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x148cecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x148cf0: 0xa3a30029  sb          $v1, 0x29($sp)
    ctx->pc = 0x148cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x148cf4: 0x26108680  addiu       $s0, $s0, -0x7980
    ctx->pc = 0x148cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936192));
    // 0x148cf8: 0x8f8388b0  lw          $v1, -0x7750($gp)
    ctx->pc = 0x148cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936752)));
    // 0x148cfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x148cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d00: 0xaf8288ac  sw          $v0, -0x7754($gp)
    ctx->pc = 0x148d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936748), GPR_U32(ctx, 2));
    // 0x148d04: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x148d04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x148d08: 0xa3a0002a  sb          $zero, 0x2A($sp)
    ctx->pc = 0x148d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x148d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148d10: 0xaf8388b0  sw          $v1, -0x7750($gp)
    ctx->pc = 0x148d10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 3));
label_148d14:
    // 0x148d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148d18: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x148D18u;
    {
        const bool branch_taken_0x148d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d18) {
            ctx->pc = 0x148D4Cu;
            goto label_148d4c;
        }
    }
    ctx->pc = 0x148D20u;
    // 0x148d20: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148d24: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x148D24u;
    {
        const bool branch_taken_0x148d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d24) {
            ctx->pc = 0x148D38u;
            goto label_148d38;
        }
    }
    ctx->pc = 0x148D2Cu;
    // 0x148d2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x148d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148d30: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x148D30u;
    {
        const bool branch_taken_0x148d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d30) {
            ctx->pc = 0x148D60u;
            goto label_148d60;
        }
    }
    ctx->pc = 0x148D38u;
label_148d38:
    // 0x148d38: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x148D38u;
    {
        const bool branch_taken_0x148d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x148d38) {
            ctx->pc = 0x148D4Cu;
            goto label_148d4c;
        }
    }
    ctx->pc = 0x148D40u;
    // 0x148d40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x148d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148d44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148D44u;
    {
        const bool branch_taken_0x148d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d44) {
            ctx->pc = 0x148D60u;
            goto label_148d60;
        }
    }
    ctx->pc = 0x148D4Cu;
label_148d4c:
    // 0x148d4c: 0x0  nop
    ctx->pc = 0x148d4cu;
    // NOP
    // 0x148d50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x148d54: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x148d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x148d58: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x148D58u;
    {
        const bool branch_taken_0x148d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D58u;
            // 0x148d5c: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d58) {
            ctx->pc = 0x148D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148d14;
        }
    }
    ctx->pc = 0x148D60u;
label_148d60:
    // 0x148d60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x148d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x148d64: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x148D64u;
    {
        const bool branch_taken_0x148d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x148d64) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148D6Cu;
    // 0x148d6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x148d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148d70: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x148D70u;
    {
        const bool branch_taken_0x148d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148d70) {
            ctx->pc = 0x148DC4u;
            goto label_148dc4;
        }
    }
    ctx->pc = 0x148D78u;
    // 0x148d78: 0xaf8088b0  sw          $zero, -0x7750($gp)
    ctx->pc = 0x148d78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 0));
    // 0x148d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148d80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x148d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148d84: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148D84u;
    {
        const bool branch_taken_0x148d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148d84) {
            ctx->pc = 0x148DA8u;
            goto label_148da8;
        }
    }
    ctx->pc = 0x148D8Cu;
    // 0x148d8c: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x148d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x148d90: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x148d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x148d94: 0x8e060110  lw          $a2, 0x110($s0)
    ctx->pc = 0x148d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x148d98: 0xc0481cc  jal         func_120730
    ctx->pc = 0x148D98u;
    SET_GPR_U32(ctx, 31, 0x148DA0u);
    ctx->pc = 0x148D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D98u;
            // 0x148d9c: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120730u;
    if (runtime->hasFunction(0x120730u)) {
        auto targetFn = runtime->lookupFunction(0x120730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DA0u; }
        if (ctx->pc != 0x148DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdRead_0x120730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DA0u; }
        if (ctx->pc != 0x148DA0u) { return; }
    }
    ctx->pc = 0x148DA0u;
label_148da0:
    // 0x148da0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x148DA0u;
    {
        const bool branch_taken_0x148da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148DA0u;
            // 0x148da4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148da0) {
            ctx->pc = 0x148DBCu;
            goto label_148dbc;
        }
    }
    ctx->pc = 0x148DA8u;
label_148da8:
    // 0x148da8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x148da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x148dac: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x148db0: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x148db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x148db4: 0xc045236  jal         func_1148D8
    ctx->pc = 0x148DB4u;
    SET_GPR_U32(ctx, 31, 0x148DBCu);
    ctx->pc = 0x148DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DB4u;
            // 0x148db8: 0x8e050110  lw          $a1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DBCu; }
        if (ctx->pc != 0x148DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DBCu; }
        if (ctx->pc != 0x148DBCu) { return; }
    }
    ctx->pc = 0x148DBCu;
label_148dbc:
    // 0x148dbc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x148DBCu;
    {
        const bool branch_taken_0x148dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148DBCu;
            // 0x148dc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148dbc) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148DC4u;
label_148dc4:
    // 0x148dc4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x148DC4u;
    {
        const bool branch_taken_0x148dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148dc4) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148DCCu;
    // 0x148dcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x148dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148dd4: 0x14450015  bne         $v0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x148DD4u;
    {
        const bool branch_taken_0x148dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x148DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148DD4u;
            // 0x148dd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148dd4) {
            ctx->pc = 0x148E2Cu;
            goto label_148e2c;
        }
    }
    ctx->pc = 0x148DDCu;
    // 0x148ddc: 0xc047fc4  jal         func_11FF10
    ctx->pc = 0x148DDCu;
    SET_GPR_U32(ctx, 31, 0x148DE4u);
    ctx->pc = 0x11FF10u;
    if (runtime->hasFunction(0x11FF10u)) {
        auto targetFn = runtime->lookupFunction(0x11FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DE4u; }
        if (ctx->pc != 0x148DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x11ff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DE4u; }
        if (ctx->pc != 0x148DE4u) { return; }
    }
    ctx->pc = 0x148DE4u;
label_148de4:
    // 0x148de4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x148DE4u;
    {
        const bool branch_taken_0x148de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148de4) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148DECu;
    // 0x148dec: 0xc048278  jal         func_1209E0
    ctx->pc = 0x148DECu;
    SET_GPR_U32(ctx, 31, 0x148DF4u);
    ctx->pc = 0x1209E0u;
    if (runtime->hasFunction(0x1209E0u)) {
        auto targetFn = runtime->lookupFunction(0x1209E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DF4u; }
        if (ctx->pc != 0x148DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x1209e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DF4u; }
        if (ctx->pc != 0x148DF4u) { return; }
    }
    ctx->pc = 0x148DF4u;
label_148df4:
    // 0x148df4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148DF4u;
    {
        const bool branch_taken_0x148df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148DF4u;
            // 0x148df8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148df4) {
            ctx->pc = 0x148E14u;
            goto label_148e14;
        }
    }
    ctx->pc = 0x148DFCu;
    // 0x148dfc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x148dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x148e00: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x148e04: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x148E04u;
    SET_GPR_U32(ctx, 31, 0x148E0Cu);
    ctx->pc = 0x148E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E04u;
            // 0x148e08: 0x24842750  addiu       $a0, $a0, 0x2750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E0Cu; }
        if (ctx->pc != 0x148E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E0Cu; }
        if (ctx->pc != 0x148E0Cu) { return; }
    }
    ctx->pc = 0x148E0Cu;
label_148e0c:
    // 0x148e0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x148E0Cu;
    {
        const bool branch_taken_0x148e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E0Cu;
            // 0x148e10: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e0c) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148E14u;
label_148e14:
    // 0x148e14: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x148e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x148e18: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x148E18u;
    SET_GPR_U32(ctx, 31, 0x148E20u);
    ctx->pc = 0x148E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E18u;
            // 0x148e1c: 0x24842760  addiu       $a0, $a0, 0x2760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E20u; }
        if (ctx->pc != 0x148E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E20u; }
        if (ctx->pc != 0x148E20u) { return; }
    }
    ctx->pc = 0x148E20u;
label_148e20:
    // 0x148e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148E24u;
    {
        const bool branch_taken_0x148e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E24u;
            // 0x148e28: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e24) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148E2Cu;
label_148e2c:
    // 0x148e2c: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x148e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x148e30: 0xc045382  jal         func_114E08
    ctx->pc = 0x148E30u;
    SET_GPR_U32(ctx, 31, 0x148E38u);
    ctx->pc = 0x148E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E30u;
            // 0x148e34: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114E08u;
    if (runtime->hasFunction(0x114E08u)) {
        auto targetFn = runtime->lookupFunction(0x114E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E38u; }
        if (ctx->pc != 0x148E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl_0x114e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E38u; }
        if (ctx->pc != 0x148E38u) { return; }
    }
    ctx->pc = 0x148E38u;
label_148e38:
    // 0x148e38: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x148e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x148e3c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x148E3Cu;
    {
        const bool branch_taken_0x148e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148e3c) {
            ctx->pc = 0x148E54u;
            goto label_148e54;
        }
    }
    ctx->pc = 0x148E44u;
    // 0x148e44: 0xc045148  jal         func_114520
    ctx->pc = 0x148E44u;
    SET_GPR_U32(ctx, 31, 0x148E4Cu);
    ctx->pc = 0x148E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E44u;
            // 0x148e48: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E4Cu; }
        if (ctx->pc != 0x148E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E4Cu; }
        if (ctx->pc != 0x148E4Cu) { return; }
    }
    ctx->pc = 0x148E4Cu;
label_148e4c:
    // 0x148e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e50: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x148e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_148e54:
    // 0x148e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_148e58:
    // 0x148e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x148E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E5Cu;
            // 0x148e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148E64u;
}
