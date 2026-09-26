#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEsaDropRoot__FP9CFishFoodf
// Address: 0x20f8f0 - 0x20fa2c
void DrawEsaDropRoot__FP9CFishFoodf_0x20f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEsaDropRoot__FP9CFishFoodf_0x20f8f0");
#endif

    switch (ctx->pc) {
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        default: break;
    }

    ctx->pc = 0x20f8f0u;

label_20f8f0:
    // 0x20f8f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x20f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_20f8f4:
    // 0x20f8f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20f8f8:
    // 0x20f8f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20f8fc:
    // 0x20f8fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20f8fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20f900:
    // 0x20f900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f904:
    // 0x20f904: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_20f908:
    if (ctx->pc == 0x20F908u) {
        ctx->pc = 0x20F908u;
            // 0x20f908: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20F90Cu;
        goto label_20f90c;
    }
    ctx->pc = 0x20F904u;
    {
        const bool branch_taken_0x20f904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F904u;
            // 0x20f908: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f904) {
            ctx->pc = 0x20FA18u;
            goto label_20fa18;
        }
    }
    ctx->pc = 0x20F90Cu;
label_20f90c:
    // 0x20f90c: 0x83829208  lb          $v0, -0x6DF8($gp)
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939144)));
label_20f910:
    // 0x20f910: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20f914:
    if (ctx->pc == 0x20F914u) {
        ctx->pc = 0x20F914u;
            // 0x20f914: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20F918u;
        goto label_20f918;
    }
    ctx->pc = 0x20F910u;
    {
        const bool branch_taken_0x20f910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F910u;
            // 0x20f914: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f910) {
            ctx->pc = 0x20F924u;
            goto label_20f924;
        }
    }
    ctx->pc = 0x20F918u;
label_20f918:
    // 0x20f918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f91c:
    // 0x20f91c: 0xaf809204  sw          $zero, -0x6DFC($gp)
    ctx->pc = 0x20f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 0));
label_20f920:
    // 0x20f920: 0xa3829208  sb          $v0, -0x6DF8($gp)
    ctx->pc = 0x20f920u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939144), (uint8_t)GPR_U32(ctx, 2));
label_20f924:
    // 0x20f924: 0xc04d0e8  jal         func_1343A0
label_20f928:
    if (ctx->pc == 0x20F928u) {
        ctx->pc = 0x20F92Cu;
        goto label_20f92c;
    }
    ctx->pc = 0x20F924u;
    SET_GPR_U32(ctx, 31, 0x20F92Cu);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F92Cu; }
        if (ctx->pc != 0x20F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F92Cu; }
        if (ctx->pc != 0x20F92Cu) { return; }
    }
    ctx->pc = 0x20F92Cu;
label_20f92c:
    // 0x20f92c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f930:
    // 0x20f930: 0xc087ec4  jal         func_21FB10
label_20f934:
    if (ctx->pc == 0x20F934u) {
        ctx->pc = 0x20F934u;
            // 0x20f934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20F938u;
        goto label_20f938;
    }
    ctx->pc = 0x20F930u;
    SET_GPR_U32(ctx, 31, 0x20F938u);
    ctx->pc = 0x20F934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F930u;
            // 0x20f934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F938u; }
        if (ctx->pc != 0x20F938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F938u; }
        if (ctx->pc != 0x20F938u) { return; }
    }
    ctx->pc = 0x20F938u;
label_20f938:
    // 0x20f938: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f93c:
    // 0x20f93c: 0xc04d44c  jal         func_135130
label_20f940:
    if (ctx->pc == 0x20F940u) {
        ctx->pc = 0x20F940u;
            // 0x20f940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20F944u;
        goto label_20f944;
    }
    ctx->pc = 0x20F93Cu;
    SET_GPR_U32(ctx, 31, 0x20F944u);
    ctx->pc = 0x20F940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F93Cu;
            // 0x20f940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F944u; }
        if (ctx->pc != 0x20F944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F944u; }
        if (ctx->pc != 0x20F944u) { return; }
    }
    ctx->pc = 0x20F944u;
label_20f944:
    // 0x20f944: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f948:
    // 0x20f948: 0xc04d3e4  jal         func_134F90
label_20f94c:
    if (ctx->pc == 0x20F94Cu) {
        ctx->pc = 0x20F94Cu;
            // 0x20f94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20F950u;
        goto label_20f950;
    }
    ctx->pc = 0x20F948u;
    SET_GPR_U32(ctx, 31, 0x20F950u);
    ctx->pc = 0x20F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F948u;
            // 0x20f94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F950u; }
        if (ctx->pc != 0x20F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F950u; }
        if (ctx->pc != 0x20F950u) { return; }
    }
    ctx->pc = 0x20F950u;
label_20f950:
    // 0x20f950: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20f950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f954:
    // 0x20f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f958:
    // 0x20f958: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20f958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20f95c:
    // 0x20f95c: 0x320f809  jalr        $t9
label_20f960:
    if (ctx->pc == 0x20F960u) {
        ctx->pc = 0x20F960u;
            // 0x20f960: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x20F964u;
        goto label_20f964;
    }
    ctx->pc = 0x20F95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F964u);
        ctx->pc = 0x20F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F95Cu;
            // 0x20f960: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F964u; }
            if (ctx->pc != 0x20F964u) { return; }
        }
        }
    }
    ctx->pc = 0x20F964u;
label_20f964:
    // 0x20f964: 0x10000025  b           . + 4 + (0x25 << 2)
label_20f968:
    if (ctx->pc == 0x20F968u) {
        ctx->pc = 0x20F96Cu;
        goto label_20f96c;
    }
    ctx->pc = 0x20F964u;
    {
        const bool branch_taken_0x20f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f964) {
            ctx->pc = 0x20F9FCu;
            goto label_20f9fc;
        }
    }
    ctx->pc = 0x20F96Cu;
label_20f96c:
    // 0x20f96c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_20f970:
    // 0x20f970: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20f970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20f974:
    // 0x20f974: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x20f974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_20f978:
    // 0x20f978: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f97c:
    // 0x20f97c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20f97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f980:
    // 0x20f980: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f984:
    // 0x20f984: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f988:
    // 0x20f988: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x20f988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f98c:
    // 0x20f98c: 0xc0516ec  jal         func_145BB0
label_20f990:
    if (ctx->pc == 0x20F990u) {
        ctx->pc = 0x20F990u;
            // 0x20f990: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F994u;
        goto label_20f994;
    }
    ctx->pc = 0x20F98Cu;
    SET_GPR_U32(ctx, 31, 0x20F994u);
    ctx->pc = 0x20F990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F98Cu;
            // 0x20f990: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F994u; }
        if (ctx->pc != 0x20F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F994u; }
        if (ctx->pc != 0x20F994u) { return; }
    }
    ctx->pc = 0x20F994u;
label_20f994:
    // 0x20f994: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_20f998:
    if (ctx->pc == 0x20F998u) {
        ctx->pc = 0x20F998u;
            // 0x20f998: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20F99Cu;
        goto label_20f99c;
    }
    ctx->pc = 0x20F994u;
    {
        const bool branch_taken_0x20f994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F994u;
            // 0x20f998: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f994) {
            ctx->pc = 0x20F9DCu;
            goto label_20f9dc;
        }
    }
    ctx->pc = 0x20F99Cu;
label_20f99c:
    // 0x20f99c: 0xc04d128  jal         func_1344A0
label_20f9a0:
    if (ctx->pc == 0x20F9A0u) {
        ctx->pc = 0x20F9A0u;
            // 0x20f9a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20F9A4u;
        goto label_20f9a4;
    }
    ctx->pc = 0x20F99Cu;
    SET_GPR_U32(ctx, 31, 0x20F9A4u);
    ctx->pc = 0x20F9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F99Cu;
            // 0x20f9a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9A4u; }
        if (ctx->pc != 0x20F9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9A4u; }
        if (ctx->pc != 0x20F9A4u) { return; }
    }
    ctx->pc = 0x20F9A4u;
label_20f9a4:
    // 0x20f9a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20f9a8:
    // 0x20f9a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f9ac:
    // 0x20f9ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20f9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f9b0:
    // 0x20f9b0: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x20f9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_20f9b4:
    // 0x20f9b4: 0xc04d320  jal         func_134C80
label_20f9b8:
    if (ctx->pc == 0x20F9B8u) {
        ctx->pc = 0x20F9B8u;
            // 0x20f9b8: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x20F9BCu;
        goto label_20f9bc;
    }
    ctx->pc = 0x20F9B4u;
    SET_GPR_U32(ctx, 31, 0x20F9BCu);
    ctx->pc = 0x20F9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F9B4u;
            // 0x20f9b8: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9BCu; }
        if (ctx->pc != 0x20F9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9BCu; }
        if (ctx->pc != 0x20F9BCu) { return; }
    }
    ctx->pc = 0x20F9BCu;
label_20f9bc:
    // 0x20f9bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f9c0:
    // 0x20f9c0: 0xc04d318  jal         func_134C60
label_20f9c4:
    if (ctx->pc == 0x20F9C4u) {
        ctx->pc = 0x20F9C4u;
            // 0x20f9c4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x20F9C8u;
        goto label_20f9c8;
    }
    ctx->pc = 0x20F9C0u;
    SET_GPR_U32(ctx, 31, 0x20F9C8u);
    ctx->pc = 0x20F9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F9C0u;
            // 0x20f9c4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9C8u; }
        if (ctx->pc != 0x20F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9C8u; }
        if (ctx->pc != 0x20F9C8u) { return; }
    }
    ctx->pc = 0x20F9C8u;
label_20f9c8:
    // 0x20f9c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f9cc:
    // 0x20f9cc: 0xc04d318  jal         func_134C60
label_20f9d0:
    if (ctx->pc == 0x20F9D0u) {
        ctx->pc = 0x20F9D0u;
            // 0x20f9d0: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x20F9D4u;
        goto label_20f9d4;
    }
    ctx->pc = 0x20F9CCu;
    SET_GPR_U32(ctx, 31, 0x20F9D4u);
    ctx->pc = 0x20F9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F9CCu;
            // 0x20f9d0: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9D4u; }
        if (ctx->pc != 0x20F9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9D4u; }
        if (ctx->pc != 0x20F9D4u) { return; }
    }
    ctx->pc = 0x20F9D4u;
label_20f9d4:
    // 0x20f9d4: 0xc04d1a4  jal         func_134690
label_20f9d8:
    if (ctx->pc == 0x20F9D8u) {
        ctx->pc = 0x20F9D8u;
            // 0x20f9d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20F9DCu;
        goto label_20f9dc;
    }
    ctx->pc = 0x20F9D4u;
    SET_GPR_U32(ctx, 31, 0x20F9DCu);
    ctx->pc = 0x20F9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F9D4u;
            // 0x20f9d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9DCu; }
        if (ctx->pc != 0x20F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9DCu; }
        if (ctx->pc != 0x20F9DCu) { return; }
    }
    ctx->pc = 0x20F9DCu;
label_20f9dc:
    // 0x20f9dc: 0x0  nop
    ctx->pc = 0x20f9dcu;
    // NOP
label_20f9e0:
    // 0x20f9e0: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x20f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
label_20f9e4:
    // 0x20f9e4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x20f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f9e8:
    // 0x20f9e8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x20f9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_20f9ec:
    // 0x20f9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f9f0:
    // 0x20f9f0: 0x0  nop
    ctx->pc = 0x20f9f0u;
    // NOP
label_20f9f4:
    // 0x20f9f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20f9f8:
    // 0x20f9f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x20f9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20f9fc:
    // 0x20f9fc: 0x0  nop
    ctx->pc = 0x20f9fcu;
    // NOP
label_20fa00:
    // 0x20fa00: 0x27b00144  addiu       $s0, $sp, 0x144
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_20fa04:
    // 0x20fa04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20fa08:
    // 0x20fa08: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20fa08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20fa0c:
    // 0x20fa0c: 0x0  nop
    ctx->pc = 0x20fa0cu;
    // NOP
label_20fa10:
    // 0x20fa10: 0x4501ffd6  bc1t        . + 4 + (-0x2A << 2)
label_20fa14:
    if (ctx->pc == 0x20FA14u) {
        ctx->pc = 0x20FA18u;
        goto label_20fa18;
    }
    ctx->pc = 0x20FA10u;
    {
        const bool branch_taken_0x20fa10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20fa10) {
            ctx->pc = 0x20F96Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f96c;
        }
    }
    ctx->pc = 0x20FA18u;
label_20fa18:
    // 0x20fa18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20fa1c:
    // 0x20fa1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20fa20:
    // 0x20fa20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20fa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20fa24:
    // 0x20fa24: 0x3e00008  jr          $ra
label_20fa28:
    if (ctx->pc == 0x20FA28u) {
        ctx->pc = 0x20FA28u;
            // 0x20fa28: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x20FA2Cu;
        goto label_fallthrough_0x20fa24;
    }
    ctx->pc = 0x20FA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FA24u;
            // 0x20fa28: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20fa24:
    ctx->pc = 0x20FA2Cu;
}
