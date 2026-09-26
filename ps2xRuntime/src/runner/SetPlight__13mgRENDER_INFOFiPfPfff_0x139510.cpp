#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPlight__13mgRENDER_INFOFiPfPfff
// Address: 0x139510 - 0x139590
void SetPlight__13mgRENDER_INFOFiPfPfff_0x139510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPlight__13mgRENDER_INFOFiPfPfff_0x139510");
#endif

    switch (ctx->pc) {
        case 0x13954cu: goto label_13954c;
        case 0x139558u: goto label_139558;
        case 0x139570u: goto label_139570;
        default: break;
    }

    ctx->pc = 0x139510u;

    // 0x139510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x139510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x139514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x139514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x139518: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x139518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13951c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x139520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139524: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139528: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x139528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13952c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13952cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139530: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x139530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139534: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x139534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139538: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13953c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x13953cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x139540: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x139544: 0xc041c5c  jal         func_107170
    ctx->pc = 0x139544u;
    SET_GPR_U32(ctx, 31, 0x13954Cu);
    ctx->pc = 0x139548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139544u;
            // 0x139548: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13954Cu; }
        if (ctx->pc != 0x13954Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13954Cu; }
        if (ctx->pc != 0x13954Cu) { return; }
    }
    ctx->pc = 0x13954Cu;
label_13954c:
    // 0x13954c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13954cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139550: 0xc041c5c  jal         func_107170
    ctx->pc = 0x139550u;
    SET_GPR_U32(ctx, 31, 0x139558u);
    ctx->pc = 0x139554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139550u;
            // 0x139554: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139558u; }
        if (ctx->pc != 0x139558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139558u; }
        if (ctx->pc != 0x139558u) { return; }
    }
    ctx->pc = 0x139558u;
label_139558:
    // 0x139558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x139558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13955c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139560: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x139564: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x139564u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x139568: 0xc04e564  jal         func_139590
    ctx->pc = 0x139568u;
    SET_GPR_U32(ctx, 31, 0x139570u);
    ctx->pc = 0x13956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139568u;
            // 0x13956c: 0xe7b40074  swc1        $f20, 0x74($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139590u;
    if (runtime->hasFunction(0x139590u)) {
        auto targetFn = runtime->lookupFunction(0x139590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139570u; }
        if (ctx->pc != 0x139570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139570u; }
        if (ctx->pc != 0x139570u) { return; }
    }
    ctx->pc = 0x139570u;
label_139570:
    // 0x139570: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x139570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139574: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x139574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x139578: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x139578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13957c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x139580: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x139580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139584: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139588: 0x3e00008  jr          $ra
    ctx->pc = 0x139588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139588u;
            // 0x13958c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139590u;
}
