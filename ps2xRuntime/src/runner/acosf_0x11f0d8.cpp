#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: acosf
// Address: 0x11f0d8 - 0x11f1d4
void acosf_0x11f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("acosf_0x11f0d8");
#endif

    switch (ctx->pc) {
        case 0x11f0f4u: goto label_11f0f4;
        case 0x11f110u: goto label_11f110;
        case 0x11f120u: goto label_11f120;
        case 0x11f154u: goto label_11f154;
        case 0x11f174u: goto label_11f174;
        case 0x11f184u: goto label_11f184;
        case 0x11f1a0u: goto label_11f1a0;
        case 0x11f1b0u: goto label_11f1b0;
        default: break;
    }

    ctx->pc = 0x11f0d8u;

    // 0x11f0d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f0dc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11f0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11f0e0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11f0e4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11f0e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11f0e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f0ec: 0xc046af2  jal         func_11ABC8
    ctx->pc = 0x11F0ECu;
    SET_GPR_U32(ctx, 31, 0x11F0F4u);
    ctx->pc = 0x11F0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0ECu;
            // 0x11f0f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ABC8u;
    if (runtime->hasFunction(0x11ABC8u)) {
        auto targetFn = runtime->lookupFunction(0x11ABC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F0F4u; }
        if (ctx->pc != 0x11F0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_acosf_0x11abc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F0F4u; }
        if (ctx->pc != 0x11F0F4u) { return; }
    }
    ctx->pc = 0x11F0F4u;
label_11f0f4:
    // 0x11f0f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11f0f8: 0x8c501930  lw          $s0, 0x1930($v0)
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6448)));
    // 0x11f0fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f100: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x11F100u;
    {
        const bool branch_taken_0x11f100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F100u;
            // 0x11f104: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f100) {
            ctx->pc = 0x11F1B8u;
            goto label_11f1b8;
        }
    }
    ctx->pc = 0x11F108u;
    // 0x11f108: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11F108u;
    SET_GPR_U32(ctx, 31, 0x11F110u);
    ctx->pc = 0x11F10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F108u;
            // 0x11f10c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F110u; }
        if (ctx->pc != 0x11F110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F110u; }
        if (ctx->pc != 0x11F110u) { return; }
    }
    ctx->pc = 0x11F110u;
label_11f110:
    // 0x11f110: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11F110u;
    {
        const bool branch_taken_0x11f110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F110u;
            // 0x11f114: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f110) {
            ctx->pc = 0x11F1BCu;
            goto label_11f1bc;
        }
    }
    ctx->pc = 0x11F118u;
    // 0x11f118: 0xc04799e  jal         func_11E678
    ctx->pc = 0x11F118u;
    SET_GPR_U32(ctx, 31, 0x11F120u);
    ctx->pc = 0x11F11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F118u;
            // 0x11f11c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E678u;
    if (runtime->hasFunction(0x11E678u)) {
        auto targetFn = runtime->lookupFunction(0x11E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F120u; }
        if (ctx->pc != 0x11F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabsf_0x11e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F120u; }
        if (ctx->pc != 0x11F120u) { return; }
    }
    ctx->pc = 0x11F120u;
label_11f120:
    // 0x11f120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11f128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f12c: 0x0  nop
    ctx->pc = 0x11f12cu;
    // NOP
    // 0x11f130: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x11F130u;
    {
        const bool branch_taken_0x11f130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F130u;
            // 0x11f134: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f130) {
            ctx->pc = 0x11F1B8u;
            goto label_11f1b8;
        }
    }
    ctx->pc = 0x11F138u;
    // 0x11f138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f13c: 0x24421a08  addiu       $v0, $v0, 0x1A08
    ctx->pc = 0x11f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6664));
    // 0x11f140: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x11f140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x11f144: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11f144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11f148: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f148u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f14c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x11F14Cu;
    SET_GPR_U32(ctx, 31, 0x11F154u);
    ctx->pc = 0x11F150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F14Cu;
            // 0x11f150: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F154u; }
        if (ctx->pc != 0x11F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F154u; }
        if (ctx->pc != 0x11F154u) { return; }
    }
    ctx->pc = 0x11F154u;
label_11f154:
    // 0x11f154: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f158: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x11f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x11f15c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x11f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x11f160: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f164: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F164u;
    {
        const bool branch_taken_0x11f164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F164u;
            // 0x11f168: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f164) {
            ctx->pc = 0x11F17Cu;
            goto label_11f17c;
        }
    }
    ctx->pc = 0x11F16Cu;
    // 0x11f16c: 0xc047778  jal         func_11DDE0
    ctx->pc = 0x11F16Cu;
    SET_GPR_U32(ctx, 31, 0x11F174u);
    ctx->pc = 0x11F170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F16Cu;
            // 0x11f170: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDE0u;
    if (runtime->hasFunction(0x11DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F174u; }
        if (ctx->pc != 0x11F174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x11dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F174u; }
        if (ctx->pc != 0x11F174u) { return; }
    }
    ctx->pc = 0x11F174u;
label_11f174:
    // 0x11f174: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F174u;
    {
        const bool branch_taken_0x11f174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F174u;
            // 0x11f178: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f174) {
            ctx->pc = 0x11F190u;
            goto label_11f190;
        }
    }
    ctx->pc = 0x11F17Cu;
label_11f17c:
    // 0x11f17c: 0xc04950a  jal         func_125428
    ctx->pc = 0x11F17Cu;
    SET_GPR_U32(ctx, 31, 0x11F184u);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F184u; }
        if (ctx->pc != 0x11F184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F184u; }
        if (ctx->pc != 0x11F184u) { return; }
    }
    ctx->pc = 0x11F184u;
label_11f184:
    // 0x11f184: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11f188: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11f188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11f18c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11f190:
    // 0x11f190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F190u;
    {
        const bool branch_taken_0x11f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f190) {
            ctx->pc = 0x11F1A8u;
            goto label_11f1a8;
        }
    }
    ctx->pc = 0x11F198u;
    // 0x11f198: 0xc04950a  jal         func_125428
    ctx->pc = 0x11F198u;
    SET_GPR_U32(ctx, 31, 0x11F1A0u);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1A0u; }
        if (ctx->pc != 0x11F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1A0u; }
        if (ctx->pc != 0x11F1A0u) { return; }
    }
    ctx->pc = 0x11F1A0u;
label_11f1a0:
    // 0x11f1a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f1a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11f1a8:
    // 0x11f1a8: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x11F1A8u;
    SET_GPR_U32(ctx, 31, 0x11F1B0u);
    ctx->pc = 0x11F1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1A8u;
            // 0x11f1ac: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1B0u; }
        if (ctx->pc != 0x11F1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1B0u; }
        if (ctx->pc != 0x11F1B0u) { return; }
    }
    ctx->pc = 0x11F1B0u;
label_11f1b0:
    // 0x11f1b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F1B0u;
    {
        const bool branch_taken_0x11f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1B0u;
            // 0x11f1b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1b0) {
            ctx->pc = 0x11F1C0u;
            goto label_11f1c0;
        }
    }
    ctx->pc = 0x11F1B8u;
label_11f1b8:
    // 0x11f1b8: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x11f1b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_11f1bc:
    // 0x11f1bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11f1c0:
    // 0x11f1c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11f1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f1c4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f1c8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1CCu;
            // 0x11f1d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F1D4u;
}
