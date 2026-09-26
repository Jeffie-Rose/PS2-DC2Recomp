#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNaviDistance__11CAutoMapGenFPf
// Address: 0x1d96c0 - 0x1d9804
void GetNaviDistance__11CAutoMapGenFPf_0x1d96c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNaviDistance__11CAutoMapGenFPf_0x1d96c0");
#endif

    switch (ctx->pc) {
        case 0x1d972cu: goto label_1d972c;
        case 0x1d9760u: goto label_1d9760;
        default: break;
    }

    ctx->pc = 0x1d96c0u;

    // 0x1d96c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d96c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d96c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d96cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d96d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d96d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d96d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d96d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d96d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d96dc: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x1d96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x1d96e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D96E0u;
    {
        const bool branch_taken_0x1d96e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96E0u;
            // 0x1d96e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96e0) {
            ctx->pc = 0x1D96F4u;
            goto label_1d96f4;
        }
    }
    ctx->pc = 0x1D96E8u;
    // 0x1d96e8: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x1d96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1d96ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D96ECu;
    {
        const bool branch_taken_0x1d96ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d96ec) {
            ctx->pc = 0x1D9700u;
            goto label_1d9700;
        }
    }
    ctx->pc = 0x1D96F4u;
label_1d96f4:
    // 0x1d96f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d96f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d96f8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D96F8u;
    {
        const bool branch_taken_0x1d96f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96F8u;
            // 0x1d96fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96f8) {
            ctx->pc = 0x1D97ECu;
            goto label_1d97ec;
        }
    }
    ctx->pc = 0x1D9700u;
label_1d9700:
    // 0x1d9700: 0xc61401bc  lwc1        $f20, 0x1BC($s0)
    ctx->pc = 0x1d9700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9704: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d970c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9710: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d9710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d9714: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9718: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1d9718u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d971c: 0x0  nop
    ctx->pc = 0x1d971cu;
    // NOP
    // 0x1d9720: 0x0  nop
    ctx->pc = 0x1d9720u;
    // NOP
    // 0x1d9724: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9724u;
    SET_GPR_U32(ctx, 31, 0x1D972Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D972Cu; }
        if (ctx->pc != 0x1D972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D972Cu; }
        if (ctx->pc != 0x1D972Cu) { return; }
    }
    ctx->pc = 0x1D972Cu;
label_1d972c:
    // 0x1d972c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9730: 0xc61501c0  lwc1        $f21, 0x1C0($s0)
    ctx->pc = 0x1d9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d9734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9738: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d973c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d973cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9740: 0x0  nop
    ctx->pc = 0x1d9740u;
    // NOP
    // 0x1d9744: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d9744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d9748: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d974c: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x1d974cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x1d9750: 0x0  nop
    ctx->pc = 0x1d9750u;
    // NOP
    // 0x1d9754: 0x0  nop
    ctx->pc = 0x1d9754u;
    // NOP
    // 0x1d9758: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9758u;
    SET_GPR_U32(ctx, 31, 0x1D9760u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9760u; }
        if (ctx->pc != 0x1D9760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9760u; }
        if (ctx->pc != 0x1D9760u) { return; }
    }
    ctx->pc = 0x1D9760u;
label_1d9760:
    // 0x1d9760: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9760u;
    {
        const bool branch_taken_0x1d9760 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d9760) {
            ctx->pc = 0x1D976Cu;
            goto label_1d976c;
        }
    }
    ctx->pc = 0x1D9768u;
    // 0x1d9768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d9768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d976c:
    // 0x1d976c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D976Cu;
    {
        const bool branch_taken_0x1d976c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d976c) {
            ctx->pc = 0x1D9778u;
            goto label_1d9778;
        }
    }
    ctx->pc = 0x1D9774u;
    // 0x1d9774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9778:
    // 0x1d9778: 0x860501b8  lh          $a1, 0x1B8($s0)
    ctx->pc = 0x1d9778u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d977c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1d9780: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1d9780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d9784: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x1d9784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d9788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d978c: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1d978cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d9790: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d9790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d9794: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d9794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d9798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d979c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d97a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d97a4: 0x80440018  lb          $a0, 0x18($v0)
    ctx->pc = 0x1d97a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d97a8: 0x1c800005  bgtz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D97A8u;
    {
        const bool branch_taken_0x1d97a8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1D97ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97A8u;
            // 0x1d97ac: 0x4615a040  add.s       $f1, $f20, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97a8) {
            ctx->pc = 0x1D97C0u;
            goto label_1d97c0;
        }
    }
    ctx->pc = 0x1D97B0u;
    // 0x1d97b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1d97b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d97b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d97b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D97B8u;
    {
        const bool branch_taken_0x1d97b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97b8) {
            ctx->pc = 0x1D97E8u;
            goto label_1d97e8;
        }
    }
    ctx->pc = 0x1D97C0u;
label_1d97c0:
    // 0x1d97c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d97c4: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x1d97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1d97c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d97c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d97cc: 0x0  nop
    ctx->pc = 0x1d97ccu;
    // NOP
    // 0x1d97d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d97d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d97d4: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x1d97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d97d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d97d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d97dc: 0x0  nop
    ctx->pc = 0x1d97dcu;
    // NOP
    // 0x1d97e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d97e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d97e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d97e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d97e8:
    // 0x1d97e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d97e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d97ec:
    // 0x1d97ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d97ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d97f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d97f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d97f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d97f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d97f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d97fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D97FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97FCu;
            // 0x1d9800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9804u;
}
