#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IntersectionBox__FPfPfP9mgVu0FBOXPA4_fPA4_f
// Address: 0x2deb00 - 0x2debf4
void IntersectionBox__FPfPfP9mgVu0FBOXPA4_fPA4_f_0x2deb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IntersectionBox__FPfPfP9mgVu0FBOXPA4_fPA4_f_0x2deb00");
#endif

    switch (ctx->pc) {
        case 0x2deb58u: goto label_2deb58;
        case 0x2deb68u: goto label_2deb68;
        case 0x2deb78u: goto label_2deb78;
        case 0x2deb8cu: goto label_2deb8c;
        case 0x2deba0u: goto label_2deba0;
        case 0x2debbcu: goto label_2debbc;
        default: break;
    }

    ctx->pc = 0x2deb00u;

    // 0x2deb00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2deb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2deb04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2deb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2deb08: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2deb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2deb0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2deb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2deb10: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2deb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2deb14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2deb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2deb18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2deb18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2deb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2deb20: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2deb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2deb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2deb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2deb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2deb2c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2deb2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2deb30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2deb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb34: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2deb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2deb38: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2deb38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2deb3c: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x2deb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
    // 0x2deb40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2deb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2deb44: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2deb44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2deb48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2deb48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2deb4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2deb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb50: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x2DEB50u;
    SET_GPR_U32(ctx, 31, 0x2DEB58u);
    ctx->pc = 0x2DEB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB50u;
            // 0x2deb54: 0xafa6007c  sw          $a2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB58u; }
        if (ctx->pc != 0x2DEB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB58u; }
        if (ctx->pc != 0x2DEB58u) { return; }
    }
    ctx->pc = 0x2DEB58u;
label_2deb58:
    // 0x2deb58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2deb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2deb5c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2deb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2deb60: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2DEB60u;
    SET_GPR_U32(ctx, 31, 0x2DEB68u);
    ctx->pc = 0x2DEB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB60u;
            // 0x2deb64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB68u; }
        if (ctx->pc != 0x2DEB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB68u; }
        if (ctx->pc != 0x2DEB68u) { return; }
    }
    ctx->pc = 0x2DEB68u;
label_2deb68:
    // 0x2deb68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2deb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2deb6c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2deb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2deb70: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2DEB70u;
    SET_GPR_U32(ctx, 31, 0x2DEB78u);
    ctx->pc = 0x2DEB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB70u;
            // 0x2deb74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB78u; }
        if (ctx->pc != 0x2DEB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB78u; }
        if (ctx->pc != 0x2DEB78u) { return; }
    }
    ctx->pc = 0x2DEB78u;
label_2deb78:
    // 0x2deb78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2deb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2deb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2deb80: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2deb84: 0xc0b7994  jal         func_2DE650
    ctx->pc = 0x2DEB84u;
    SET_GPR_U32(ctx, 31, 0x2DEB8Cu);
    ctx->pc = 0x2DEB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB84u;
            // 0x2deb88: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE650u;
    if (runtime->hasFunction(0x2DE650u)) {
        auto targetFn = runtime->lookupFunction(0x2DE650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB8Cu; }
        if (ctx->pc != 0x2DEB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntersectionBox__FPfPfP9mgVu0FBOXPA4_f_0x2de650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB8Cu; }
        if (ctx->pc != 0x2DEB8Cu) { return; }
    }
    ctx->pc = 0x2DEB8Cu;
label_2deb8c:
    // 0x2deb8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2deb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb90: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2deb90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2deb94: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2DEB94u;
    {
        const bool branch_taken_0x2deb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB94u;
            // 0x2deb98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb94) {
            ctx->pc = 0x2DEBCCu;
            goto label_2debcc;
        }
    }
    ctx->pc = 0x2DEB9Cu;
    // 0x2deb9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2deb9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2deba0:
    // 0x2deba0: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2deba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2deba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2deba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2deba8: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x2deba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2debac: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x2debacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2debb0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2debb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2debb4: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2DEBB4u;
    SET_GPR_U32(ctx, 31, 0x2DEBBCu);
    ctx->pc = 0x2DEBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBB4u;
            // 0x2debb8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBBCu; }
        if (ctx->pc != 0x2DEBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBBCu; }
        if (ctx->pc != 0x2DEBBCu) { return; }
    }
    ctx->pc = 0x2DEBBCu;
label_2debbc:
    // 0x2debbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2debbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2debc0: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2debc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2debc4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DEBC4u;
    {
        const bool branch_taken_0x2debc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBC4u;
            // 0x2debc8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debc4) {
            ctx->pc = 0x2DEBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2deba0;
        }
    }
    ctx->pc = 0x2DEBCCu;
label_2debcc:
    // 0x2debcc: 0x0  nop
    ctx->pc = 0x2debccu;
    // NOP
    // 0x2debd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2debd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2debd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2debd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2debd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2debd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2debdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2debdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2debe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2debe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2debe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2debe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2debe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2debec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBECu;
            // 0x2debf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEBF4u;
}
