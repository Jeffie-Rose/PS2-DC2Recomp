#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Drop__9CFishFoodFv
// Address: 0x20f410 - 0x20f4c4
void Drop__9CFishFoodFv_0x20f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Drop__9CFishFoodFv_0x20f410");
#endif

    switch (ctx->pc) {
        case 0x20f438u: goto label_20f438;
        case 0x20f460u: goto label_20f460;
        case 0x20f490u: goto label_20f490;
        default: break;
    }

    ctx->pc = 0x20f410u;

    // 0x20f410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f414: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x20f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x20f418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20f41c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20f420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f428: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f430: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20F430u;
    SET_GPR_U32(ctx, 31, 0x20F438u);
    ctx->pc = 0x20F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F430u;
            // 0x20f434: 0xa0830690  sb          $v1, 0x690($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1680), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F438u; }
        if (ctx->pc != 0x20F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F438u; }
        if (ctx->pc != 0x20F438u) { return; }
    }
    ctx->pc = 0x20F438u;
label_20f438:
    // 0x20f438: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x20f438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x20f43c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20f440: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f444: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20f448: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f44c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f44cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20f450: 0xe6000688  swc1        $f0, 0x688($s0)
    ctx->pc = 0x20f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1672), bits); }
    // 0x20f454: 0xae000684  sw          $zero, 0x684($s0)
    ctx->pc = 0x20f454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
    // 0x20f458: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20F458u;
    SET_GPR_U32(ctx, 31, 0x20F460u);
    ctx->pc = 0x20F45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F458u;
            // 0x20f45c: 0xae00068c  sw          $zero, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F460u; }
        if (ctx->pc != 0x20F460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F460u; }
        if (ctx->pc != 0x20F460u) { return; }
    }
    ctx->pc = 0x20F460u;
label_20f460:
    // 0x20f460: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x20f460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x20f464: 0x3c023c80  lui         $v0, 0x3C80
    ctx->pc = 0x20f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15488 << 16));
    // 0x20f468: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f46c: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x20f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x20f470: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20f470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20f474: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20f474u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x20f478: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20f47c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20f480: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20f480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20f484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f488: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20F488u;
    SET_GPR_U32(ctx, 31, 0x20F490u);
    ctx->pc = 0x20F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F488u;
            // 0x20f48c: 0xe6000660  swc1        $f0, 0x660($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F490u; }
        if (ctx->pc != 0x20F490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F490u; }
        if (ctx->pc != 0x20F490u) { return; }
    }
    ctx->pc = 0x20F490u;
label_20f490:
    // 0x20f490: 0x3c044208  lui         $a0, 0x4208
    ctx->pc = 0x20f490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16904 << 16));
    // 0x20f494: 0x3c033c80  lui         $v1, 0x3C80
    ctx->pc = 0x20f494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15488 << 16));
    // 0x20f498: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x20f498u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20f49c: 0x3463adfd  ori         $v1, $v1, 0xADFD
    ctx->pc = 0x20f49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
    // 0x20f4a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f4a4: 0x0  nop
    ctx->pc = 0x20f4a4u;
    // NOP
    // 0x20f4a8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x20f4a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x20f4ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f4acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20f4b0: 0xe6000668  swc1        $f0, 0x668($s0)
    ctx->pc = 0x20f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1640), bits); }
    // 0x20f4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4BCu;
            // 0x20f4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F4C4u;
}
