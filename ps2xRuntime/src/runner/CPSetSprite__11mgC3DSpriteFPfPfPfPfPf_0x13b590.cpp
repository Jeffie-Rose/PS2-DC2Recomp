#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CPSetSprite__11mgC3DSpriteFPfPfPfPfPf
// Address: 0x13b590 - 0x13b6b4
void CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590");
#endif

    switch (ctx->pc) {
        case 0x13b600u: goto label_13b600;
        case 0x13b60cu: goto label_13b60c;
        case 0x13b688u: goto label_13b688;
        case 0x13b690u: goto label_13b690;
        default: break;
    }

    ctx->pc = 0x13b590u;

    // 0x13b590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13b594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b598: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13b59c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b5a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b5a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b5a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13b5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b5b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13b5b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b5b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13b5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b5c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13b5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5c4: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x13b5c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b5c8: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x13b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b5cc: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x13b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13b5d0: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x13b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x13b5d4: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x13b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x13b5d8: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x13b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x13b5dc: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B5DCu;
    {
        const bool branch_taken_0x13b5dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5DCu;
            // 0x13b5e0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5dc) {
            ctx->pc = 0x13B614u;
            goto label_13b614;
        }
    }
    ctx->pc = 0x13B5E4u;
    // 0x13b5e4: 0x8e95002c  lw          $s5, 0x2C($s4)
    ctx->pc = 0x13b5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13b5e8: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x13b5e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13b5ec: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x13b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13b5f0: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x13b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x13b5f4: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x13b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x13b5f8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x13B5F8u;
    SET_GPR_U32(ctx, 31, 0x13B600u);
    ctx->pc = 0x13B5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5F8u;
            // 0x13b5fc: 0xc66c0008  lwc1        $f12, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B600u; }
        if (ctx->pc != 0x13B600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B600u; }
        if (ctx->pc != 0x13B600u) { return; }
    }
    ctx->pc = 0x13B600u;
label_13b600:
    // 0x13b600: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x13b600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x13b604: 0xc047964  jal         func_11E590
    ctx->pc = 0x13B604u;
    SET_GPR_U32(ctx, 31, 0x13B60Cu);
    ctx->pc = 0x13B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B604u;
            // 0x13b608: 0xc66c0008  lwc1        $f12, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B60Cu; }
        if (ctx->pc != 0x13B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B60Cu; }
        if (ctx->pc != 0x13B60Cu) { return; }
    }
    ctx->pc = 0x13B60Cu;
label_13b60c:
    // 0x13b60c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13B60Cu;
    {
        const bool branch_taken_0x13b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B60Cu;
            // 0x13b610: 0xe6a0000c  swc1        $f0, 0xC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b60c) {
            ctx->pc = 0x13B628u;
            goto label_13b628;
        }
    }
    ctx->pc = 0x13B614u;
label_13b614:
    // 0x13b614: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x13b614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13b618: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x13b618u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13b61c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b620: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x13b620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
    // 0x13b624: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13b624u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_13b628:
    // 0x13b628: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x13b628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13b62c: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x13b62cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b630: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b634: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x13b634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
    // 0x13b638: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13b638u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13b63c: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x13b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13b640: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x13b640u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b644: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13b644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b648: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x13b648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
    // 0x13b64c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13b650: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x13b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13b654: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x13b654u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b658: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b65c: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x13b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
    // 0x13b660: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13b660u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13b664: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x13b664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x13b668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13b66c: 0xae830040  sw          $v1, 0x40($s4)
    ctx->pc = 0x13b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
    // 0x13b670: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x13b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x13b674: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x13b674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x13b678: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B678u;
    {
        const bool branch_taken_0x13b678 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B678u;
            // 0x13b67c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b678) {
            ctx->pc = 0x13B690u;
            goto label_13b690;
        }
    }
    ctx->pc = 0x13B680u;
    // 0x13b680: 0xc04edb0  jal         func_13B6C0
    ctx->pc = 0x13B680u;
    SET_GPR_U32(ctx, 31, 0x13B688u);
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B688u; }
        if (ctx->pc != 0x13B688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B688u; }
        if (ctx->pc != 0x13B688u) { return; }
    }
    ctx->pc = 0x13B688u;
label_13b688:
    // 0x13b688: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x13B688u;
    SET_GPR_U32(ctx, 31, 0x13B690u);
    ctx->pc = 0x13B68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B688u;
            // 0x13b68c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B690u; }
        if (ctx->pc != 0x13B690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B690u; }
        if (ctx->pc != 0x13B690u) { return; }
    }
    ctx->pc = 0x13B690u;
label_13b690:
    // 0x13b690: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b694: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13b694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b698: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b69c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b6a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b6a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13B6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6ACu;
            // 0x13b6b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B6B4u;
}
