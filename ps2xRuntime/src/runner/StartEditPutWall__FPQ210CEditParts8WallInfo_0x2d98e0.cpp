#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartEditPutWall__FPQ210CEditParts8WallInfo
// Address: 0x2d98e0 - 0x2d996c
void StartEditPutWall__FPQ210CEditParts8WallInfo_0x2d98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartEditPutWall__FPQ210CEditParts8WallInfo_0x2d98e0");
#endif

    switch (ctx->pc) {
        case 0x2d98fcu: goto label_2d98fc;
        case 0x2d995cu: goto label_2d995c;
        default: break;
    }

    ctx->pc = 0x2d98e0u;

    // 0x2d98e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d98e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d98e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d98e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d98ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d98ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98f0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d98f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2d98f4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2D98F4u;
    SET_GPR_U32(ctx, 31, 0x2D98FCu);
    ctx->pc = 0x2D98F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98F4u;
            // 0x2d98f8: 0x24848990  addiu       $a0, $a0, -0x7670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D98FCu; }
        if (ctx->pc != 0x2D98FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D98FCu; }
        if (ctx->pc != 0x2D98FCu) { return; }
    }
    ctx->pc = 0x2D98FCu;
label_2d98fc:
    // 0x2d98fc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2d98fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d9900: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2d9900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x2d9904: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2d9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9908: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2d9908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2d990c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9910: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d9910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2d9914: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2d9914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9918: 0x246389a0  addiu       $v1, $v1, -0x7660
    ctx->pc = 0x2d9918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936992));
    // 0x2d991c: 0x244289b0  addiu       $v0, $v0, -0x7650
    ctx->pc = 0x2d991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937008));
    // 0x2d9920: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2d9920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2d9924: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2d9924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d9928: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2d9928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d992c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2d992cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d9930: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2d9930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d9934: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2d9934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d9938: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x2d9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d993c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2d993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9940: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2d9940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9944: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2d9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9948: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d9948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d994c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d994cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d9950: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d9950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d9954: 0xc04e624  jal         func_139890
    ctx->pc = 0x2D9954u;
    SET_GPR_U32(ctx, 31, 0x2D995Cu);
    ctx->pc = 0x2D9958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9954u;
            // 0x2d9958: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D995Cu; }
        if (ctx->pc != 0x2D995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D995Cu; }
        if (ctx->pc != 0x2D995Cu) { return; }
    }
    ctx->pc = 0x2D995Cu;
label_2d995c:
    // 0x2d995c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9964: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9964u;
            // 0x2d9968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D996Cu;
}
