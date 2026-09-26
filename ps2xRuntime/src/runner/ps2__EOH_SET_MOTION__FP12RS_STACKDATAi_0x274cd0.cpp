#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_MOTION__FP12RS_STACKDATAi
// Address: 0x274cd0 - 0x274eb8
void ps2__EOH_SET_MOTION__FP12RS_STACKDATAi_0x274cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_MOTION__FP12RS_STACKDATAi_0x274cd0");
#endif

    switch (ctx->pc) {
        case 0x274d38u: goto label_274d38;
        case 0x274d5cu: goto label_274d5c;
        case 0x274dccu: goto label_274dcc;
        case 0x274ddcu: goto label_274ddc;
        case 0x274df8u: goto label_274df8;
        case 0x274e10u: goto label_274e10;
        case 0x274e24u: goto label_274e24;
        case 0x274e34u: goto label_274e34;
        case 0x274e50u: goto label_274e50;
        case 0x274e68u: goto label_274e68;
        case 0x274e94u: goto label_274e94;
        default: break;
    }

    ctx->pc = 0x274cd0u;

    // 0x274cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x274cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x274cd4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x274cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274cd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x274cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x274cdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x274cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274ce0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x274ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x274ce4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x274ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x274ce8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x274ce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x274cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x274cf0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x274cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x274cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x274cf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x274cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x274cfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x274cfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x274d00: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x274d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x274d04: 0x12620044  beq         $s3, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x274D04u;
    {
        const bool branch_taken_0x274d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x274D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D04u;
            // 0x274d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d04) {
            ctx->pc = 0x274E18u;
            goto label_274e18;
        }
    }
    ctx->pc = 0x274D0Cu;
    // 0x274d0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274d10: 0x12620041  beq         $s3, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x274D10u;
    {
        const bool branch_taken_0x274d10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x274D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D10u;
            // 0x274d14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d10) {
            ctx->pc = 0x274E18u;
            goto label_274e18;
        }
    }
    ctx->pc = 0x274D18u;
    // 0x274d18: 0x1262003f  beq         $s3, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x274D18u;
    {
        const bool branch_taken_0x274d18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x274D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D18u;
            // 0x274d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d18) {
            ctx->pc = 0x274E18u;
            goto label_274e18;
        }
    }
    ctx->pc = 0x274D20u;
    // 0x274d20: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274D20u;
    {
        const bool branch_taken_0x274d20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x274d20) {
            ctx->pc = 0x274D30u;
            goto label_274d30;
        }
    }
    ctx->pc = 0x274D28u;
    // 0x274d28: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x274D28u;
    {
        const bool branch_taken_0x274d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D28u;
            // 0x274d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d28) {
            ctx->pc = 0x274E70u;
            goto label_274e70;
        }
    }
    ctx->pc = 0x274D30u;
label_274d30:
    // 0x274d30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274D30u;
    SET_GPR_U32(ctx, 31, 0x274D38u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D38u; }
        if (ctx->pc != 0x274D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D38u; }
        if (ctx->pc != 0x274D38u) { return; }
    }
    ctx->pc = 0x274D38u;
label_274d38:
    // 0x274d38: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x274d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x274d3c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x274d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x274d40: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x274D40u;
    {
        const bool branch_taken_0x274d40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D40u;
            // 0x274d44: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d40) {
            ctx->pc = 0x274D50u;
            goto label_274d50;
        }
    }
    ctx->pc = 0x274D48u;
    // 0x274d48: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x274D48u;
    {
        const bool branch_taken_0x274d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D48u;
            // 0x274d4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d48) {
            ctx->pc = 0x274DB4u;
            goto label_274db4;
        }
    }
    ctx->pc = 0x274D50u;
label_274d50:
    // 0x274d50: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x274d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x274d54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274D54u;
    {
        const bool branch_taken_0x274d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D54u;
            // 0x274d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d54) {
            ctx->pc = 0x274D88u;
            goto label_274d88;
        }
    }
    ctx->pc = 0x274D5Cu;
label_274d5c:
    // 0x274d5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x274d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274d60: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x274D60u;
    {
        const bool branch_taken_0x274d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274d60) {
            ctx->pc = 0x274D94u;
            goto label_274d94;
        }
    }
    ctx->pc = 0x274D68u;
    // 0x274d68: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x274d6c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x274D6Cu;
    {
        const bool branch_taken_0x274d6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d6c) {
            ctx->pc = 0x274D7Cu;
            goto label_274d7c;
        }
    }
    ctx->pc = 0x274D74u;
    // 0x274d74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x274D74u;
    {
        const bool branch_taken_0x274d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D74u;
            // 0x274d78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d74) {
            ctx->pc = 0x274D88u;
            goto label_274d88;
        }
    }
    ctx->pc = 0x274D7Cu;
label_274d7c:
    // 0x274d7c: 0x0  nop
    ctx->pc = 0x274d7cu;
    // NOP
    // 0x274d80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274D80u;
    {
        const bool branch_taken_0x274d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D80u;
            // 0x274d84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d80) {
            ctx->pc = 0x274DB4u;
            goto label_274db4;
        }
    }
    ctx->pc = 0x274D88u;
label_274d88:
    // 0x274d88: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x274d88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x274d8c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x274D8Cu;
    {
        const bool branch_taken_0x274d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274d8c) {
            ctx->pc = 0x274D5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274d5c;
        }
    }
    ctx->pc = 0x274D94u;
label_274d94:
    // 0x274d94: 0x0  nop
    ctx->pc = 0x274d94u;
    // NOP
    // 0x274d98: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x274D98u;
    {
        const bool branch_taken_0x274d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D98u;
            // 0x274d9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d98) {
            ctx->pc = 0x274DA8u;
            goto label_274da8;
        }
    }
    ctx->pc = 0x274DA0u;
    // 0x274da0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x274DA0u;
    {
        const bool branch_taken_0x274da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274da0) {
            ctx->pc = 0x274DB4u;
            goto label_274db4;
        }
    }
    ctx->pc = 0x274DA8u;
label_274da8:
    // 0x274da8: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x274da8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x274dac: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x274db0: 0x0  nop
    ctx->pc = 0x274db0u;
    // NOP
label_274db4:
    // 0x274db4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x274DB4u;
    {
        const bool branch_taken_0x274db4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x274DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274DB4u;
            // 0x274db8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274db4) {
            ctx->pc = 0x274DC4u;
            goto label_274dc4;
        }
    }
    ctx->pc = 0x274DBCu;
    // 0x274dbc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x274DBCu;
    {
        const bool branch_taken_0x274dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274DBCu;
            // 0x274dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dbc) {
            ctx->pc = 0x274E94u;
            goto label_274e94;
        }
    }
    ctx->pc = 0x274DC4u;
label_274dc4:
    // 0x274dc4: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x274DC4u;
    SET_GPR_U32(ctx, 31, 0x274DCCu);
    ctx->pc = 0x274DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274DC4u;
            // 0x274dc8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DCCu; }
        if (ctx->pc != 0x274DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DCCu; }
        if (ctx->pc != 0x274DCCu) { return; }
    }
    ctx->pc = 0x274DCCu;
label_274dcc:
    // 0x274dcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dd4: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x274DD4u;
    SET_GPR_U32(ctx, 31, 0x274DDCu);
    ctx->pc = 0x274DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274DD4u;
            // 0x274dd8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DDCu; }
        if (ctx->pc != 0x274DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DDCu; }
        if (ctx->pc != 0x274DDCu) { return; }
    }
    ctx->pc = 0x274DDCu;
label_274ddc:
    // 0x274ddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x274ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274de0: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x274de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x274de4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274DE4u;
    {
        const bool branch_taken_0x274de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274DE4u;
            // 0x274de8: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274de4) {
            ctx->pc = 0x274E00u;
            goto label_274e00;
        }
    }
    ctx->pc = 0x274DECu;
    // 0x274dec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274df0: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x274DF0u;
    SET_GPR_U32(ctx, 31, 0x274DF8u);
    ctx->pc = 0x274DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274DF0u;
            // 0x274df4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DF8u; }
        if (ctx->pc != 0x274DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DF8u; }
        if (ctx->pc != 0x274DF8u) { return; }
    }
    ctx->pc = 0x274DF8u;
label_274df8:
    // 0x274df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dfc: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x274dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_274e00:
    // 0x274e00: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x274E00u;
    {
        const bool branch_taken_0x274e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274e00) {
            ctx->pc = 0x274E78u;
            goto label_274e78;
        }
    }
    ctx->pc = 0x274E08u;
    // 0x274e08: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x274E08u;
    SET_GPR_U32(ctx, 31, 0x274E10u);
    ctx->pc = 0x274E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274E08u;
            // 0x274e0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E10u; }
        if (ctx->pc != 0x274E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E10u; }
        if (ctx->pc != 0x274E10u) { return; }
    }
    ctx->pc = 0x274E10u;
label_274e10:
    // 0x274e10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x274E10u;
    {
        const bool branch_taken_0x274e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E10u;
            // 0x274e14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e10) {
            ctx->pc = 0x274E78u;
            goto label_274e78;
        }
    }
    ctx->pc = 0x274E18u;
label_274e18:
    // 0x274e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274E1Cu;
    SET_GPR_U32(ctx, 31, 0x274E24u);
    ctx->pc = 0x274E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274E1Cu;
            // 0x274e20: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E24u; }
        if (ctx->pc != 0x274E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E24u; }
        if (ctx->pc != 0x274E24u) { return; }
    }
    ctx->pc = 0x274E24u;
label_274e24:
    // 0x274e24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e2c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274E2Cu;
    SET_GPR_U32(ctx, 31, 0x274E34u);
    ctx->pc = 0x274E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274E2Cu;
            // 0x274e30: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E34u; }
        if (ctx->pc != 0x274E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E34u; }
        if (ctx->pc != 0x274E34u) { return; }
    }
    ctx->pc = 0x274E34u;
label_274e34:
    // 0x274e34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x274e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e38: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x274e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x274e3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274E3Cu;
    {
        const bool branch_taken_0x274e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E3Cu;
            // 0x274e40: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e3c) {
            ctx->pc = 0x274E58u;
            goto label_274e58;
        }
    }
    ctx->pc = 0x274E44u;
    // 0x274e44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274E48u;
    SET_GPR_U32(ctx, 31, 0x274E50u);
    ctx->pc = 0x274E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274E48u;
            // 0x274e4c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E50u; }
        if (ctx->pc != 0x274E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E50u; }
        if (ctx->pc != 0x274E50u) { return; }
    }
    ctx->pc = 0x274E50u;
label_274e50:
    // 0x274e50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e54: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x274e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_274e58:
    // 0x274e58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274E58u;
    {
        const bool branch_taken_0x274e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274e58) {
            ctx->pc = 0x274E78u;
            goto label_274e78;
        }
    }
    ctx->pc = 0x274E60u;
    // 0x274e60: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x274E60u;
    SET_GPR_U32(ctx, 31, 0x274E68u);
    ctx->pc = 0x274E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274E60u;
            // 0x274e64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E68u; }
        if (ctx->pc != 0x274E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E68u; }
        if (ctx->pc != 0x274E68u) { return; }
    }
    ctx->pc = 0x274E68u;
label_274e68:
    // 0x274e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274E68u;
    {
        const bool branch_taken_0x274e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E68u;
            // 0x274e6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e68) {
            ctx->pc = 0x274E78u;
            goto label_274e78;
        }
    }
    ctx->pc = 0x274E70u;
label_274e70:
    // 0x274e70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x274E70u;
    {
        const bool branch_taken_0x274e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274E70u;
            // 0x274e74: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e70) {
            ctx->pc = 0x274E98u;
            goto label_274e98;
        }
    }
    ctx->pc = 0x274E78u;
label_274e78:
    // 0x274e78: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x274e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x274e88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x274e8c: 0xc0978e8  jal         func_25E3A0
    ctx->pc = 0x274E8Cu;
    SET_GPR_U32(ctx, 31, 0x274E94u);
    ctx->pc = 0x274E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274E8Cu;
            // 0x274e90: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E3A0u;
    if (runtime->hasFunction(0x25E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E94u; }
        if (ctx->pc != 0x274E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__10CEohMotherFiPcif_0x25e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E94u; }
        if (ctx->pc != 0x274E94u) { return; }
    }
    ctx->pc = 0x274E94u;
label_274e94:
    // 0x274e94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x274e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_274e98:
    // 0x274e98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x274e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x274e9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x274e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274ea0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x274ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274ea4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x274ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274ea8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x274ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x274eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x274EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274EB0u;
            // 0x274eb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274EB8u;
}
