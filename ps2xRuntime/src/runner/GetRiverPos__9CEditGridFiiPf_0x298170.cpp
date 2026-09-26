#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRiverPos__9CEditGridFiiPf
// Address: 0x298170 - 0x2981fc
void GetRiverPos__9CEditGridFiiPf_0x298170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRiverPos__9CEditGridFiiPf_0x298170");
#endif

    switch (ctx->pc) {
        case 0x2981ccu: goto label_2981cc;
        default: break;
    }

    ctx->pc = 0x298170u;

    // 0x298170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298174: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x298174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29817c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29817cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298180: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298184: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x298184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x298188: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x298188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29818c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29818cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x298190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x298190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298194: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x298194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298198: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x29819c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x29819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2981a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2981a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2981a8: 0x0  nop
    ctx->pc = 0x2981a8u;
    // NOP
    // 0x2981ac: 0x46020d03  div.s       $f20, $f1, $f2
    ctx->pc = 0x2981acu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2981b0: 0x0  nop
    ctx->pc = 0x2981b0u;
    // NOP
    // 0x2981b4: 0x0  nop
    ctx->pc = 0x2981b4u;
    // NOP
    // 0x2981b8: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x2981b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2981bc: 0x0  nop
    ctx->pc = 0x2981bcu;
    // NOP
    // 0x2981c0: 0x0  nop
    ctx->pc = 0x2981c0u;
    // NOP
    // 0x2981c4: 0xc0a5e94  jal         func_297A50
    ctx->pc = 0x2981C4u;
    SET_GPR_U32(ctx, 31, 0x2981CCu);
    ctx->pc = 0x297A50u;
    if (runtime->hasFunction(0x297A50u)) {
        auto targetFn = runtime->lookupFunction(0x297A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2981CCu; }
        if (ctx->pc != 0x2981CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWPos__9CEditGridFPfii_0x297a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2981CCu; }
        if (ctx->pc != 0x2981CCu) { return; }
    }
    ctx->pc = 0x2981CCu;
label_2981cc:
    // 0x2981cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2981ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2981d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2981d4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2981d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2981d8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2981d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981dc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2981dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2981e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2981e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2981e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2981e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2981e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2981e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2981ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2981ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2981f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2981f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2981f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2981F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2981F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2981F4u;
            // 0x2981f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2981FCu;
}
