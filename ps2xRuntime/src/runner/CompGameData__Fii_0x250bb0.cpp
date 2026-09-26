#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CompGameData__Fii
// Address: 0x250bb0 - 0x250ca8
void CompGameData__Fii_0x250bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CompGameData__Fii_0x250bb0");
#endif

    switch (ctx->pc) {
        case 0x250bd0u: goto label_250bd0;
        case 0x250be0u: goto label_250be0;
        case 0x250bf0u: goto label_250bf0;
        default: break;
    }

    ctx->pc = 0x250bb0u;

    // 0x250bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x250bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x250bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x250bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x250bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x250bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250bc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x250bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250bc8: 0xc06517c  jal         func_1945F0
    ctx->pc = 0x250BC8u;
    SET_GPR_U32(ctx, 31, 0x250BD0u);
    ctx->pc = 0x250BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250BC8u;
            // 0x250bcc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1945F0u;
    if (runtime->hasFunction(0x1945F0u)) {
        auto targetFn = runtime->lookupFunction(0x1945F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250BD0u; }
        if (ctx->pc != 0x250BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataPt__Fv_0x1945f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250BD0u; }
        if (ctx->pc != 0x250BD0u) { return; }
    }
    ctx->pc = 0x250BD0u;
label_250bd0:
    // 0x250bd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x250bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250bd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250bd8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x250BD8u;
    SET_GPR_U32(ctx, 31, 0x250BE0u);
    ctx->pc = 0x250BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250BD8u;
            // 0x250bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250BE0u; }
        if (ctx->pc != 0x250BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250BE0u; }
        if (ctx->pc != 0x250BE0u) { return; }
    }
    ctx->pc = 0x250BE0u;
label_250be0:
    // 0x250be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x250be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250be8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x250BE8u;
    SET_GPR_U32(ctx, 31, 0x250BF0u);
    ctx->pc = 0x250BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250BE8u;
            // 0x250bec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250BF0u; }
        if (ctx->pc != 0x250BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250BF0u; }
        if (ctx->pc != 0x250BF0u) { return; }
    }
    ctx->pc = 0x250BF0u;
label_250bf0:
    // 0x250bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250bf4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x250BF4u;
    {
        const bool branch_taken_0x250bf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250BF4u;
            // 0x250bf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bf4) {
            ctx->pc = 0x250C14u;
            goto label_250c14;
        }
    }
    ctx->pc = 0x250BFCu;
    // 0x250bfc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x250bfcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x250c00: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x250c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x250c04: 0x24631470  addiu       $v1, $v1, 0x1470
    ctx->pc = 0x250c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x250c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x250c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x250c0c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x250c0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250c10: 0x0  nop
    ctx->pc = 0x250c10u;
    // NOP
label_250c14:
    // 0x250c14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250C14u;
    {
        const bool branch_taken_0x250c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250c14) {
            ctx->pc = 0x250C34u;
            goto label_250c34;
        }
    }
    ctx->pc = 0x250C1Cu;
    // 0x250c1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x250c1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250c20: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x250c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x250c24: 0x24421470  addiu       $v0, $v0, 0x1470
    ctx->pc = 0x250c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x250c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250c2c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x250c2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250c30: 0x0  nop
    ctx->pc = 0x250c30u;
    // NOP
label_250c34:
    // 0x250c34: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x250C34u;
    {
        const bool branch_taken_0x250c34 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x250c34) {
            ctx->pc = 0x250C40u;
            goto label_250c40;
        }
    }
    ctx->pc = 0x250C3Cu;
    // 0x250c3c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x250c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_250c40:
    // 0x250c40: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250C40u;
    {
        const bool branch_taken_0x250c40 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x250C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C40u;
            // 0x250c44: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c40) {
            ctx->pc = 0x250C50u;
            goto label_250c50;
        }
    }
    ctx->pc = 0x250C48u;
    // 0x250c48: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x250c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x250c4c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x250c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_250c50:
    // 0x250c50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x250C50u;
    {
        const bool branch_taken_0x250c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C50u;
            // 0x250c54: 0x85082a  slt         $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c50) {
            ctx->pc = 0x250C60u;
            goto label_250c60;
        }
    }
    ctx->pc = 0x250C58u;
    // 0x250c58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x250C58u;
    {
        const bool branch_taken_0x250c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C58u;
            // 0x250c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c58) {
            ctx->pc = 0x250C90u;
            goto label_250c90;
        }
    }
    ctx->pc = 0x250C60u;
label_250c60:
    // 0x250c60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x250C60u;
    {
        const bool branch_taken_0x250c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C60u;
            // 0x250c64: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c60) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250C68u;
    // 0x250c68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x250C68u;
    {
        const bool branch_taken_0x250c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C68u;
            // 0x250c6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c68) {
            ctx->pc = 0x250C90u;
            goto label_250c90;
        }
    }
    ctx->pc = 0x250C70u;
label_250c70:
    // 0x250c70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x250C70u;
    {
        const bool branch_taken_0x250c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C70u;
            // 0x250c74: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c70) {
            ctx->pc = 0x250C80u;
            goto label_250c80;
        }
    }
    ctx->pc = 0x250C78u;
    // 0x250c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x250C78u;
    {
        const bool branch_taken_0x250c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C78u;
            // 0x250c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c78) {
            ctx->pc = 0x250C90u;
            goto label_250c90;
        }
    }
    ctx->pc = 0x250C80u;
label_250c80:
    // 0x250c80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x250C80u;
    {
        const bool branch_taken_0x250c80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C80u;
            // 0x250c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c80) {
            ctx->pc = 0x250C90u;
            goto label_250c90;
        }
    }
    ctx->pc = 0x250C88u;
    // 0x250c88: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x250C88u;
    {
        const bool branch_taken_0x250c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250C88u;
            // 0x250c8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c88) {
            ctx->pc = 0x250C90u;
            goto label_250c90;
        }
    }
    ctx->pc = 0x250C90u;
label_250c90:
    // 0x250c90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x250c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250c94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x250c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250c98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x250CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250CA0u;
            // 0x250ca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250CA8u;
}
