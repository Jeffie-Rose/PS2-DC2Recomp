#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckAnalogKey__12CMenuKeyFuncFiPf
// Address: 0x23e360 - 0x23e46c
void CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360");
#endif

    switch (ctx->pc) {
        case 0x23e3a8u: goto label_23e3a8;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e3dcu: goto label_23e3dc;
        case 0x23e3ecu: goto label_23e3ec;
        default: break;
    }

    ctx->pc = 0x23e360u;

    // 0x23e360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e364: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x23e368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e36c: 0x2442de30  addiu       $v0, $v0, -0x21D0
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23e370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e374: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e37c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23e37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e380: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x23e380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e384: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23e384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e388: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E388u;
    {
        const bool branch_taken_0x23e388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E388u;
            // 0x23e38c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e388) {
            ctx->pc = 0x23E39Cu;
            goto label_23e39c;
        }
    }
    ctx->pc = 0x23E390u;
    // 0x23e390: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e394: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23E394u;
    {
        const bool branch_taken_0x23e394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E394u;
            // 0x23e398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e394) {
            ctx->pc = 0x23E3C0u;
            goto label_23e3c0;
        }
    }
    ctx->pc = 0x23E39Cu;
label_23e39c:
    // 0x23e39c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e3a0: 0xc052ca0  jal         func_14B280
    ctx->pc = 0x23E3A0u;
    SET_GPR_U32(ctx, 31, 0x23E3A8u);
    ctx->pc = 0x23E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3A0u;
            // 0x23e3a4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3A8u; }
        if (ctx->pc != 0x23E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3A8u; }
        if (ctx->pc != 0x23E3A8u) { return; }
    }
    ctx->pc = 0x23E3A8u;
label_23e3a8:
    // 0x23e3a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e3ac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23e3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23e3b0: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x23E3B0u;
    SET_GPR_U32(ctx, 31, 0x23E3B8u);
    ctx->pc = 0x23E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3B0u;
            // 0x23e3b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3B8u; }
        if (ctx->pc != 0x23E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3B8u; }
        if (ctx->pc != 0x23E3B8u) { return; }
    }
    ctx->pc = 0x23E3B8u;
label_23e3b8:
    // 0x23e3b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x23e3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23e3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e3c0:
    // 0x23e3c0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E3C0u;
    {
        const bool branch_taken_0x23e3c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3C0u;
            // 0x23e3c4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3c0) {
            ctx->pc = 0x23E3D4u;
            goto label_23e3d4;
        }
    }
    ctx->pc = 0x23E3C8u;
    // 0x23e3c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e3cc: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E3CCu;
    {
        const bool branch_taken_0x23e3cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3CCu;
            // 0x23e3d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3cc) {
            ctx->pc = 0x23E3F4u;
            goto label_23e3f4;
        }
    }
    ctx->pc = 0x23E3D4u;
label_23e3d4:
    // 0x23e3d4: 0xc052cc0  jal         func_14B300
    ctx->pc = 0x23E3D4u;
    SET_GPR_U32(ctx, 31, 0x23E3DCu);
    ctx->pc = 0x23E3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3D4u;
            // 0x23e3d8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3DCu; }
        if (ctx->pc != 0x23E3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3DCu; }
        if (ctx->pc != 0x23E3DCu) { return; }
    }
    ctx->pc = 0x23E3DCu;
label_23e3dc:
    // 0x23e3dc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e3e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x23e3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23e3e4: 0xc052cd0  jal         func_14B340
    ctx->pc = 0x23E3E4u;
    SET_GPR_U32(ctx, 31, 0x23E3ECu);
    ctx->pc = 0x23E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3E4u;
            // 0x23e3e8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3ECu; }
        if (ctx->pc != 0x23E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3ECu; }
        if (ctx->pc != 0x23E3ECu) { return; }
    }
    ctx->pc = 0x23E3ECu;
label_23e3ec:
    // 0x23e3ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23e3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23e3f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e3f4:
    // 0x23e3f4: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E3F4u;
    {
        const bool branch_taken_0x23e3f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e3f4) {
            ctx->pc = 0x23E430u;
            goto label_23e430;
        }
    }
    ctx->pc = 0x23E3FCu;
    // 0x23e3fc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x23e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e400: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23e404: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x23e404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e408: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23e408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23e40c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23e40cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e410: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23e410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23e414: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x23e414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x23e418: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x23e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e41c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e420: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23e420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e424: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23e424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23e428: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23E428u;
    {
        const bool branch_taken_0x23e428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E428u;
            // 0x23e42c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e428) {
            ctx->pc = 0x23E450u;
            goto label_23e450;
        }
    }
    ctx->pc = 0x23E430u;
label_23e430:
    // 0x23e430: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x23e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e434: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x23e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23e438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e43c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x23e43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x23e440: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x23e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e444: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23e448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e44c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x23e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_23e450:
    // 0x23e450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23e454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23e458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e464: 0x3e00008  jr          $ra
    ctx->pc = 0x23E464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E464u;
            // 0x23e468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E46Cu;
}
