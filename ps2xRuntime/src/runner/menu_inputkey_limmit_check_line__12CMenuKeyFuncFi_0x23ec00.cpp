#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_inputkey_limmit_check_line__12CMenuKeyFuncFi
// Address: 0x23ec00 - 0x23ecf0
void menu_inputkey_limmit_check_line__12CMenuKeyFuncFi_0x23ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_inputkey_limmit_check_line__12CMenuKeyFuncFi_0x23ec00");
#endif

    switch (ctx->pc) {
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec80u: goto label_23ec80;
        default: break;
    }

    ctx->pc = 0x23ec00u;

    // 0x23ec00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23ec04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23ec08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23ec0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23ec10: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x23ec10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23ec18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23ec1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23ec1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23ec24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23ec24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23ec2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23ec2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ec34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ec38: 0x24910070  addiu       $s1, $a0, 0x70
    ctx->pc = 0x23ec38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x23ec3c: 0x8c920134  lw          $s2, 0x134($a0)
    ctx->pc = 0x23ec3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x23ec40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23EC40u;
    {
        const bool branch_taken_0x23ec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC40u;
            // 0x23ec44: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec40) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EC48u;
label_23ec48:
    // 0x23ec48: 0x24420c70  addiu       $v0, $v0, 0xC70
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3184));
    // 0x23ec4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23ec50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ec54: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x23ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x23ec58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23EC58u;
    {
        const bool branch_taken_0x23ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC58u;
            // 0x23ec5c: 0x255b021  addu        $s6, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec58) {
            ctx->pc = 0x23EC94u;
            goto label_23ec94;
        }
    }
    ctx->pc = 0x23EC60u;
    // 0x23ec60: 0x8647000c  lh          $a3, 0xC($s2)
    ctx->pc = 0x23ec60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23ec64: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x23ec64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23ec68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ec68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec6c: 0x8648000e  lh          $t0, 0xE($s2)
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x23ec70: 0x92490010  lbu         $t1, 0x10($s2)
    ctx->pc = 0x23ec70u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x23ec74: 0x86ca0014  lh          $t2, 0x14($s6)
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x23ec78: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x23EC78u;
    SET_GPR_U32(ctx, 31, 0x23EC80u);
    ctx->pc = 0x23EC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC78u;
            // 0x23ec7c: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC80u; }
        if (ctx->pc != 0x23EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC80u; }
        if (ctx->pc != 0x23EC80u) { return; }
    }
    ctx->pc = 0x23EC80u;
label_23ec80:
    // 0x23ec80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ec84: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EC84u;
    {
        const bool branch_taken_0x23ec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ec84) {
            ctx->pc = 0x23EC94u;
            goto label_23ec94;
        }
    }
    ctx->pc = 0x23EC8Cu;
    // 0x23ec8c: 0x86d0001c  lh          $s0, 0x1C($s6)
    ctx->pc = 0x23ec8cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x23ec90: 0x0  nop
    ctx->pc = 0x23ec90u;
    // NOP
label_23ec94:
    // 0x23ec94: 0x0  nop
    ctx->pc = 0x23ec94u;
    // NOP
    // 0x23ec98: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x23ec98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x23ec9c: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x23eca0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23eca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23eca4:
    // 0x23eca4: 0x0  nop
    ctx->pc = 0x23eca4u;
    // NOP
    // 0x23eca8: 0x2a610004  slti        $at, $s3, 0x4
    ctx->pc = 0x23eca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23ecac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23ECACu;
    {
        const bool branch_taken_0x23ecac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ecac) {
            ctx->pc = 0x23ECBCu;
            goto label_23ecbc;
        }
    }
    ctx->pc = 0x23ECB4u;
    // 0x23ecb4: 0x600ffe4  bltz        $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x23ECB4u;
    {
        const bool branch_taken_0x23ecb4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x23ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ECB4u;
            // 0x23ecb8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecb4) {
            ctx->pc = 0x23EC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ec48;
        }
    }
    ctx->pc = 0x23ECBCu;
label_23ecbc:
    // 0x23ecbc: 0x0  nop
    ctx->pc = 0x23ecbcu;
    // NOP
    // 0x23ecc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ecc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23ecc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23ecc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23ecc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23eccc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23ecccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23ecd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23ecd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ecd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23ecd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ecd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23ecd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ecdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ecdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ece0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ece0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ece4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ece4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ece8: 0x3e00008  jr          $ra
    ctx->pc = 0x23ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ECE8u;
            // 0x23ecec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23ECF0u;
}
