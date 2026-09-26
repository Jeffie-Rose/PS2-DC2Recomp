#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CLevelupInfoFv
// Address: 0x1c9380 - 0x1c973c
void Draw__12CLevelupInfoFv_0x1c9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CLevelupInfoFv_0x1c9380");
#endif

    switch (ctx->pc) {
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93bcu: goto label_1c93bc;
        case 0x1c93c4u: goto label_1c93c4;
        case 0x1c93d0u: goto label_1c93d0;
        case 0x1c93dcu: goto label_1c93dc;
        case 0x1c9440u: goto label_1c9440;
        case 0x1c9450u: goto label_1c9450;
        case 0x1c9468u: goto label_1c9468;
        case 0x1c9480u: goto label_1c9480;
        case 0x1c94a4u: goto label_1c94a4;
        case 0x1c94d0u: goto label_1c94d0;
        case 0x1c94ecu: goto label_1c94ec;
        case 0x1c950cu: goto label_1c950c;
        case 0x1c9534u: goto label_1c9534;
        case 0x1c954cu: goto label_1c954c;
        case 0x1c955cu: goto label_1c955c;
        case 0x1c956cu: goto label_1c956c;
        case 0x1c9584u: goto label_1c9584;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c95c0u: goto label_1c95c0;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9644u: goto label_1c9644;
        case 0x1c966cu: goto label_1c966c;
        case 0x1c96a0u: goto label_1c96a0;
        case 0x1c96b4u: goto label_1c96b4;
        case 0x1c96ccu: goto label_1c96cc;
        case 0x1c96ecu: goto label_1c96ec;
        case 0x1c9714u: goto label_1c9714;
        case 0x1c9720u: goto label_1c9720;
        default: break;
    }

    ctx->pc = 0x1c9380u;

    // 0x1c9380: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c9384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c9384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c9388: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c9388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c938c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c9390: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c9390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c9394: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1c9394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c9398: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1c9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c939c: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x1C939Cu;
    {
        const bool branch_taken_0x1c939c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C939Cu;
            // 0x1c93a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c939c) {
            ctx->pc = 0x1C9720u;
            goto label_1c9720;
        }
    }
    ctx->pc = 0x1C93A4u;
    // 0x1c93a4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C93A4u;
    SET_GPR_U32(ctx, 31, 0x1C93ACu);
    ctx->pc = 0x1C93A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93A4u;
            // 0x1c93a8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93ACu; }
        if (ctx->pc != 0x1C93ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93ACu; }
        if (ctx->pc != 0x1C93ACu) { return; }
    }
    ctx->pc = 0x1C93ACu;
label_1c93ac:
    // 0x1c93ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c93b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c93b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93b4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C93B4u;
    SET_GPR_U32(ctx, 31, 0x1C93BCu);
    ctx->pc = 0x1C93B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93B4u;
            // 0x1c93b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93BCu; }
        if (ctx->pc != 0x1C93BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93BCu; }
        if (ctx->pc != 0x1C93BCu) { return; }
    }
    ctx->pc = 0x1C93BCu;
label_1c93bc:
    // 0x1c93bc: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C93BCu;
    SET_GPR_U32(ctx, 31, 0x1C93C4u);
    ctx->pc = 0x1C93C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93BCu;
            // 0x1c93c0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93C4u; }
        if (ctx->pc != 0x1C93C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93C4u; }
        if (ctx->pc != 0x1C93C4u) { return; }
    }
    ctx->pc = 0x1C93C4u;
label_1c93c4:
    // 0x1c93c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c93c8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C93C8u;
    SET_GPR_U32(ctx, 31, 0x1C93D0u);
    ctx->pc = 0x1C93CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93C8u;
            // 0x1c93cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93D0u; }
        if (ctx->pc != 0x1C93D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93D0u; }
        if (ctx->pc != 0x1C93D0u) { return; }
    }
    ctx->pc = 0x1C93D0u;
label_1c93d0:
    // 0x1c93d0: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1c93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1c93d4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C93D4u;
    SET_GPR_U32(ctx, 31, 0x1C93DCu);
    ctx->pc = 0x1C93D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93D4u;
            // 0x1c93d8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93DCu; }
        if (ctx->pc != 0x1C93DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93DCu; }
        if (ctx->pc != 0x1C93DCu) { return; }
    }
    ctx->pc = 0x1C93DCu;
label_1c93dc:
    // 0x1c93dc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1c93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1c93e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c93e4: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1C93E4u;
    {
        const bool branch_taken_0x1c93e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C93E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93E4u;
            // 0x1c93e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93e4) {
            ctx->pc = 0x1C9674u;
            goto label_1c9674;
        }
    }
    ctx->pc = 0x1C93ECu;
    // 0x1c93ec: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C93ECu;
    {
        const bool branch_taken_0x1c93ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C93F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93ECu;
            // 0x1c93f0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93ec) {
            ctx->pc = 0x1C9610u;
            goto label_1c9610;
        }
    }
    ctx->pc = 0x1C93F4u;
    // 0x1c93f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c93f8: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C93F8u;
    {
        const bool branch_taken_0x1c93f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C93FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93F8u;
            // 0x1c93fc: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93f8) {
            ctx->pc = 0x1C94D8u;
            goto label_1c94d8;
        }
    }
    ctx->pc = 0x1C9400u;
    // 0x1c9400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9404: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9404u;
    {
        const bool branch_taken_0x1c9404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9404) {
            ctx->pc = 0x1C9414u;
            goto label_1c9414;
        }
    }
    ctx->pc = 0x1C940Cu;
    // 0x1c940c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1C940Cu;
    {
        const bool branch_taken_0x1c940c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C940Cu;
            // 0x1c9410: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c940c) {
            ctx->pc = 0x1C9718u;
            goto label_1c9718;
        }
    }
    ctx->pc = 0x1C9414u;
label_1c9414:
    // 0x1c9414: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1c9414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9418: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x1c941c: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1c941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1c9420: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c9420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9424: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1c9428: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c942c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c942cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9430: 0x0  nop
    ctx->pc = 0x1c9430u;
    // NOP
    // 0x1c9434: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c9434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c9438: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C9438u;
    SET_GPR_U32(ctx, 31, 0x1C9440u);
    ctx->pc = 0x1C943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9438u;
            // 0x1c943c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9440u; }
        if (ctx->pc != 0x1C9440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9440u; }
        if (ctx->pc != 0x1C9440u) { return; }
    }
    ctx->pc = 0x1C9440u;
label_1c9440:
    // 0x1c9440: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1c9440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1c9444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9448: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C9448u;
    SET_GPR_U32(ctx, 31, 0x1C9450u);
    ctx->pc = 0x1C944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9448u;
            // 0x1c944c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9450u; }
        if (ctx->pc != 0x1C9450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9450u; }
        if (ctx->pc != 0x1C9450u) { return; }
    }
    ctx->pc = 0x1C9450u;
label_1c9450:
    // 0x1c9450: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1c9450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9458: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c9458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c945c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9460: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C9460u;
    SET_GPR_U32(ctx, 31, 0x1C9468u);
    ctx->pc = 0x1C9464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9460u;
            // 0x1c9464: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9468u; }
        if (ctx->pc != 0x1C9468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9468u; }
        if (ctx->pc != 0x1C9468u) { return; }
    }
    ctx->pc = 0x1C9468u;
label_1c9468:
    // 0x1c9468: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c9468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c946c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c946cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9470: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9474: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9478: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C9478u;
    SET_GPR_U32(ctx, 31, 0x1C9480u);
    ctx->pc = 0x1C947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9478u;
            // 0x1c947c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9480u; }
        if (ctx->pc != 0x1C9480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9480u; }
        if (ctx->pc != 0x1C9480u) { return; }
    }
    ctx->pc = 0x1C9480u;
label_1c9480:
    // 0x1c9480: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c9480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c9484: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9488: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c948c: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c9490: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1c9490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9494: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9498: 0x240a00a2  addiu       $t2, $zero, 0xA2
    ctx->pc = 0x1c9498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1c949c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C949Cu;
    SET_GPR_U32(ctx, 31, 0x1C94A4u);
    ctx->pc = 0x1C94A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C949Cu;
            // 0x1c94a0: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94A4u; }
        if (ctx->pc != 0x1C94A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94A4u; }
        if (ctx->pc != 0x1C94A4u) { return; }
    }
    ctx->pc = 0x1C94A4u;
label_1c94a4:
    // 0x1c94a4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c94a8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c94a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c94ac: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c94b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c94b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c94b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94b8: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1c94b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c94bc: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1c94bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c94c0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1c94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c94c4: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x1c94c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1c94c8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C94C8u;
    SET_GPR_U32(ctx, 31, 0x1C94D0u);
    ctx->pc = 0x1C94CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94C8u;
            // 0x1c94cc: 0x2446fffd  addiu       $a2, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94D0u; }
        if (ctx->pc != 0x1C94D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94D0u; }
        if (ctx->pc != 0x1C94D0u) { return; }
    }
    ctx->pc = 0x1C94D0u;
label_1c94d0:
    // 0x1c94d0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C94D0u;
    {
        const bool branch_taken_0x1c94d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94d0) {
            ctx->pc = 0x1C9714u;
            goto label_1c9714;
        }
    }
    ctx->pc = 0x1C94D8u;
label_1c94d8:
    // 0x1c94d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c94dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c94dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c94e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94e4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C94E4u;
    SET_GPR_U32(ctx, 31, 0x1C94ECu);
    ctx->pc = 0x1C94E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94E4u;
            // 0x1c94e8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94ECu; }
        if (ctx->pc != 0x1C94ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94ECu; }
        if (ctx->pc != 0x1C94ECu) { return; }
    }
    ctx->pc = 0x1C94ECu;
label_1c94ec:
    // 0x1c94ec: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1c94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c94f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c94f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c94f4: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1c94f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c94f8: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x1c94f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c94fc: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1c94fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9500: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9504: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C9504u;
    SET_GPR_U32(ctx, 31, 0x1C950Cu);
    ctx->pc = 0x1C9508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9504u;
            // 0x1c9508: 0x240a00a2  addiu       $t2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C950Cu; }
        if (ctx->pc != 0x1C950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C950Cu; }
        if (ctx->pc != 0x1C950Cu) { return; }
    }
    ctx->pc = 0x1C950Cu;
label_1c950c:
    // 0x1c950c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c9510: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c9510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9514: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c9518: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c951c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c951cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9520: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1c9520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9524: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1c9524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c9528: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1c952c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C952Cu;
    SET_GPR_U32(ctx, 31, 0x1C9534u);
    ctx->pc = 0x1C9530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C952Cu;
            // 0x1c9530: 0x2446fffd  addiu       $a2, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9534u; }
        if (ctx->pc != 0x1C9534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9534u; }
        if (ctx->pc != 0x1C9534u) { return; }
    }
    ctx->pc = 0x1C9534u;
label_1c9534:
    // 0x1c9534: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9538: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c953c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c9540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9544: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C9544u;
    SET_GPR_U32(ctx, 31, 0x1C954Cu);
    ctx->pc = 0x1C9548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9544u;
            // 0x1c9548: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C954Cu; }
        if (ctx->pc != 0x1C954Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C954Cu; }
        if (ctx->pc != 0x1C954Cu) { return; }
    }
    ctx->pc = 0x1C954Cu;
label_1c954c:
    // 0x1c954c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c954cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c9550: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9554: 0xc079ff0  jal         func_1E7FC0
    ctx->pc = 0x1C9554u;
    SET_GPR_U32(ctx, 31, 0x1C955Cu);
    ctx->pc = 0x1C9558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9554u;
            // 0x1c9558: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C955Cu; }
        if (ctx->pc != 0x1C955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C955Cu; }
        if (ctx->pc != 0x1C955Cu) { return; }
    }
    ctx->pc = 0x1C955Cu;
label_1c955c:
    // 0x1c955c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1c955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1c9560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9564: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C9564u;
    SET_GPR_U32(ctx, 31, 0x1C956Cu);
    ctx->pc = 0x1C9568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9564u;
            // 0x1c9568: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C956Cu; }
        if (ctx->pc != 0x1C956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C956Cu; }
        if (ctx->pc != 0x1C956Cu) { return; }
    }
    ctx->pc = 0x1C956Cu;
label_1c956c:
    // 0x1c956c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9570: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c9570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9574: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9578: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c957c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C957Cu;
    SET_GPR_U32(ctx, 31, 0x1C9584u);
    ctx->pc = 0x1C9580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C957Cu;
            // 0x1c9580: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9584u; }
        if (ctx->pc != 0x1C9584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9584u; }
        if (ctx->pc != 0x1C9584u) { return; }
    }
    ctx->pc = 0x1C9584u;
label_1c9584:
    // 0x1c9584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c9584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c958c:
    // 0x1c958c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9590: 0x26270046  addiu       $a3, $s1, 0x46
    ctx->pc = 0x1c9590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 70));
    // 0x1c9594: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1c9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1c9598: 0x2628000c  addiu       $t0, $s1, 0xC
    ctx->pc = 0x1c9598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1c959c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c95a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c95a4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c95a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c95a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95ac: 0x240a00a2  addiu       $t2, $zero, 0xA2
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1c95b0: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x1c95b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c95b4: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x1c95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c95b8: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1C95B8u;
    SET_GPR_U32(ctx, 31, 0x1C95C0u);
    ctx->pc = 0x1C95BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95B8u;
            // 0x1c95bc: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95C0u; }
        if (ctx->pc != 0x1C95C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95C0u; }
        if (ctx->pc != 0x1C95C0u) { return; }
    }
    ctx->pc = 0x1C95C0u;
label_1c95c0:
    // 0x1c95c0: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1c95c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c95c4: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x1c95c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c95c8: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c95c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1c95cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c95ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95d0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c95d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c95d8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c95dc: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c95e0: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c95e4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c95e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1c95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c95ec: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1c95f0: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1C95F0u;
    SET_GPR_U32(ctx, 31, 0x1C95F8u);
    ctx->pc = 0x1C95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95F0u;
            // 0x1c95f4: 0x2446fffd  addiu       $a2, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95F8u; }
        if (ctx->pc != 0x1C95F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95F8u; }
        if (ctx->pc != 0x1C95F8u) { return; }
    }
    ctx->pc = 0x1C95F8u;
label_1c95f8:
    // 0x1c95f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c95fc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1c95fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c9600: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C9600u;
    {
        const bool branch_taken_0x1c9600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9600u;
            // 0x1c9604: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9600) {
            ctx->pc = 0x1C958Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c958c;
        }
    }
    ctx->pc = 0x1C9608u;
    // 0x1c9608: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1C9608u;
    {
        const bool branch_taken_0x1c9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9608) {
            ctx->pc = 0x1C9714u;
            goto label_1c9714;
        }
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9614: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9618: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c9618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c961c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C961Cu;
    SET_GPR_U32(ctx, 31, 0x1C9624u);
    ctx->pc = 0x1C9620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C961Cu;
            // 0x1c9620: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9624u; }
        if (ctx->pc != 0x1C9624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9624u; }
        if (ctx->pc != 0x1C9624u) { return; }
    }
    ctx->pc = 0x1C9624u;
label_1c9624:
    // 0x1c9624: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1c9624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c9628: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c962c: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c9630: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x1c9630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c9634: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1c9634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9638: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c963c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C963Cu;
    SET_GPR_U32(ctx, 31, 0x1C9644u);
    ctx->pc = 0x1C9640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C963Cu;
            // 0x1c9640: 0x240a00a2  addiu       $t2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9644u; }
        if (ctx->pc != 0x1C9644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9644u; }
        if (ctx->pc != 0x1C9644u) { return; }
    }
    ctx->pc = 0x1C9644u;
label_1c9644:
    // 0x1c9644: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c9648: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c9648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c964c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c9650: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9654: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c9654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9658: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1c9658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c965c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c9660: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x1c9660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1c9664: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C9664u;
    SET_GPR_U32(ctx, 31, 0x1C966Cu);
    ctx->pc = 0x1C9668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9664u;
            // 0x1c9668: 0x2446fffd  addiu       $a2, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C966Cu; }
        if (ctx->pc != 0x1C966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C966Cu; }
        if (ctx->pc != 0x1C966Cu) { return; }
    }
    ctx->pc = 0x1C966Cu;
label_1c966c:
    // 0x1c966c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C966Cu;
    {
        const bool branch_taken_0x1c966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c966c) {
            ctx->pc = 0x1C9714u;
            goto label_1c9714;
        }
    }
    ctx->pc = 0x1C9674u;
label_1c9674:
    // 0x1c9674: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1c9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9678: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x1c9678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x1c967c: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1c967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1c9680: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c9680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9684: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1c9684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1c9688: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c968c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c968cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9690: 0x0  nop
    ctx->pc = 0x1c9690u;
    // NOP
    // 0x1c9694: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c9694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c9698: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C9698u;
    SET_GPR_U32(ctx, 31, 0x1C96A0u);
    ctx->pc = 0x1C969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9698u;
            // 0x1c969c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96A0u; }
        if (ctx->pc != 0x1C96A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96A0u; }
        if (ctx->pc != 0x1C96A0u) { return; }
    }
    ctx->pc = 0x1C96A0u;
label_1c96a0:
    // 0x1c96a0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1c96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c96a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c96a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c96a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c96ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C96ACu;
    SET_GPR_U32(ctx, 31, 0x1C96B4u);
    ctx->pc = 0x1C96B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96ACu;
            // 0x1c96b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96B4u; }
        if (ctx->pc != 0x1C96B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96B4u; }
        if (ctx->pc != 0x1C96B4u) { return; }
    }
    ctx->pc = 0x1C96B4u;
label_1c96b4:
    // 0x1c96b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c96b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c96b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c96bc: 0xa24023  subu        $t0, $a1, $v0
    ctx->pc = 0x1c96bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c96c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c96c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96c4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C96C4u;
    SET_GPR_U32(ctx, 31, 0x1C96CCu);
    ctx->pc = 0x1C96C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96C4u;
            // 0x1c96c8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96CCu; }
        if (ctx->pc != 0x1C96CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96CCu; }
        if (ctx->pc != 0x1C96CCu) { return; }
    }
    ctx->pc = 0x1C96CCu;
label_1c96cc:
    // 0x1c96cc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1c96ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c96d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c96d4: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1c96d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c96d8: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x1c96d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c96dc: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1c96dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c96e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c96e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96e4: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C96E4u;
    SET_GPR_U32(ctx, 31, 0x1C96ECu);
    ctx->pc = 0x1C96E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96E4u;
            // 0x1c96e8: 0x240a00a2  addiu       $t2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96ECu; }
        if (ctx->pc != 0x1C96ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96ECu; }
        if (ctx->pc != 0x1C96ECu) { return; }
    }
    ctx->pc = 0x1C96ECu;
label_1c96ec:
    // 0x1c96ec: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c96f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c96f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c96f4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1c96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c96f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c96fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c96fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9700: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1c9700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9704: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1c9704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c9708: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x1c9708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1c970c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C970Cu;
    SET_GPR_U32(ctx, 31, 0x1C9714u);
    ctx->pc = 0x1C9710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C970Cu;
            // 0x1c9710: 0x2446fffd  addiu       $a2, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9714u; }
        if (ctx->pc != 0x1C9714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9714u; }
        if (ctx->pc != 0x1C9714u) { return; }
    }
    ctx->pc = 0x1C9714u;
label_1c9714:
    // 0x1c9714: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c9718:
    // 0x1c9718: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C9718u;
    SET_GPR_U32(ctx, 31, 0x1C9720u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9720u; }
        if (ctx->pc != 0x1C9720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9720u; }
        if (ctx->pc != 0x1C9720u) { return; }
    }
    ctx->pc = 0x1C9720u;
label_1c9720:
    // 0x1c9720: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c9720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9724: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1c9724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9728: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c9728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c972c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9730: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9734: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9734u;
            // 0x1c9738: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C973Cu;
}
