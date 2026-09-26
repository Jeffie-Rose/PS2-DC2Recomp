#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CItemSelectFv
// Address: 0x24f150 - 0x24f24c
void ps2___ct__11CItemSelectFv_0x24f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CItemSelectFv_0x24f150");
#endif

    switch (ctx->pc) {
        case 0x24f164u: goto label_24f164;
        case 0x24f188u: goto label_24f188;
        case 0x24f1a0u: goto label_24f1a0;
        case 0x24f1e4u: goto label_24f1e4;
        case 0x24f21cu: goto label_24f21c;
        case 0x24f230u: goto label_24f230;
        case 0x24f238u: goto label_24f238;
        default: break;
    }

    ctx->pc = 0x24f150u;

    // 0x24f150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24f158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f15c: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x24F15Cu;
    SET_GPR_U32(ctx, 31, 0x24F164u);
    ctx->pc = 0x24F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F15Cu;
            // 0x24f160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F164u; }
        if (ctx->pc != 0x24F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F164u; }
        if (ctx->pc != 0x24F164u) { return; }
    }
    ctx->pc = 0x24F164u;
label_24f164:
    // 0x24f164: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24f164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24f168: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x24f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x24f16c: 0x24425f80  addiu       $v0, $v0, 0x5F80
    ctx->pc = 0x24f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24448));
    // 0x24f170: 0x26040410  addiu       $a0, $s0, 0x410
    ctx->pc = 0x24f170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x24f174: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x24f174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x24f178: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24f178u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x24f17c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x24f17cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x24f180: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x24F180u;
    SET_GPR_U32(ctx, 31, 0x24F188u);
    ctx->pc = 0x24F184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F180u;
            // 0x24f184: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F188u; }
        if (ctx->pc != 0x24F188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F188u; }
        if (ctx->pc != 0x24F188u) { return; }
    }
    ctx->pc = 0x24F188u;
label_24f188:
    // 0x24f188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24f188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24f18c: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x24f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x24f190: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24f190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x24f194: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x24f194u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x24f198: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x24F198u;
    SET_GPR_U32(ctx, 31, 0x24F1A0u);
    ctx->pc = 0x24F19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F198u;
            // 0x24f19c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F1A0u; }
        if (ctx->pc != 0x24F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F1A0u; }
        if (ctx->pc != 0x24F1A0u) { return; }
    }
    ctx->pc = 0x24F1A0u;
label_24f1a0:
    // 0x24f1a0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x24f1a4: 0xa6000402  sh          $zero, 0x402($s0)
    ctx->pc = 0x24f1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 0));
    // 0x24f1a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24f1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24f1ac: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x24f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    // 0x24f1b0: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x24f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
    // 0x24f1b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x24f1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24f1b8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x24f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x24f1bc: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x24f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x24f1c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x24f1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24f1c4: 0xae000434  sw          $zero, 0x434($s0)
    ctx->pc = 0x24f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 0));
    // 0x24f1c8: 0xae000430  sw          $zero, 0x430($s0)
    ctx->pc = 0x24f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 0));
    // 0x24f1cc: 0x26040410  addiu       $a0, $s0, 0x410
    ctx->pc = 0x24f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x24f1d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x24f1d4: 0xae000438  sw          $zero, 0x438($s0)
    ctx->pc = 0x24f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 0));
    // 0x24f1d8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x24f1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24f1dc: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x24F1DCu;
    SET_GPR_U32(ctx, 31, 0x24F1E4u);
    ctx->pc = 0x24F1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F1DCu;
            // 0x24f1e0: 0xae00043c  sw          $zero, 0x43C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1084), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F1E4u; }
        if (ctx->pc != 0x24F1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F1E4u; }
        if (ctx->pc != 0x24F1E4u) { return; }
    }
    ctx->pc = 0x24F1E4u;
label_24f1e4:
    // 0x24f1e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x24f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x24f1e8: 0x3c034230  lui         $v1, 0x4230
    ctx->pc = 0x24f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16944 << 16));
    // 0x24f1ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24f1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24f1f0: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x24f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x24f1f4: 0xc6030410  lwc1        $f3, 0x410($s0)
    ctx->pc = 0x24f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f1f8: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x24f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
    // 0x24f1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f200: 0xc6010414  lwc1        $f1, 0x414($s0)
    ctx->pc = 0x24f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f204: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x24f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x24f208: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x24f208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24f20c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x24f20cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24f210: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x24f210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24f214: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x24F214u;
    SET_GPR_U32(ctx, 31, 0x24F21Cu);
    ctx->pc = 0x24F218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F214u;
            // 0x24f218: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F21Cu; }
        if (ctx->pc != 0x24F21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F21Cu; }
        if (ctx->pc != 0x24F21Cu) { return; }
    }
    ctx->pc = 0x24F21Cu;
label_24f21c:
    // 0x24f21c: 0xae000444  sw          $zero, 0x444($s0)
    ctx->pc = 0x24f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 0));
    // 0x24f220: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24f224: 0xae000440  sw          $zero, 0x440($s0)
    ctx->pc = 0x24f224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 0));
    // 0x24f228: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x24F228u;
    SET_GPR_U32(ctx, 31, 0x24F230u);
    ctx->pc = 0x24F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F228u;
            // 0x24f22c: 0xae020448  sw          $v0, 0x448($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F230u; }
        if (ctx->pc != 0x24F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F230u; }
        if (ctx->pc != 0x24F230u) { return; }
    }
    ctx->pc = 0x24F230u;
label_24f230:
    // 0x24f230: 0xc093c94  jal         func_24F250
    ctx->pc = 0x24F230u;
    SET_GPR_U32(ctx, 31, 0x24F238u);
    ctx->pc = 0x24F234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F230u;
            // 0x24f234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24F250u;
    if (runtime->hasFunction(0x24F250u)) {
        auto targetFn = runtime->lookupFunction(0x24F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F238u; }
        if (ctx->pc != 0x24F238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtrList__11CItemSelectFv_0x24f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F238u; }
        if (ctx->pc != 0x24F238u) { return; }
    }
    ctx->pc = 0x24F238u;
label_24f238:
    // 0x24f238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24f238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f23c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24f23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f244: 0x3e00008  jr          $ra
    ctx->pc = 0x24F244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F244u;
            // 0x24f248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F24Cu;
}
