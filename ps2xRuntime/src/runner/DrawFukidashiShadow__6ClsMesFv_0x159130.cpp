#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFukidashiShadow__6ClsMesFv
// Address: 0x159130 - 0x159310
void DrawFukidashiShadow__6ClsMesFv_0x159130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFukidashiShadow__6ClsMesFv_0x159130");
#endif

    switch (ctx->pc) {
        case 0x15919cu: goto label_15919c;
        case 0x1591b0u: goto label_1591b0;
        case 0x1591bcu: goto label_1591bc;
        case 0x1591c8u: goto label_1591c8;
        case 0x1591d4u: goto label_1591d4;
        case 0x1591e0u: goto label_1591e0;
        case 0x1591ecu: goto label_1591ec;
        case 0x1591f8u: goto label_1591f8;
        case 0x159210u: goto label_159210;
        case 0x159228u: goto label_159228;
        case 0x159230u: goto label_159230;
        case 0x15924cu: goto label_15924c;
        case 0x159254u: goto label_159254;
        case 0x159260u: goto label_159260;
        case 0x159288u: goto label_159288;
        case 0x1592a8u: goto label_1592a8;
        case 0x1592ccu: goto label_1592cc;
        case 0x1592e4u: goto label_1592e4;
        default: break;
    }

    ctx->pc = 0x159130u;

    // 0x159130: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x159134: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x159134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x159138: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x159138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15913c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x159140: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x159140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x159144: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x159144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x159148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15914c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x159150: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x159150u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x159154: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x159154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x159158: 0x8c830134  lw          $v1, 0x134($a0)
    ctx->pc = 0x159158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x15915c: 0x4600061  bltz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x15915Cu;
    {
        const bool branch_taken_0x15915c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x159160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15915Cu;
            // 0x159160: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15915c) {
            ctx->pc = 0x1592E4u;
            goto label_1592e4;
        }
    }
    ctx->pc = 0x159164u;
    // 0x159164: 0x8e430138  lw          $v1, 0x138($s2)
    ctx->pc = 0x159164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x159168: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159168u;
    {
        const bool branch_taken_0x159168 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x159168) {
            ctx->pc = 0x159178u;
            goto label_159178;
        }
    }
    ctx->pc = 0x159170u;
    // 0x159170: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x159170u;
    {
        const bool branch_taken_0x159170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159170u;
            // 0x159174: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159170) {
            ctx->pc = 0x1592E8u;
            goto label_1592e8;
        }
    }
    ctx->pc = 0x159178u;
label_159178:
    // 0x159178: 0xc6410144  lwc1        $f1, 0x144($s2)
    ctx->pc = 0x159178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15917c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15917cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159180: 0xc6400148  lwc1        $f0, 0x148($s2)
    ctx->pc = 0x159180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159184: 0xc6420188  lwc1        $f2, 0x188($s2)
    ctx->pc = 0x159184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159188: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15918c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15918cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159190: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x159190u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x159194: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x159194u;
    SET_GPR_U32(ctx, 31, 0x15919Cu);
    ctx->pc = 0x159198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159194u;
            // 0x159198: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15919Cu; }
        if (ctx->pc != 0x15919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15919Cu; }
        if (ctx->pc != 0x15919Cu) { return; }
    }
    ctx->pc = 0x15919Cu;
label_15919c:
    // 0x15919c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x15919cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1591a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1591a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591a8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1591A8u;
    SET_GPR_U32(ctx, 31, 0x1591B0u);
    ctx->pc = 0x1591ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591A8u;
            // 0x1591ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591B0u; }
        if (ctx->pc != 0x1591B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591B0u; }
        if (ctx->pc != 0x1591B0u) { return; }
    }
    ctx->pc = 0x1591B0u;
label_1591b0:
    // 0x1591b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591b4: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1591B4u;
    SET_GPR_U32(ctx, 31, 0x1591BCu);
    ctx->pc = 0x1591B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591B4u;
            // 0x1591b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591BCu; }
        if (ctx->pc != 0x1591BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591BCu; }
        if (ctx->pc != 0x1591BCu) { return; }
    }
    ctx->pc = 0x1591BCu;
label_1591bc:
    // 0x1591bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591c0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1591C0u;
    SET_GPR_U32(ctx, 31, 0x1591C8u);
    ctx->pc = 0x1591C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591C0u;
            // 0x1591c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591C8u; }
        if (ctx->pc != 0x1591C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591C8u; }
        if (ctx->pc != 0x1591C8u) { return; }
    }
    ctx->pc = 0x1591C8u;
label_1591c8:
    // 0x1591c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591cc: 0xc04d424  jal         func_135090
    ctx->pc = 0x1591CCu;
    SET_GPR_U32(ctx, 31, 0x1591D4u);
    ctx->pc = 0x1591D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591CCu;
            // 0x1591d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591D4u; }
        if (ctx->pc != 0x1591D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591D4u; }
        if (ctx->pc != 0x1591D4u) { return; }
    }
    ctx->pc = 0x1591D4u;
label_1591d4:
    // 0x1591d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591d8: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1591D8u;
    SET_GPR_U32(ctx, 31, 0x1591E0u);
    ctx->pc = 0x1591DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591D8u;
            // 0x1591dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591E0u; }
        if (ctx->pc != 0x1591E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591E0u; }
        if (ctx->pc != 0x1591E0u) { return; }
    }
    ctx->pc = 0x1591E0u;
label_1591e0:
    // 0x1591e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591e4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1591E4u;
    SET_GPR_U32(ctx, 31, 0x1591ECu);
    ctx->pc = 0x1591E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591E4u;
            // 0x1591e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591ECu; }
        if (ctx->pc != 0x1591ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591ECu; }
        if (ctx->pc != 0x1591ECu) { return; }
    }
    ctx->pc = 0x1591ECu;
label_1591ec:
    // 0x1591ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591f0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1591F0u;
    SET_GPR_U32(ctx, 31, 0x1591F8u);
    ctx->pc = 0x1591F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591F0u;
            // 0x1591f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591F8u; }
        if (ctx->pc != 0x1591F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591F8u; }
        if (ctx->pc != 0x1591F8u) { return; }
    }
    ctx->pc = 0x1591F8u;
label_1591f8:
    // 0x1591f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1591fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159208: 0xc04d320  jal         func_134C80
    ctx->pc = 0x159208u;
    SET_GPR_U32(ctx, 31, 0x159210u);
    ctx->pc = 0x15920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159208u;
            // 0x15920c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159210u; }
        if (ctx->pc != 0x159210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159210u; }
        if (ctx->pc != 0x159210u) { return; }
    }
    ctx->pc = 0x159210u;
label_159210:
    // 0x159210: 0xc6410134  lwc1        $f1, 0x134($s2)
    ctx->pc = 0x159210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159214: 0xc640013c  lwc1        $f0, 0x13C($s2)
    ctx->pc = 0x159214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159218: 0xc64e0188  lwc1        $f14, 0x188($s2)
    ctx->pc = 0x159218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x15921c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15921cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x159220: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x159220u;
    SET_GPR_U32(ctx, 31, 0x159228u);
    ctx->pc = 0x159224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159220u;
            // 0x159224: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159228u; }
        if (ctx->pc != 0x159228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159228u; }
        if (ctx->pc != 0x159228u) { return; }
    }
    ctx->pc = 0x159228u;
label_159228:
    // 0x159228: 0xc0a248c  jal         func_289230
    ctx->pc = 0x159228u;
    SET_GPR_U32(ctx, 31, 0x159230u);
    ctx->pc = 0x15922Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159228u;
            // 0x15922c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159230u; }
        if (ctx->pc != 0x159230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159230u; }
        if (ctx->pc != 0x159230u) { return; }
    }
    ctx->pc = 0x159230u;
label_159230:
    // 0x159230: 0xc6410138  lwc1        $f1, 0x138($s2)
    ctx->pc = 0x159230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159234: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159238: 0xc6400140  lwc1        $f0, 0x140($s2)
    ctx->pc = 0x159238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15923c: 0xc64e0188  lwc1        $f14, 0x188($s2)
    ctx->pc = 0x15923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x159240: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x159240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x159244: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x159244u;
    SET_GPR_U32(ctx, 31, 0x15924Cu);
    ctx->pc = 0x159248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159244u;
            // 0x159248: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15924Cu; }
        if (ctx->pc != 0x15924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15924Cu; }
        if (ctx->pc != 0x15924Cu) { return; }
    }
    ctx->pc = 0x15924Cu;
label_15924c:
    // 0x15924c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15924Cu;
    SET_GPR_U32(ctx, 31, 0x159254u);
    ctx->pc = 0x159250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15924Cu;
            // 0x159250: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159254u; }
        if (ctx->pc != 0x159254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159254u; }
        if (ctx->pc != 0x159254u) { return; }
    }
    ctx->pc = 0x159254u;
label_159254:
    // 0x159254: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x159254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159258: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x159258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15925c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15925cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159260:
    // 0x159260: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x159260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x159264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159268: 0x24634490  addiu       $v1, $v1, 0x4490
    ctx->pc = 0x159268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17552));
    // 0x15926c: 0x75a021  addu        $s4, $v1, $s5
    ctx->pc = 0x15926cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x159270: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x159270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159278: 0x0  nop
    ctx->pc = 0x159278u;
    // NOP
    // 0x15927c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15927cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159280: 0xc0a248c  jal         func_289230
    ctx->pc = 0x159280u;
    SET_GPR_U32(ctx, 31, 0x159288u);
    ctx->pc = 0x159284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159280u;
            // 0x159284: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159288u; }
        if (ctx->pc != 0x159288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159288u; }
        if (ctx->pc != 0x159288u) { return; }
    }
    ctx->pc = 0x159288u;
label_159288:
    // 0x159288: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x159288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15928c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15928cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159290: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159298: 0x0  nop
    ctx->pc = 0x159298u;
    // NOP
    // 0x15929c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15929cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1592a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1592A0u;
    SET_GPR_U32(ctx, 31, 0x1592A8u);
    ctx->pc = 0x1592A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592A0u;
            // 0x1592a4: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592A8u; }
        if (ctx->pc != 0x1592A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592A8u; }
        if (ctx->pc != 0x1592A8u) { return; }
    }
    ctx->pc = 0x1592A8u;
label_1592a8:
    // 0x1592a8: 0x26240007  addiu       $a0, $s1, 0x7
    ctx->pc = 0x1592a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1592ac: 0x26430007  addiu       $v1, $s2, 0x7
    ctx->pc = 0x1592acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x1592b0: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x1592b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1592b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1592b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1592b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1592b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1592bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1592c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592c4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1592C4u;
    SET_GPR_U32(ctx, 31, 0x1592CCu);
    ctx->pc = 0x1592C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592C4u;
            // 0x1592c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592CCu; }
        if (ctx->pc != 0x1592CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592CCu; }
        if (ctx->pc != 0x1592CCu) { return; }
    }
    ctx->pc = 0x1592CCu;
label_1592cc:
    // 0x1592cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1592ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1592d0: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1592d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1592d4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1592D4u;
    {
        const bool branch_taken_0x1592d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1592D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1592D4u;
            // 0x1592d8: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592d4) {
            ctx->pc = 0x159260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_159260;
        }
    }
    ctx->pc = 0x1592DCu;
    // 0x1592dc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1592DCu;
    SET_GPR_U32(ctx, 31, 0x1592E4u);
    ctx->pc = 0x1592E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592DCu;
            // 0x1592e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592E4u; }
        if (ctx->pc != 0x1592E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592E4u; }
        if (ctx->pc != 0x1592E4u) { return; }
    }
    ctx->pc = 0x1592E4u;
label_1592e4:
    // 0x1592e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1592e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1592e8:
    // 0x1592e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1592e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1592ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1592ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1592f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1592f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1592f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1592f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1592f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1592f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1592fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1592fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159300: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159304: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159308: 0x3e00008  jr          $ra
    ctx->pc = 0x159308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159308u;
            // 0x15930c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159310u;
}
