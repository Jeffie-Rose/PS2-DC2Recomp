#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimQuad<f>__FP11mgCDrawPrim9mgRect<f>9mgRect<i>
// Address: 0x2328c0 - 0x232970
void PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0");
#endif

    switch (ctx->pc) {
        case 0x232904u: goto label_232904;
        case 0x23291cu: goto label_23291c;
        case 0x232938u: goto label_232938;
        case 0x232958u: goto label_232958;
        default: break;
    }

    ctx->pc = 0x2328c0u;

    // 0x2328c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2328c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2328c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2328c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2328c8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2328c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2328cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2328ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2328d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2328d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2328d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2328d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2328d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2328d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328dc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2328dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2328e0: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2328e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2328e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2328e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2328e8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2328e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2328ec: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2328ECu;
    {
        const bool branch_taken_0x2328ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2328ECu;
            // 0x2328f0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328ec) {
            ctx->pc = 0x232958u;
            goto label_232958;
        }
    }
    ctx->pc = 0x2328F4u;
    // 0x2328f4: 0x8fb10054  lw          $s1, 0x54($sp)
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2328f8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2328f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2328fc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2328FCu;
    SET_GPR_U32(ctx, 31, 0x232904u);
    ctx->pc = 0x232900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2328FCu;
            // 0x232900: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232904u; }
        if (ctx->pc != 0x232904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232904u; }
        if (ctx->pc != 0x232904u) { return; }
    }
    ctx->pc = 0x232904u;
label_232904:
    // 0x232904: 0xc7b40044  lwc1        $f20, 0x44($sp)
    ctx->pc = 0x232904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23290c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x23290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232910: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232914: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x232914u;
    SET_GPR_U32(ctx, 31, 0x23291Cu);
    ctx->pc = 0x232918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232914u;
            // 0x232918: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23291Cu; }
        if (ctx->pc != 0x23291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23291Cu; }
        if (ctx->pc != 0x23291Cu) { return; }
    }
    ctx->pc = 0x23291Cu;
label_23291c:
    // 0x23291c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x23291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x232920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232924: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x232924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232928: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23292c: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x23292cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x232930: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x232930u;
    SET_GPR_U32(ctx, 31, 0x232938u);
    ctx->pc = 0x232934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232930u;
            // 0x232934: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232938u; }
        if (ctx->pc != 0x232938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232938u; }
        if (ctx->pc != 0x232938u) { return; }
    }
    ctx->pc = 0x232938u;
label_232938:
    // 0x232938: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x232938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23293c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232940: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x232940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232944: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x232944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232948: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23294c: 0x4600a340  add.s       $f13, $f20, $f0
    ctx->pc = 0x23294cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x232950: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x232950u;
    SET_GPR_U32(ctx, 31, 0x232958u);
    ctx->pc = 0x232954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232950u;
            // 0x232954: 0x46011300  add.s       $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232958u; }
        if (ctx->pc != 0x232958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232958u; }
        if (ctx->pc != 0x232958u) { return; }
    }
    ctx->pc = 0x232958u;
label_232958:
    // 0x232958: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x232958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23295c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x23295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232960: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x232960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x232964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232968: 0x3e00008  jr          $ra
    ctx->pc = 0x232968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232968u;
            // 0x23296c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232970u;
}
