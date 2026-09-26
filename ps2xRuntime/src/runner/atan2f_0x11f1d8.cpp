#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: atan2f
// Address: 0x11f1d8 - 0x11f300
void atan2f_0x11f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atan2f_0x11f1d8");
#endif

    switch (ctx->pc) {
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f218u: goto label_11f218;
        case 0x11f228u: goto label_11f228;
        case 0x11f25cu: goto label_11f25c;
        case 0x11f268u: goto label_11f268;
        case 0x11f29cu: goto label_11f29c;
        case 0x11f2acu: goto label_11f2ac;
        case 0x11f2c8u: goto label_11f2c8;
        case 0x11f2d8u: goto label_11f2d8;
        default: break;
    }

    ctx->pc = 0x11f1d8u;

    // 0x11f1d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11f1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f1dc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11f1dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11f1e0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11f1e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11f1e4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11f1e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11f1e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11f1ec: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x11f1ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11f1f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f1f4: 0xc046bfe  jal         func_11AFF8
    ctx->pc = 0x11F1F4u;
    SET_GPR_U32(ctx, 31, 0x11F1FCu);
    ctx->pc = 0x11F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1F4u;
            // 0x11f1f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AFF8u;
    if (runtime->hasFunction(0x11AFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11AFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1FCu; }
        if (ctx->pc != 0x11F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_atan2f_0x11aff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1FCu; }
        if (ctx->pc != 0x11F1FCu) { return; }
    }
    ctx->pc = 0x11F1FCu;
label_11f1fc:
    // 0x11f1fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11f200: 0x8c501930  lw          $s0, 0x1930($v0)
    ctx->pc = 0x11f200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6448)));
    // 0x11f204: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f208: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x11F208u;
    {
        const bool branch_taken_0x11f208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F208u;
            // 0x11f20c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f208) {
            ctx->pc = 0x11F2E0u;
            goto label_11f2e0;
        }
    }
    ctx->pc = 0x11F210u;
    // 0x11f210: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11F210u;
    SET_GPR_U32(ctx, 31, 0x11F218u);
    ctx->pc = 0x11F214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F210u;
            // 0x11f214: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F218u; }
        if (ctx->pc != 0x11F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F218u; }
        if (ctx->pc != 0x11F218u) { return; }
    }
    ctx->pc = 0x11F218u;
label_11f218:
    // 0x11f218: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x11F218u;
    {
        const bool branch_taken_0x11f218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F218u;
            // 0x11f21c: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f218) {
            ctx->pc = 0x11F2E4u;
            goto label_11f2e4;
        }
    }
    ctx->pc = 0x11F220u;
    // 0x11f220: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11F220u;
    SET_GPR_U32(ctx, 31, 0x11F228u);
    ctx->pc = 0x11F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F220u;
            // 0x11f224: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F228u; }
        if (ctx->pc != 0x11F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F228u; }
        if (ctx->pc != 0x11F228u) { return; }
    }
    ctx->pc = 0x11F228u;
label_11f228:
    // 0x11f228: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x11F228u;
    {
        const bool branch_taken_0x11f228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F228u;
            // 0x11f22c: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f228) {
            ctx->pc = 0x11F2E4u;
            goto label_11f2e4;
        }
    }
    ctx->pc = 0x11F230u;
    // 0x11f230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f234: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x11f234u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f238: 0x0  nop
    ctx->pc = 0x11f238u;
    // NOP
    // 0x11f23c: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x11F23Cu;
    {
        const bool branch_taken_0x11f23c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f23c) {
            ctx->pc = 0x11F240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F23Cu;
            // 0x11f240: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F2E4u;
            goto label_11f2e4;
        }
    }
    ctx->pc = 0x11F244u;
    // 0x11f244: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11f244u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f248: 0x0  nop
    ctx->pc = 0x11f248u;
    // NOP
    // 0x11f24c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x11F24Cu;
    {
        const bool branch_taken_0x11f24c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F24Cu;
            // 0x11f250: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f24c) {
            ctx->pc = 0x11F2E4u;
            goto label_11f2e4;
        }
    }
    ctx->pc = 0x11F254u;
    // 0x11f254: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x11F254u;
    SET_GPR_U32(ctx, 31, 0x11F25Cu);
    ctx->pc = 0x11F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F254u;
            // 0x11f258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F25Cu; }
        if (ctx->pc != 0x11F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F25Cu; }
        if (ctx->pc != 0x11F25Cu) { return; }
    }
    ctx->pc = 0x11F25Cu;
label_11f25c:
    // 0x11f25c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11f25cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x11f260: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x11F260u;
    SET_GPR_U32(ctx, 31, 0x11F268u);
    ctx->pc = 0x11F264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F260u;
            // 0x11f264: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F268u; }
        if (ctx->pc != 0x11F268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F268u; }
        if (ctx->pc != 0x11F268u) { return; }
    }
    ctx->pc = 0x11F268u;
label_11f268:
    // 0x11f268: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x11f268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x11f26c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f278: 0x24631a10  addiu       $v1, $v1, 0x1A10
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6672));
    // 0x11f27c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x11f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x11f280: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11f280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11f284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f288: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11f288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11f28c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F28Cu;
    {
        const bool branch_taken_0x11f28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F28Cu;
            // 0x11f290: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f28c) {
            ctx->pc = 0x11F2A4u;
            goto label_11f2a4;
        }
    }
    ctx->pc = 0x11F294u;
    // 0x11f294: 0xc047778  jal         func_11DDE0
    ctx->pc = 0x11F294u;
    SET_GPR_U32(ctx, 31, 0x11F29Cu);
    ctx->pc = 0x11F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F294u;
            // 0x11f298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDE0u;
    if (runtime->hasFunction(0x11DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F29Cu; }
        if (ctx->pc != 0x11F29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x11dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F29Cu; }
        if (ctx->pc != 0x11F29Cu) { return; }
    }
    ctx->pc = 0x11F29Cu;
label_11f29c:
    // 0x11f29c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F29Cu;
    {
        const bool branch_taken_0x11f29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F29Cu;
            // 0x11f2a0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f29c) {
            ctx->pc = 0x11F2B8u;
            goto label_11f2b8;
        }
    }
    ctx->pc = 0x11F2A4u;
label_11f2a4:
    // 0x11f2a4: 0xc04950a  jal         func_125428
    ctx->pc = 0x11F2A4u;
    SET_GPR_U32(ctx, 31, 0x11F2ACu);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2ACu; }
        if (ctx->pc != 0x11F2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2ACu; }
        if (ctx->pc != 0x11F2ACu) { return; }
    }
    ctx->pc = 0x11F2ACu;
label_11f2ac:
    // 0x11f2ac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x11f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11f2b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11f2b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11f2b8:
    // 0x11f2b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2B8u;
    {
        const bool branch_taken_0x11f2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f2b8) {
            ctx->pc = 0x11F2D0u;
            goto label_11f2d0;
        }
    }
    ctx->pc = 0x11F2C0u;
    // 0x11f2c0: 0xc04950a  jal         func_125428
    ctx->pc = 0x11F2C0u;
    SET_GPR_U32(ctx, 31, 0x11F2C8u);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2C8u; }
        if (ctx->pc != 0x11F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2C8u; }
        if (ctx->pc != 0x11F2C8u) { return; }
    }
    ctx->pc = 0x11F2C8u;
label_11f2c8:
    // 0x11f2c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f2cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11f2d0:
    // 0x11f2d0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x11F2D0u;
    SET_GPR_U32(ctx, 31, 0x11F2D8u);
    ctx->pc = 0x11F2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2D0u;
            // 0x11f2d4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2D8u; }
        if (ctx->pc != 0x11F2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F2D8u; }
        if (ctx->pc != 0x11F2D8u) { return; }
    }
    ctx->pc = 0x11F2D8u;
label_11f2d8:
    // 0x11f2d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F2D8u;
    {
        const bool branch_taken_0x11f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2D8u;
            // 0x11f2dc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2d8) {
            ctx->pc = 0x11F2E8u;
            goto label_11f2e8;
        }
    }
    ctx->pc = 0x11F2E0u;
label_11f2e0:
    // 0x11f2e0: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x11f2e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_11f2e4:
    // 0x11f2e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11f2e8:
    // 0x11f2e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11f2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f2ec: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x11f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11f2f0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f2f4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11f2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2F8u;
            // 0x11f2fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F300u;
}
