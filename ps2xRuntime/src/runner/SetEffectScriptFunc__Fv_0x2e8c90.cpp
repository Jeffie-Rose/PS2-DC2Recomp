#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEffectScriptFunc__Fv
// Address: 0x2e8c90 - 0x2e8dcc
void SetEffectScriptFunc__Fv_0x2e8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectScriptFunc__Fv_0x2e8c90");
#endif

    switch (ctx->pc) {
        case 0x2e8cb0u: goto label_2e8cb0;
        case 0x2e8cecu: goto label_2e8cec;
        case 0x2e8d18u: goto label_2e8d18;
        case 0x2e8d48u: goto label_2e8d48;
        case 0x2e8d84u: goto label_2e8d84;
        default: break;
    }

    ctx->pc = 0x2e8c90u;

    // 0x2e8c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8ca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8ca8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2e8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2e8cac: 0x24848f30  addiu       $a0, $a0, -0x70D0
    ctx->pc = 0x2e8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938416));
label_2e8cb0:
    // 0x2e8cb0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2e8cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e8cb4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2e8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2e8cb8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e8cbc: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x2e8cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e8cc0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e8cc4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2e8cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2e8cc8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2e8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2e8ccc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2e8cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2e8cd0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2e8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2e8cd4: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2e8cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2e8cd8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2e8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2e8cdc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E8CDCu;
    {
        const bool branch_taken_0x2e8cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CDCu;
            // 0x2e8ce0: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cdc) {
            ctx->pc = 0x2E8CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8cb0;
        }
    }
    ctx->pc = 0x2E8CE4u;
    // 0x2e8ce4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e8ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ce8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e8ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8cec:
    // 0x2e8cec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2e8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2e8cf0: 0x24a5c790  addiu       $a1, $a1, -0x3870
    ctx->pc = 0x2e8cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952848));
    // 0x2e8cf4: 0xb04021  addu        $t0, $a1, $s0
    ctx->pc = 0x2e8cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2e8cf8: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2e8cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e8cfc: 0x1120002d  beqz        $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E8CFCu;
    {
        const bool branch_taken_0x2e8cfc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CFCu;
            // 0x2e8d00: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cfc) {
            ctx->pc = 0x2E8DB4u;
            goto label_2e8db4;
        }
    }
    ctx->pc = 0x2E8D04u;
    // 0x2e8d04: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E8D04u;
    {
        const bool branch_taken_0x2e8d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D04u;
            // 0x2e8d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d04) {
            ctx->pc = 0x2E8D60u;
            goto label_2e8d60;
        }
    }
    ctx->pc = 0x2E8D0Cu;
    // 0x2e8d0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d10: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2e8d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e8d14: 0x0  nop
    ctx->pc = 0x2e8d14u;
    // NOP
label_2e8d18:
    // 0x2e8d18: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2e8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e8d1c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e8d20: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E8D20u;
    {
        const bool branch_taken_0x2e8d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8d20) {
            ctx->pc = 0x2E8D50u;
            goto label_2e8d50;
        }
    }
    ctx->pc = 0x2E8D28u;
    // 0x2e8d28: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2e8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2e8d2c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e8d30: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2e8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2e8d34: 0x2442c794  addiu       $v0, $v0, -0x386C
    ctx->pc = 0x2e8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952852));
    // 0x2e8d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8d3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e8d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8d40: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E8D40u;
    SET_GPR_U32(ctx, 31, 0x2E8D48u);
    ctx->pc = 0x2E8D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D40u;
            // 0x2e8d44: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D48u; }
        if (ctx->pc != 0x2E8D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D48u; }
        if (ctx->pc != 0x2E8D48u) { return; }
    }
    ctx->pc = 0x2E8D48u;
label_2e8d48:
    // 0x2e8d48: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x2E8D48u;
    {
        const bool branch_taken_0x2e8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d48) {
            ctx->pc = 0x2E8D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8d48;
        }
    }
    ctx->pc = 0x2E8D50u;
label_2e8d50:
    // 0x2e8d50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e8d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e8d54: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x2e8d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2e8d58: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E8D58u;
    {
        const bool branch_taken_0x2e8d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D58u;
            // 0x2e8d5c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d58) {
            ctx->pc = 0x2E8D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8d18;
        }
    }
    ctx->pc = 0x2E8D60u;
label_2e8d60:
    // 0x2e8d60: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2e8d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e8d64: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8D64u;
    {
        const bool branch_taken_0x2e8d64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E8D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D64u;
            // 0x2e8d68: 0x28830100  slti        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d64) {
            ctx->pc = 0x2E8D74u;
            goto label_2e8d74;
        }
    }
    ctx->pc = 0x2E8D6Cu;
    // 0x2e8d6c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8D6Cu;
    {
        const bool branch_taken_0x2e8d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d6c) {
            ctx->pc = 0x2E8D8Cu;
            goto label_2e8d8c;
        }
    }
    ctx->pc = 0x2E8D74u;
label_2e8d74:
    // 0x2e8d74: 0x0  nop
    ctx->pc = 0x2e8d74u;
    // NOP
    // 0x2e8d78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e8d7c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D84u);
    ctx->pc = 0x2E8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D7Cu;
            // 0x2e8d80: 0x24841430  addiu       $a0, $a0, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D84u; }
        if (ctx->pc != 0x2E8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D84u; }
        if (ctx->pc != 0x2E8D84u) { return; }
    }
    ctx->pc = 0x2E8D84u;
label_2e8d84:
    // 0x2e8d84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8D84u;
    {
        const bool branch_taken_0x2e8d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d84) {
            ctx->pc = 0x2E8DA4u;
            goto label_2e8da4;
        }
    }
    ctx->pc = 0x2E8D8Cu;
label_2e8d8c:
    // 0x2e8d8c: 0x0  nop
    ctx->pc = 0x2e8d8cu;
    // NOP
    // 0x2e8d90: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2e8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x2e8d94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e8d98: 0x24638f30  addiu       $v1, $v1, -0x70D0
    ctx->pc = 0x2e8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938416));
    // 0x2e8d9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e8da0: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_2e8da4:
    // 0x2e8da4: 0x0  nop
    ctx->pc = 0x2e8da4u;
    // NOP
    // 0x2e8da8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2e8da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2e8dac: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x2E8DACu;
    {
        const bool branch_taken_0x2e8dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DACu;
            // 0x2e8db0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dac) {
            ctx->pc = 0x2E8CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8cec;
        }
    }
    ctx->pc = 0x2E8DB4u;
label_2e8db4:
    // 0x2e8db4: 0x0  nop
    ctx->pc = 0x2e8db4u;
    // NOP
    // 0x2e8db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DC4u;
            // 0x2e8dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8DCCu;
}
