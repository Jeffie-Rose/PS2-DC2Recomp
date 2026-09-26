#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEntryObjectPos__11CCharacter2FiPf
// Address: 0x174f50 - 0x174fdc
void GetEntryObjectPos__11CCharacter2FiPf_0x174f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntryObjectPos__11CCharacter2FiPf_0x174f50");
#endif

    switch (ctx->pc) {
        case 0x174f50u: goto label_174f50;
        case 0x174f54u: goto label_174f54;
        case 0x174f58u: goto label_174f58;
        case 0x174f5cu: goto label_174f5c;
        case 0x174f60u: goto label_174f60;
        case 0x174f64u: goto label_174f64;
        case 0x174f68u: goto label_174f68;
        case 0x174f6cu: goto label_174f6c;
        case 0x174f70u: goto label_174f70;
        case 0x174f74u: goto label_174f74;
        case 0x174f78u: goto label_174f78;
        case 0x174f7cu: goto label_174f7c;
        case 0x174f80u: goto label_174f80;
        case 0x174f84u: goto label_174f84;
        case 0x174f88u: goto label_174f88;
        case 0x174f8cu: goto label_174f8c;
        case 0x174f90u: goto label_174f90;
        case 0x174f94u: goto label_174f94;
        case 0x174f98u: goto label_174f98;
        case 0x174f9cu: goto label_174f9c;
        case 0x174fa0u: goto label_174fa0;
        case 0x174fa4u: goto label_174fa4;
        case 0x174fa8u: goto label_174fa8;
        case 0x174facu: goto label_174fac;
        case 0x174fb0u: goto label_174fb0;
        case 0x174fb4u: goto label_174fb4;
        case 0x174fb8u: goto label_174fb8;
        case 0x174fbcu: goto label_174fbc;
        case 0x174fc0u: goto label_174fc0;
        case 0x174fc4u: goto label_174fc4;
        case 0x174fc8u: goto label_174fc8;
        case 0x174fccu: goto label_174fcc;
        case 0x174fd0u: goto label_174fd0;
        case 0x174fd4u: goto label_174fd4;
        case 0x174fd8u: goto label_174fd8;
        default: break;
    }

    ctx->pc = 0x174f50u;

label_174f50:
    // 0x174f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_174f54:
    // 0x174f54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x174f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_174f58:
    // 0x174f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_174f5c:
    // 0x174f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_174f60:
    // 0x174f60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x174f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174f64:
    // 0x174f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174f68:
    // 0x174f68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x174f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174f6c:
    // 0x174f6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x174f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174f70:
    // 0x174f70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x174f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_174f74:
    // 0x174f74: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x174f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_174f78:
    // 0x174f78: 0x320f809  jalr        $t9
label_174f7c:
    if (ctx->pc == 0x174F7Cu) {
        ctx->pc = 0x174F7Cu;
            // 0x174f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F80u;
        goto label_174f80;
    }
    ctx->pc = 0x174F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x174F80u);
        ctx->pc = 0x174F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F78u;
            // 0x174f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174F80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174F80u; }
            if (ctx->pc != 0x174F80u) { return; }
        }
        }
    }
    ctx->pc = 0x174F80u;
label_174f80:
    // 0x174f80: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_174f84:
    if (ctx->pc == 0x174F84u) {
        ctx->pc = 0x174F84u;
            // 0x174f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F88u;
        goto label_174f88;
    }
    ctx->pc = 0x174F80u;
    {
        const bool branch_taken_0x174f80 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x174F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F80u;
            // 0x174f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f80) {
            ctx->pc = 0x174F94u;
            goto label_174f94;
        }
    }
    ctx->pc = 0x174F88u;
label_174f88:
    // 0x174f88: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x174f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_174f8c:
    // 0x174f8c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_174f90:
    if (ctx->pc == 0x174F90u) {
        ctx->pc = 0x174F94u;
        goto label_174f94;
    }
    ctx->pc = 0x174F8Cu;
    {
        const bool branch_taken_0x174f8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174f8c) {
            ctx->pc = 0x174F9Cu;
            goto label_174f9c;
        }
    }
    ctx->pc = 0x174F94u;
label_174f94:
    // 0x174f94: 0x1000000c  b           . + 4 + (0xC << 2)
label_174f98:
    if (ctx->pc == 0x174F98u) {
        ctx->pc = 0x174F98u;
            // 0x174f98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x174F9Cu;
        goto label_174f9c;
    }
    ctx->pc = 0x174F94u;
    {
        const bool branch_taken_0x174f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F94u;
            // 0x174f98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f94) {
            ctx->pc = 0x174FC8u;
            goto label_174fc8;
        }
    }
    ctx->pc = 0x174F9Cu;
label_174f9c:
    // 0x174f9c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_174fa0:
    // 0x174fa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x174fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_174fa4:
    // 0x174fa4: 0x8c440138  lw          $a0, 0x138($v0)
    ctx->pc = 0x174fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_174fa8:
    // 0x174fa8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_174fac:
    if (ctx->pc == 0x174FACu) {
        ctx->pc = 0x174FACu;
            // 0x174fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174FB0u;
        goto label_174fb0;
    }
    ctx->pc = 0x174FA8u;
    {
        const bool branch_taken_0x174fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FA8u;
            // 0x174fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fa8) {
            ctx->pc = 0x174FB8u;
            goto label_174fb8;
        }
    }
    ctx->pc = 0x174FB0u;
label_174fb0:
    // 0x174fb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_174fb4:
    if (ctx->pc == 0x174FB4u) {
        ctx->pc = 0x174FB4u;
            // 0x174fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174FB8u;
        goto label_174fb8;
    }
    ctx->pc = 0x174FB0u;
    {
        const bool branch_taken_0x174fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FB0u;
            // 0x174fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fb0) {
            ctx->pc = 0x174FC4u;
            goto label_174fc4;
        }
    }
    ctx->pc = 0x174FB8u;
label_174fb8:
    // 0x174fb8: 0xc04de0c  jal         func_137830
label_174fbc:
    if (ctx->pc == 0x174FBCu) {
        ctx->pc = 0x174FC0u;
        goto label_174fc0;
    }
    ctx->pc = 0x174FB8u;
    SET_GPR_U32(ctx, 31, 0x174FC0u);
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FC0u; }
        if (ctx->pc != 0x174FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FC0u; }
        if (ctx->pc != 0x174FC0u) { return; }
    }
    ctx->pc = 0x174FC0u;
label_174fc0:
    // 0x174fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174fc4:
    // 0x174fc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_174fc8:
    // 0x174fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174fcc:
    // 0x174fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174fd0:
    // 0x174fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174fd4:
    // 0x174fd4: 0x3e00008  jr          $ra
label_174fd8:
    if (ctx->pc == 0x174FD8u) {
        ctx->pc = 0x174FD8u;
            // 0x174fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x174FDCu;
        goto label_fallthrough_0x174fd4;
    }
    ctx->pc = 0x174FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FD4u;
            // 0x174fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x174fd4:
    ctx->pc = 0x174FDCu;
}
