#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeitonItemBoardSub__FP13CGameDataUsedi
// Address: 0x250cb0 - 0x250dfc
void SeitonItemBoardSub__FP13CGameDataUsedi_0x250cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeitonItemBoardSub__FP13CGameDataUsedi_0x250cb0");
#endif

    switch (ctx->pc) {
        case 0x250cfcu: goto label_250cfc;
        case 0x250d4cu: goto label_250d4c;
        case 0x250d6cu: goto label_250d6c;
        case 0x250d84u: goto label_250d84;
        case 0x250d98u: goto label_250d98;
        default: break;
    }

    ctx->pc = 0x250cb0u;

    // 0x250cb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x250cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x250cb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x250cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x250cb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x250cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x250cbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x250cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x250cc0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x250cc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250cc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x250cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x250cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x250cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ccc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x250cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x250cd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x250cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x250cd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x250cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x250cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x250cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x250cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250ce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x250ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ce8: 0x878583f0  lh          $a1, -0x7C10($gp)
    ctx->pc = 0x250ce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x250cec: 0x0  nop
    ctx->pc = 0x250cecu;
    // NOP
    // 0x250cf0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x250cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x250cf4: 0x24631470  addiu       $v1, $v1, 0x1470
    ctx->pc = 0x250cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x250cf8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x250cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_250cfc:
    // 0x250cfc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x250cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x250d00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x250d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x250d04: 0x28a20024  slti        $v0, $a1, 0x24
    ctx->pc = 0x250d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x250d08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x250D08u;
    {
        const bool branch_taken_0x250d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250d08) {
            ctx->pc = 0x250D14u;
            goto label_250d14;
        }
    }
    ctx->pc = 0x250D10u;
    // 0x250d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250d14:
    // 0x250d14: 0x0  nop
    ctx->pc = 0x250d14u;
    // NOP
    // 0x250d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x250d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x250d1c: 0x28820024  slti        $v0, $a0, 0x24
    ctx->pc = 0x250d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x250d20: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x250D20u;
    {
        const bool branch_taken_0x250d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250D20u;
            // 0x250d24: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d20) {
            ctx->pc = 0x250CFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250cfc;
        }
    }
    ctx->pc = 0x250D28u;
    // 0x250d28: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x250d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x250d2c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x250d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x250d30: 0xa0221470  sb          $v0, 0x1470($at)
    ctx->pc = 0x250d30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 5232), (uint8_t)GPR_U32(ctx, 2));
    // 0x250d34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x250d34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d38: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x250d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x250d3c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x250d3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250d40: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x250D40u;
    {
        const bool branch_taken_0x250d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250D40u;
            // 0x250d44: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d40) {
            ctx->pc = 0x250DC4u;
            goto label_250dc4;
        }
    }
    ctx->pc = 0x250D48u;
    // 0x250d48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x250d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250d4c:
    // 0x250d4c: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x250d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x250d50: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x250d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x250d54: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x250D54u;
    {
        const bool branch_taken_0x250d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250D54u;
            // 0x250d58: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d54) {
            ctx->pc = 0x250DB0u;
            goto label_250db0;
        }
    }
    ctx->pc = 0x250D5Cu;
    // 0x250d5c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x250d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x250d60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x250d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250d64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x250d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250d68: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x250d68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_250d6c:
    // 0x250d6c: 0x0  nop
    ctx->pc = 0x250d6cu;
    // NOP
    // 0x250d70: 0x3d3a821  addu        $s5, $fp, $s3
    ctx->pc = 0x250d70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x250d74: 0x3d2a021  addu        $s4, $fp, $s2
    ctx->pc = 0x250d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x250d78: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x250d78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x250d7c: 0xc0942ec  jal         func_250BB0
    ctx->pc = 0x250D7Cu;
    SET_GPR_U32(ctx, 31, 0x250D84u);
    ctx->pc = 0x250D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250D7Cu;
            // 0x250d80: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250BB0u;
    if (runtime->hasFunction(0x250BB0u)) {
        auto targetFn = runtime->lookupFunction(0x250BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D84u; }
        if (ctx->pc != 0x250D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CompGameData__Fii_0x250bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D84u; }
        if (ctx->pc != 0x250D84u) { return; }
    }
    ctx->pc = 0x250D84u;
label_250d84:
    // 0x250d84: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250D84u;
    {
        const bool branch_taken_0x250d84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x250D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250D84u;
            // 0x250d88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d84) {
            ctx->pc = 0x250D9Cu;
            goto label_250d9c;
        }
    }
    ctx->pc = 0x250D8Cu;
    // 0x250d8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x250d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d90: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x250D90u;
    SET_GPR_U32(ctx, 31, 0x250D98u);
    ctx->pc = 0x250D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250D90u;
            // 0x250d94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D98u; }
        if (ctx->pc != 0x250D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D98u; }
        if (ctx->pc != 0x250D98u) { return; }
    }
    ctx->pc = 0x250D98u;
label_250d98:
    // 0x250d98: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x250d98u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_250d9c:
    // 0x250d9c: 0x0  nop
    ctx->pc = 0x250d9cu;
    // NOP
    // 0x250da0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x250da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x250da4: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x250da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x250da8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x250DA8u;
    {
        const bool branch_taken_0x250da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250DA8u;
            // 0x250dac: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250da8) {
            ctx->pc = 0x250D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250d6c;
        }
    }
    ctx->pc = 0x250DB0u;
label_250db0:
    // 0x250db0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x250db0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x250db4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x250db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x250db8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x250db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250dbc: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x250DBCu;
    {
        const bool branch_taken_0x250dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250DBCu;
            // 0x250dc0: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250dbc) {
            ctx->pc = 0x250D4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250d4c;
        }
    }
    ctx->pc = 0x250DC4u;
label_250dc4:
    // 0x250dc4: 0x0  nop
    ctx->pc = 0x250dc4u;
    // NOP
    // 0x250dc8: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x250dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x250dcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x250dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250dd0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x250dd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250dd4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x250dd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250dd8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x250dd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250ddc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x250ddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250de0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x250de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250de4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x250de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250de8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x250de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250dec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250df4: 0x3e00008  jr          $ra
    ctx->pc = 0x250DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250DF4u;
            // 0x250df8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250DFCu;
}
