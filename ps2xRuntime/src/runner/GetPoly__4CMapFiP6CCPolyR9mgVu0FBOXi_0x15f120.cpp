#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPoly__4CMapFiP6CCPolyR9mgVu0FBOXi
// Address: 0x15f120 - 0x15f254
void GetPoly__4CMapFiP6CCPolyR9mgVu0FBOXi_0x15f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPoly__4CMapFiP6CCPolyR9mgVu0FBOXi_0x15f120");
#endif

    switch (ctx->pc) {
        case 0x15f120u: goto label_15f120;
        case 0x15f124u: goto label_15f124;
        case 0x15f128u: goto label_15f128;
        case 0x15f12cu: goto label_15f12c;
        case 0x15f130u: goto label_15f130;
        case 0x15f134u: goto label_15f134;
        case 0x15f138u: goto label_15f138;
        case 0x15f13cu: goto label_15f13c;
        case 0x15f140u: goto label_15f140;
        case 0x15f144u: goto label_15f144;
        case 0x15f148u: goto label_15f148;
        case 0x15f14cu: goto label_15f14c;
        case 0x15f150u: goto label_15f150;
        case 0x15f154u: goto label_15f154;
        case 0x15f158u: goto label_15f158;
        case 0x15f15cu: goto label_15f15c;
        case 0x15f160u: goto label_15f160;
        case 0x15f164u: goto label_15f164;
        case 0x15f168u: goto label_15f168;
        case 0x15f16cu: goto label_15f16c;
        case 0x15f170u: goto label_15f170;
        case 0x15f174u: goto label_15f174;
        case 0x15f178u: goto label_15f178;
        case 0x15f17cu: goto label_15f17c;
        case 0x15f180u: goto label_15f180;
        case 0x15f184u: goto label_15f184;
        case 0x15f188u: goto label_15f188;
        case 0x15f18cu: goto label_15f18c;
        case 0x15f190u: goto label_15f190;
        case 0x15f194u: goto label_15f194;
        case 0x15f198u: goto label_15f198;
        case 0x15f19cu: goto label_15f19c;
        case 0x15f1a0u: goto label_15f1a0;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1a8u: goto label_15f1a8;
        case 0x15f1acu: goto label_15f1ac;
        case 0x15f1b0u: goto label_15f1b0;
        case 0x15f1b4u: goto label_15f1b4;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f1bcu: goto label_15f1bc;
        case 0x15f1c0u: goto label_15f1c0;
        case 0x15f1c4u: goto label_15f1c4;
        case 0x15f1c8u: goto label_15f1c8;
        case 0x15f1ccu: goto label_15f1cc;
        case 0x15f1d0u: goto label_15f1d0;
        case 0x15f1d4u: goto label_15f1d4;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f1dcu: goto label_15f1dc;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f1e4u: goto label_15f1e4;
        case 0x15f1e8u: goto label_15f1e8;
        case 0x15f1ecu: goto label_15f1ec;
        case 0x15f1f0u: goto label_15f1f0;
        case 0x15f1f4u: goto label_15f1f4;
        case 0x15f1f8u: goto label_15f1f8;
        case 0x15f1fcu: goto label_15f1fc;
        case 0x15f200u: goto label_15f200;
        case 0x15f204u: goto label_15f204;
        case 0x15f208u: goto label_15f208;
        case 0x15f20cu: goto label_15f20c;
        case 0x15f210u: goto label_15f210;
        case 0x15f214u: goto label_15f214;
        case 0x15f218u: goto label_15f218;
        case 0x15f21cu: goto label_15f21c;
        case 0x15f220u: goto label_15f220;
        case 0x15f224u: goto label_15f224;
        case 0x15f228u: goto label_15f228;
        case 0x15f22cu: goto label_15f22c;
        case 0x15f230u: goto label_15f230;
        case 0x15f234u: goto label_15f234;
        case 0x15f238u: goto label_15f238;
        case 0x15f23cu: goto label_15f23c;
        case 0x15f240u: goto label_15f240;
        case 0x15f244u: goto label_15f244;
        case 0x15f248u: goto label_15f248;
        case 0x15f24cu: goto label_15f24c;
        case 0x15f250u: goto label_15f250;
        default: break;
    }

    ctx->pc = 0x15f120u;

label_15f120:
    // 0x15f120: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_15f124:
    // 0x15f124: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15f128:
    // 0x15f128: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15f12c:
    // 0x15f12c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15f130:
    // 0x15f130: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x15f130u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f134:
    // 0x15f134: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15f134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15f138:
    // 0x15f138: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15f13c:
    // 0x15f13c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x15f13cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15f140:
    // 0x15f140: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15f144:
    // 0x15f144: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15f144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f148:
    // 0x15f148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15f14c:
    // 0x15f14c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15f14cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15f150:
    // 0x15f150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15f154:
    // 0x15f154: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15f158:
    // 0x15f158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15f15c:
    // 0x15f15c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15f15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f160:
    // 0x15f160: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15f164:
    // 0x15f164: 0xc057594  jal         func_15D650
label_15f168:
    if (ctx->pc == 0x15F168u) {
        ctx->pc = 0x15F168u;
            // 0x15f168: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15F16Cu;
        goto label_15f16c;
    }
    ctx->pc = 0x15F164u;
    SET_GPR_U32(ctx, 31, 0x15F16Cu);
    ctx->pc = 0x15F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F164u;
            // 0x15f168: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D650u;
    if (runtime->hasFunction(0x15D650u)) {
        auto targetFn = runtime->lookupFunction(0x15D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F16Cu; }
        if (ctx->pc != 0x15F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceColParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F16Cu; }
        if (ctx->pc != 0x15F16Cu) { return; }
    }
    ctx->pc = 0x15F16Cu;
label_15f16c:
    // 0x15f16c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x15f16cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f170:
    // 0x15f170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f174:
    // 0x15f174: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x15f174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_15f178:
    // 0x15f178: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_15f17c:
    if (ctx->pc == 0x15F17Cu) {
        ctx->pc = 0x15F17Cu;
            // 0x15f17c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F180u;
        goto label_15f180;
    }
    ctx->pc = 0x15F178u;
    {
        const bool branch_taken_0x15f178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F178u;
            // 0x15f17c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f178) {
            ctx->pc = 0x15F21Cu;
            goto label_15f21c;
        }
    }
    ctx->pc = 0x15F180u;
label_15f180:
    // 0x15f180: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15f180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f184:
    // 0x15f184: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_15f188:
    // 0x15f188: 0x8c5200a0  lw          $s2, 0xA0($v0)
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_15f18c:
    // 0x15f18c: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_15f190:
    // 0x15f190: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_15f194:
    // 0x15f194: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15f198:
    // 0x15f198: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_15f19c:
    if (ctx->pc == 0x15F19Cu) {
        ctx->pc = 0x15F1A0u;
        goto label_15f1a0;
    }
    ctx->pc = 0x15F198u;
    {
        const bool branch_taken_0x15f198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f198) {
            ctx->pc = 0x15F20Cu;
            goto label_15f20c;
        }
    }
    ctx->pc = 0x15F1A0u;
label_15f1a0:
    // 0x15f1a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15f1a4:
    // 0x15f1a4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_15f1a8:
    // 0x15f1a8: 0x320f809  jalr        $t9
label_15f1ac:
    if (ctx->pc == 0x15F1ACu) {
        ctx->pc = 0x15F1ACu;
            // 0x15f1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F1B0u;
        goto label_15f1b0;
    }
    ctx->pc = 0x15F1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F1B0u);
        ctx->pc = 0x15F1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1A8u;
            // 0x15f1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F1B0u; }
            if (ctx->pc != 0x15F1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x15F1B0u;
label_15f1b0:
    // 0x15f1b0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_15f1b4:
    if (ctx->pc == 0x15F1B4u) {
        ctx->pc = 0x15F1B4u;
            // 0x15f1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F1B8u;
        goto label_15f1b8;
    }
    ctx->pc = 0x15F1B0u;
    {
        const bool branch_taken_0x15f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1B0u;
            // 0x15f1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1b0) {
            ctx->pc = 0x15F20Cu;
            goto label_15f20c;
        }
    }
    ctx->pc = 0x15F1B8u;
label_15f1b8:
    // 0x15f1b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x15f1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15f1bc:
    // 0x15f1bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15f1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15f1c0:
    // 0x15f1c0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x15f1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f1c4:
    // 0x15f1c4: 0xc059960  jal         func_166580
label_15f1c8:
    if (ctx->pc == 0x15F1C8u) {
        ctx->pc = 0x15F1C8u;
            // 0x15f1c8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F1CCu;
        goto label_15f1cc;
    }
    ctx->pc = 0x15F1C4u;
    SET_GPR_U32(ctx, 31, 0x15F1CCu);
    ctx->pc = 0x15F1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1C4u;
            // 0x15f1c8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166580u;
    if (runtime->hasFunction(0x166580u)) {
        auto targetFn = runtime->lookupFunction(0x166580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1CCu; }
        if (ctx->pc != 0x15F1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPoly__9CMapPartsFiP6CCPolyR9mgVu0FBOXi_0x166580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1CCu; }
        if (ctx->pc != 0x15F1CCu) { return; }
    }
    ctx->pc = 0x15F1CCu;
label_15f1cc:
    // 0x15f1cc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x15f1ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15f1d0:
    // 0x15f1d0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_15f1d4:
    if (ctx->pc == 0x15F1D4u) {
        ctx->pc = 0x15F1D4u;
            // 0x15f1d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F1D8u;
        goto label_15f1d8;
    }
    ctx->pc = 0x15F1D0u;
    {
        const bool branch_taken_0x15f1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1D0u;
            // 0x15f1d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1d0) {
            ctx->pc = 0x15F1F4u;
            goto label_15f1f4;
        }
    }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f1dc:
    // 0x15f1dc: 0xa6b10048  sh          $s1, 0x48($s5)
    ctx->pc = 0x15f1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 17));
label_15f1e0:
    // 0x15f1e0: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x15f1e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15f1e4:
    // 0x15f1e4: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_15f1e8:
    // 0x15f1e8: 0x0  nop
    ctx->pc = 0x15f1e8u;
    // NOP
label_15f1ec:
    // 0x15f1ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_15f1f0:
    if (ctx->pc == 0x15F1F0u) {
        ctx->pc = 0x15F1F4u;
        goto label_15f1f4;
    }
    ctx->pc = 0x15F1ECu;
    {
        const bool branch_taken_0x15f1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1ec) {
            ctx->pc = 0x15F1D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f1d8;
        }
    }
    ctx->pc = 0x15F1F4u;
label_15f1f4:
    // 0x15f1f4: 0x0  nop
    ctx->pc = 0x15f1f4u;
    // NOP
label_15f1f8:
    // 0x15f1f8: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_15f1fc:
    // 0x15f1fc: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
label_15f200:
    if (ctx->pc == 0x15F200u) {
        ctx->pc = 0x15F200u;
            // 0x15f200: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x15F204u;
        goto label_15f204;
    }
    ctx->pc = 0x15F1FCu;
    {
        const bool branch_taken_0x15f1fc = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x15F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1FCu;
            // 0x15f200: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1fc) {
            ctx->pc = 0x15F20Cu;
            goto label_15f20c;
        }
    }
    ctx->pc = 0x15F204u;
label_15f204:
    // 0x15f204: 0x10000007  b           . + 4 + (0x7 << 2)
label_15f208:
    if (ctx->pc == 0x15F208u) {
        ctx->pc = 0x15F208u;
            // 0x15f208: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F20Cu;
        goto label_15f20c;
    }
    ctx->pc = 0x15F204u;
    {
        const bool branch_taken_0x15f204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F204u;
            // 0x15f208: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f204) {
            ctx->pc = 0x15F224u;
            goto label_15f224;
        }
    }
    ctx->pc = 0x15F20Cu;
label_15f20c:
    // 0x15f20c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f210:
    // 0x15f210: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x15f210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_15f214:
    // 0x15f214: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_15f218:
    if (ctx->pc == 0x15F218u) {
        ctx->pc = 0x15F218u;
            // 0x15f218: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x15F21Cu;
        goto label_15f21c;
    }
    ctx->pc = 0x15F214u;
    {
        const bool branch_taken_0x15f214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F214u;
            // 0x15f218: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f214) {
            ctx->pc = 0x15F184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f184;
        }
    }
    ctx->pc = 0x15F21Cu;
label_15f21c:
    // 0x15f21c: 0x0  nop
    ctx->pc = 0x15f21cu;
    // NOP
label_15f220:
    // 0x15f220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15f220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f224:
    // 0x15f224: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15f224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15f228:
    // 0x15f228: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15f228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15f22c:
    // 0x15f22c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15f22cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15f230:
    // 0x15f230: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15f230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15f234:
    // 0x15f234: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15f234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15f238:
    // 0x15f238: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15f23c:
    // 0x15f23c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f240:
    // 0x15f240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f244:
    // 0x15f244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f248:
    // 0x15f248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15f24c:
    // 0x15f24c: 0x3e00008  jr          $ra
label_15f250:
    if (ctx->pc == 0x15F250u) {
        ctx->pc = 0x15F250u;
            // 0x15f250: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x15F254u;
        goto label_fallthrough_0x15f24c;
    }
    ctx->pc = 0x15F24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F24Cu;
            // 0x15f250: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15f24c:
    ctx->pc = 0x15F254u;
}
