#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LightingEdit__FP6CScene
// Address: 0x1a8440 - 0x1a9964
void LightingEdit__FP6CScene_0x1a8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LightingEdit__FP6CScene_0x1a8440");
#endif

    switch (ctx->pc) {
        case 0x1a848cu: goto label_1a848c;
        case 0x1a84b0u: goto label_1a84b0;
        case 0x1a84c8u: goto label_1a84c8;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a84e8u: goto label_1a84e8;
        case 0x1a84f8u: goto label_1a84f8;
        case 0x1a8504u: goto label_1a8504;
        case 0x1a8510u: goto label_1a8510;
        case 0x1a851cu: goto label_1a851c;
        case 0x1a8528u: goto label_1a8528;
        case 0x1a8540u: goto label_1a8540;
        case 0x1a8554u: goto label_1a8554;
        case 0x1a8568u: goto label_1a8568;
        case 0x1a8570u: goto label_1a8570;
        case 0x1a8588u: goto label_1a8588;
        case 0x1a863cu: goto label_1a863c;
        case 0x1a8680u: goto label_1a8680;
        case 0x1a86bcu: goto label_1a86bc;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a8784u: goto label_1a8784;
        case 0x1a87b0u: goto label_1a87b0;
        case 0x1a87e0u: goto label_1a87e0;
        case 0x1a8818u: goto label_1a8818;
        case 0x1a8850u: goto label_1a8850;
        case 0x1a8860u: goto label_1a8860;
        case 0x1a888cu: goto label_1a888c;
        case 0x1a88b4u: goto label_1a88b4;
        case 0x1a8904u: goto label_1a8904;
        case 0x1a8930u: goto label_1a8930;
        case 0x1a8940u: goto label_1a8940;
        case 0x1a8950u: goto label_1a8950;
        case 0x1a895cu: goto label_1a895c;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a89f0u: goto label_1a89f0;
        case 0x1a8a18u: goto label_1a8a18;
        case 0x1a8a54u: goto label_1a8a54;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8b34u: goto label_1a8b34;
        case 0x1a8b50u: goto label_1a8b50;
        case 0x1a8c18u: goto label_1a8c18;
        case 0x1a8c38u: goto label_1a8c38;
        case 0x1a8d28u: goto label_1a8d28;
        case 0x1a8d48u: goto label_1a8d48;
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8db0u: goto label_1a8db0;
        case 0x1a8de0u: goto label_1a8de0;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e28u: goto label_1a8e28;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e60u: goto label_1a8e60;
        case 0x1a8e80u: goto label_1a8e80;
        case 0x1a8ec0u: goto label_1a8ec0;
        case 0x1a8ed8u: goto label_1a8ed8;
        case 0x1a8ef0u: goto label_1a8ef0;
        case 0x1a8f04u: goto label_1a8f04;
        case 0x1a8f34u: goto label_1a8f34;
        case 0x1a8f4cu: goto label_1a8f4c;
        case 0x1a8f5cu: goto label_1a8f5c;
        case 0x1a8f80u: goto label_1a8f80;
        case 0x1a8f94u: goto label_1a8f94;
        case 0x1a8fb0u: goto label_1a8fb0;
        case 0x1a8ff8u: goto label_1a8ff8;
        case 0x1a9014u: goto label_1a9014;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90c0u: goto label_1a90c0;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a91e4u: goto label_1a91e4;
        case 0x1a9208u: goto label_1a9208;
        case 0x1a9258u: goto label_1a9258;
        case 0x1a927cu: goto label_1a927c;
        case 0x1a92b4u: goto label_1a92b4;
        case 0x1a92c8u: goto label_1a92c8;
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a92ecu: goto label_1a92ec;
        case 0x1a92f8u: goto label_1a92f8;
        case 0x1a9304u: goto label_1a9304;
        case 0x1a9310u: goto label_1a9310;
        case 0x1a9324u: goto label_1a9324;
        case 0x1a9338u: goto label_1a9338;
        case 0x1a9344u: goto label_1a9344;
        case 0x1a9358u: goto label_1a9358;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9378u: goto label_1a9378;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9414u: goto label_1a9414;
        case 0x1a9428u: goto label_1a9428;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a94bcu: goto label_1a94bc;
        case 0x1a94d0u: goto label_1a94d0;
        case 0x1a94e4u: goto label_1a94e4;
        case 0x1a94f8u: goto label_1a94f8;
        case 0x1a9508u: goto label_1a9508;
        case 0x1a951cu: goto label_1a951c;
        case 0x1a9534u: goto label_1a9534;
        case 0x1a9544u: goto label_1a9544;
        case 0x1a9554u: goto label_1a9554;
        case 0x1a9564u: goto label_1a9564;
        case 0x1a9570u: goto label_1a9570;
        case 0x1a957cu: goto label_1a957c;
        case 0x1a9588u: goto label_1a9588;
        case 0x1a9594u: goto label_1a9594;
        case 0x1a95a0u: goto label_1a95a0;
        case 0x1a9634u: goto label_1a9634;
        case 0x1a9640u: goto label_1a9640;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a9658u: goto label_1a9658;
        case 0x1a969cu: goto label_1a969c;
        case 0x1a96acu: goto label_1a96ac;
        case 0x1a96bcu: goto label_1a96bc;
        case 0x1a96ccu: goto label_1a96cc;
        case 0x1a96d8u: goto label_1a96d8;
        case 0x1a96e4u: goto label_1a96e4;
        case 0x1a96f0u: goto label_1a96f0;
        case 0x1a96fcu: goto label_1a96fc;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a977cu: goto label_1a977c;
        case 0x1a9788u: goto label_1a9788;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a97f4u: goto label_1a97f4;
        case 0x1a980cu: goto label_1a980c;
        case 0x1a9818u: goto label_1a9818;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a983cu: goto label_1a983c;
        case 0x1a9848u: goto label_1a9848;
        case 0x1a9860u: goto label_1a9860;
        case 0x1a986cu: goto label_1a986c;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a9884u: goto label_1a9884;
        case 0x1a989cu: goto label_1a989c;
        case 0x1a9900u: goto label_1a9900;
        case 0x1a9910u: goto label_1a9910;
        case 0x1a9920u: goto label_1a9920;
        case 0x1a9930u: goto label_1a9930;
        default: break;
    }

    ctx->pc = 0x1a8440u;

    // 0x1a8440: 0x27bd9ba0  addiu       $sp, $sp, -0x6460
    ctx->pc = 0x1a8440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294941600));
    // 0x1a8444: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a8448: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a8448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1a844c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1a8450: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a8450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a8454: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a8454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a8458: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a8458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a845c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a8460: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a8460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a8464: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a8464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a8468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a846c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a846cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8470: 0x8f828c38  lw          $v0, -0x73C8($gp)
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937656)));
    // 0x1a8474: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A8474u;
    {
        const bool branch_taken_0x1a8474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8474u;
            // 0x1a8478: 0xafa4010c  sw          $a0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8474) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A847Cu;
    // 0x1a847c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8480: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1a8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1a8484: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8484u;
    SET_GPR_U32(ctx, 31, 0x1A848Cu);
    ctx->pc = 0x1A8488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8484u;
            // 0x1a8488: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A848Cu; }
        if (ctx->pc != 0x1A848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A848Cu; }
        if (ctx->pc != 0x1A848Cu) { return; }
    }
    ctx->pc = 0x1A848Cu;
label_1a848c:
    // 0x1a848c: 0x10400528  beqz        $v0, . + 4 + (0x528 << 2)
    ctx->pc = 0x1A848Cu;
    {
        const bool branch_taken_0x1a848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a848c) {
            ctx->pc = 0x1A9930u;
            goto label_1a9930;
        }
    }
    ctx->pc = 0x1A8494u;
    // 0x1a8494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8498: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a849c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1a84a0: 0xaf878c38  sw          $a3, -0x73C8($gp)
    ctx->pc = 0x1a84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 7));
    // 0x1a84a4: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x1a84a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1a84a8: 0xc052c4c  jal         func_14B130
    ctx->pc = 0x1A84A8u;
    SET_GPR_U32(ctx, 31, 0x1A84B0u);
    ctx->pc = 0x1A84ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84A8u;
            // 0x1a84ac: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B130u;
    if (runtime->hasFunction(0x14B130u)) {
        auto targetFn = runtime->lookupFunction(0x14B130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84B0u; }
        if (ctx->pc != 0x1A84B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat2__8CGamePadFiii_0x14b130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84B0u; }
        if (ctx->pc != 0x1A84B0u) { return; }
    }
    ctx->pc = 0x1A84B0u;
label_1a84b0:
    // 0x1a84b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a84b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a84b4: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x1a84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x1a84b8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1a84bc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a84c0: 0xc052c4c  jal         func_14B130
    ctx->pc = 0x1A84C0u;
    SET_GPR_U32(ctx, 31, 0x1A84C8u);
    ctx->pc = 0x1A84C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84C0u;
            // 0x1a84c4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B130u;
    if (runtime->hasFunction(0x14B130u)) {
        auto targetFn = runtime->lookupFunction(0x14B130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84C8u; }
        if (ctx->pc != 0x1A84C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat2__8CGamePadFiii_0x14b130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84C8u; }
        if (ctx->pc != 0x1A84C8u) { return; }
    }
    ctx->pc = 0x1A84C8u;
label_1a84c8:
    // 0x1a84c8: 0x1000051a  b           . + 4 + (0x51A << 2)
    ctx->pc = 0x1A84C8u;
    {
        const bool branch_taken_0x1a84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84C8u;
            // 0x1a84cc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84c8) {
            ctx->pc = 0x1A9934u;
            goto label_1a9934;
        }
    }
    ctx->pc = 0x1A84D0u;
label_1a84d0:
    // 0x1a84d0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1a84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1a84d4: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84D4u;
            // 0x1a84d8: 0x8c452e5c  lw          $a1, 0x2E5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84DCu; }
        if (ctx->pc != 0x1A84DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84DCu; }
        if (ctx->pc != 0x1A84DCu) { return; }
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1a84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1a84e0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1A84E0u;
    SET_GPR_U32(ctx, 31, 0x1A84E8u);
    ctx->pc = 0x1A84E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84E0u;
            // 0x1a84e4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84E8u; }
        if (ctx->pc != 0x1A84E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84E8u; }
        if (ctx->pc != 0x1A84E8u) { return; }
    }
    ctx->pc = 0x1A84E8u;
label_1a84e8:
    // 0x1a84e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a84ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a84ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84f0: 0xc04d104  jal         func_134410
    ctx->pc = 0x1A84F0u;
    SET_GPR_U32(ctx, 31, 0x1A84F8u);
    ctx->pc = 0x1A84F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84F0u;
            // 0x1a84f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84F8u; }
        if (ctx->pc != 0x1A84F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84F8u; }
        if (ctx->pc != 0x1A84F8u) { return; }
    }
    ctx->pc = 0x1A84F8u;
label_1a84f8:
    // 0x1a84f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a84f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a84fc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1A84FCu;
    SET_GPR_U32(ctx, 31, 0x1A8504u);
    ctx->pc = 0x1A8500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84FCu;
            // 0x1a8500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8504u; }
        if (ctx->pc != 0x1A8504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8504u; }
        if (ctx->pc != 0x1A8504u) { return; }
    }
    ctx->pc = 0x1A8504u;
label_1a8504:
    // 0x1a8504: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a8504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a8508: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1A8508u;
    SET_GPR_U32(ctx, 31, 0x1A8510u);
    ctx->pc = 0x1A850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8508u;
            // 0x1a850c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8510u; }
        if (ctx->pc != 0x1A8510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8510u; }
        if (ctx->pc != 0x1A8510u) { return; }
    }
    ctx->pc = 0x1A8510u;
label_1a8510:
    // 0x1a8510: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a8510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a8514: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1A8514u;
    SET_GPR_U32(ctx, 31, 0x1A851Cu);
    ctx->pc = 0x1A8518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8514u;
            // 0x1a8518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A851Cu; }
        if (ctx->pc != 0x1A851Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A851Cu; }
        if (ctx->pc != 0x1A851Cu) { return; }
    }
    ctx->pc = 0x1A851Cu;
label_1a851c:
    // 0x1a851c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a8520: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1A8520u;
    SET_GPR_U32(ctx, 31, 0x1A8528u);
    ctx->pc = 0x1A8524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8520u;
            // 0x1a8524: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8528u; }
        if (ctx->pc != 0x1A8528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8528u; }
        if (ctx->pc != 0x1A8528u) { return; }
    }
    ctx->pc = 0x1A8528u;
label_1a8528:
    // 0x1a8528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a852c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a8530: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8534: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a8534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8538: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A8538u;
    SET_GPR_U32(ctx, 31, 0x1A8540u);
    ctx->pc = 0x1A853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8538u;
            // 0x1a853c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8540u; }
        if (ctx->pc != 0x1A8540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8540u; }
        if (ctx->pc != 0x1A8540u) { return; }
    }
    ctx->pc = 0x1A8540u;
label_1a8540:
    // 0x1a8540: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a8544: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a8548: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a8548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a854c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A854Cu;
    SET_GPR_U32(ctx, 31, 0x1A8554u);
    ctx->pc = 0x1A8550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A854Cu;
            // 0x1a8550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8554u; }
        if (ctx->pc != 0x1A8554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8554u; }
        if (ctx->pc != 0x1A8554u) { return; }
    }
    ctx->pc = 0x1A8554u;
label_1a8554:
    // 0x1a8554: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a8554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a8558: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1a8558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1a855c: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x1a855cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1a8560: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A8560u;
    SET_GPR_U32(ctx, 31, 0x1A8568u);
    ctx->pc = 0x1A8564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8560u;
            // 0x1a8564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8568u; }
        if (ctx->pc != 0x1A8568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8568u; }
        if (ctx->pc != 0x1A8568u) { return; }
    }
    ctx->pc = 0x1A8568u;
label_1a8568:
    // 0x1a8568: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1A8568u;
    SET_GPR_U32(ctx, 31, 0x1A8570u);
    ctx->pc = 0x1A856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8568u;
            // 0x1a856c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8570u; }
        if (ctx->pc != 0x1A8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8570u; }
        if (ctx->pc != 0x1A8570u) { return; }
    }
    ctx->pc = 0x1A8570u;
label_1a8570:
    // 0x1a8570: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a8570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a8574: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1a8578: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1a8578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1a857c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a8580: 0xc059410  jal         func_165040
    ctx->pc = 0x1A8580u;
    SET_GPR_U32(ctx, 31, 0x1A8588u);
    ctx->pc = 0x1A8584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8580u;
            // 0x1a8584: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165040u;
    if (runtime->hasFunction(0x165040u)) {
        auto targetFn = runtime->lookupFunction(0x165040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8588u; }
        if (ctx->pc != 0x1A8588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingInfo__8CMapInfoFi_0x165040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8588u; }
        if (ctx->pc != 0x1A8588u) { return; }
    }
    ctx->pc = 0x1A8588u;
label_1a8588:
    // 0x1a8588: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a8588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a858c: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x1a858cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x1a8590: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a8590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a8594: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a8598: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1a8598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1a859c: 0x24426870  addiu       $v0, $v0, 0x6870
    ctx->pc = 0x1a859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26736));
    // 0x1a85a0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1a85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1a85a4: 0x27b00220  addiu       $s0, $sp, 0x220
    ctx->pc = 0x1a85a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a85a8: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x1a85a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a85ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a85b0: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1a85b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a85b4: 0x27ad6420  addiu       $t5, $sp, 0x6420
    ctx->pc = 0x1a85b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 25632));
    // 0x1a85b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a85b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a85bc: 0x258c6880  addiu       $t4, $t4, 0x6880
    ctx->pc = 0x1a85bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 26752));
    // 0x1a85c0: 0x27ab6430  addiu       $t3, $sp, 0x6430
    ctx->pc = 0x1a85c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 25648));
    // 0x1a85c4: 0x27aa6440  addiu       $t2, $sp, 0x6440
    ctx->pc = 0x1a85c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 25664));
    // 0x1a85c8: 0x27a96448  addiu       $t1, $sp, 0x6448
    ctx->pc = 0x1a85c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 25672));
    // 0x1a85cc: 0x24636890  addiu       $v1, $v1, 0x6890
    ctx->pc = 0x1a85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26768));
    // 0x1a85d0: 0x27a61220  addiu       $a2, $sp, 0x1220
    ctx->pc = 0x1a85d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4640));
    // 0x1a85d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a85d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a85dc: 0xfda80000  sd          $t0, 0x0($t5)
    ctx->pc = 0x1a85dcu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 8));
    // 0x1a85e0: 0x24426850  addiu       $v0, $v0, 0x6850
    ctx->pc = 0x1a85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
    // 0x1a85e4: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x1a85e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x1a85e8: 0xdd880000  ld          $t0, 0x0($t4)
    ctx->pc = 0x1a85e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a85ec: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x1a85ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a85f0: 0xfd680000  sd          $t0, 0x0($t3)
    ctx->pc = 0x1a85f0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 8));
    // 0x1a85f4: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x1a85f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x1a85f8: 0xdf8880e0  ld          $t0, -0x7F20($gp)
    ctx->pc = 0x1a85f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1a85fc: 0xfd480000  sd          $t0, 0x0($t2)
    ctx->pc = 0x1a85fcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 8));
    // 0x1a8600: 0xdf8880e8  ld          $t0, -0x7F18($gp)
    ctx->pc = 0x1a8600u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x1a8604: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x1a8604u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x1a8608: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a8608u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a860c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1a860cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1a8610: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a8610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a8614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a861c: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x1a861cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8620: 0x3c01026  xor         $v0, $fp, $zero
    ctx->pc = 0x1a8620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 0));
    // 0x1a8624: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a862c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8630: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8634: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8634u;
    SET_GPR_U32(ctx, 31, 0x1A863Cu);
    ctx->pc = 0x1A8638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8634u;
            // 0x1a8638: 0x24a55f80  addiu       $a1, $a1, 0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A863Cu; }
        if (ctx->pc != 0x1A863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A863Cu; }
        if (ctx->pc != 0x1A863Cu) { return; }
    }
    ctx->pc = 0x1A863Cu;
label_1a863c:
    // 0x1a863c: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a8640: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8648: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A8648u;
    {
        const bool branch_taken_0x1a8648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8648u;
            // 0x1a864c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8648) {
            ctx->pc = 0x1A868Cu;
            goto label_1a868c;
        }
    }
    ctx->pc = 0x1A8650u;
    // 0x1a8650: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8654: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8658: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a865c: 0x3bc30001  xori        $v1, $fp, 0x1
    ctx->pc = 0x1a865cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
    // 0x1a8660: 0x8c471220  lw          $a3, 0x1220($v0)
    ctx->pc = 0x1a8660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4640)));
    // 0x1a8664: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1a8664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a866c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8670: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1a8670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a8674: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8678: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8678u;
    SET_GPR_U32(ctx, 31, 0x1A8680u);
    ctx->pc = 0x1A867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8678u;
            // 0x1a867c: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8680u; }
        if (ctx->pc != 0x1A8680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8680u; }
        if (ctx->pc != 0x1A8680u) { return; }
    }
    ctx->pc = 0x1A8680u;
label_1a8680:
    // 0x1a8680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A8680u;
    {
        const bool branch_taken_0x1a8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8680u;
            // 0x1a8684: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8680) {
            ctx->pc = 0x1A86C0u;
            goto label_1a86c0;
        }
    }
    ctx->pc = 0x1A8688u;
    // 0x1a8688: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a8688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a868c:
    // 0x1a868c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a868cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8690: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8694: 0x3bc30001  xori        $v1, $fp, 0x1
    ctx->pc = 0x1a8694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)1);
    // 0x1a8698: 0x8c471220  lw          $a3, 0x1220($v0)
    ctx->pc = 0x1a8698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4640)));
    // 0x1a869c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1a869cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a86a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a86a4: 0x8f888c40  lw          $t0, -0x73C0($gp)
    ctx->pc = 0x1a86a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a86a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86ac: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1a86acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a86b0: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a86b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a86b4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A86B4u;
    SET_GPR_U32(ctx, 31, 0x1A86BCu);
    ctx->pc = 0x1A86B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86B4u;
            // 0x1a86b8: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86BCu; }
        if (ctx->pc != 0x1A86BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86BCu; }
        if (ctx->pc != 0x1A86BCu) { return; }
    }
    ctx->pc = 0x1A86BCu;
label_1a86bc:
    // 0x1a86bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a86bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a86c0:
    // 0x1a86c0: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a86c4: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1A86C4u;
    {
        const bool branch_taken_0x1a86c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a86c4) {
            ctx->pc = 0x1A881Cu;
            goto label_1a881c;
        }
    }
    ctx->pc = 0x1A86CCu;
    // 0x1a86cc: 0x27c2fffe  addiu       $v0, $fp, -0x2
    ctx->pc = 0x1a86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x1a86d0: 0x27a81230  addiu       $t0, $sp, 0x1230
    ctx->pc = 0x1a86d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4656));
    // 0x1a86d4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1a86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1a86d8: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a86dc: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1a86e0: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x1a86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1a86e4: 0x2442b420  addiu       $v0, $v0, -0x4BE0
    ctx->pc = 0x1a86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
    // 0x1a86e8: 0x2bc1000b  slti        $at, $fp, 0xB
    ctx->pc = 0x1a86e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1a86ec: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1a86ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a86f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a86f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a86f4: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x1a86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x1a86f8: 0x26a20180  addiu       $v0, $s5, 0x180
    ctx->pc = 0x1a86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x1a86fc: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1a86fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1a8700: 0xafa61230  sw          $a2, 0x1230($sp)
    ctx->pc = 0x1a8700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4656), GPR_U32(ctx, 6));
    // 0x1a8704: 0xafa31234  sw          $v1, 0x1234($sp)
    ctx->pc = 0x1a8704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4660), GPR_U32(ctx, 3));
    // 0x1a8708: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8708u;
    {
        const bool branch_taken_0x1a8708 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A870Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8708u;
            // 0x1a870c: 0xafa21238  sw          $v0, 0x1238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8708) {
            ctx->pc = 0x1A8714u;
            goto label_1a8714;
        }
    }
    ctx->pc = 0x1A8710u;
    // 0x1a8710: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a8714:
    // 0x1a8714: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1a8714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1a8718: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a871c: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x1a871cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1a8720: 0x27a66450  addiu       $a2, $sp, 0x6450
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25680));
    // 0x1a8724: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1a8724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a8728: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a8728u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a872c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a872cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8730: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8734: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1a8734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a8738: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1a873c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a8740: 0x244268a0  addiu       $v0, $v0, 0x68A0
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26784));
    // 0x1a8744: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a8744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8748: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a8748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a874c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a874cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a8750: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a8754: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1a8754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a8758: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x1a8758u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a875c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a875cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a8760: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8764: 0x8c421230  lw          $v0, 0x1230($v0)
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4656)));
    // 0x1a8768: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1a8768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1a876c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a876cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a8770: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1a8770u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1a8774: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1a8774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1a8778: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1a8778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1a877c:
    // 0x1a877c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a877cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8780: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a8780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8784:
    // 0x1a8784: 0x0  nop
    ctx->pc = 0x1a8784u;
    // NOP
    // 0x1a8788: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1a8788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a878c: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1a8790: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x1a8790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1a8794: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a8798: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1a8798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a879c: 0x8c421230  lw          $v0, 0x1230($v0)
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4656)));
    // 0x1a87a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a87a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1a87a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a87a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A87A8u;
    SET_GPR_U32(ctx, 31, 0x1A87B0u);
    ctx->pc = 0x1A87ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87A8u;
            // 0x1a87ac: 0x3a080  sll         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87B0u; }
        if (ctx->pc != 0x1A87B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87B0u; }
        if (ctx->pc != 0x1A87B0u) { return; }
    }
    ctx->pc = 0x1A87B0u;
label_1a87b0:
    // 0x1a87b0: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a87b4: 0x29d4821  addu        $t1, $s4, $sp
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1a87b8: 0x8c676450  lw          $a3, 0x6450($v1)
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25680)));
    // 0x1a87bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a87c0: 0x8d266440  lw          $a2, 0x6440($t1)
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 25664)));
    // 0x1a87c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a87c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87c8: 0x8d2a6448  lw          $t2, 0x6448($t1)
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 25672)));
    // 0x1a87cc: 0x24a55fb0  addiu       $a1, $a1, 0x5FB0
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24496));
    // 0x1a87d0: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1a87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1a87d4: 0x8c686420  lw          $t0, 0x6420($v1)
    ctx->pc = 0x1a87d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25632)));
    // 0x1a87d8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A87D8u;
    SET_GPR_U32(ctx, 31, 0x1A87E0u);
    ctx->pc = 0x1A87DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87D8u;
            // 0x1a87dc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87E0u; }
        if (ctx->pc != 0x1A87E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87E0u; }
        if (ctx->pc != 0x1A87E0u) { return; }
    }
    ctx->pc = 0x1A87E0u;
label_1a87e0:
    // 0x1a87e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a87e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a87e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a87e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a87e8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a87e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a87ec: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A87ECu;
    {
        const bool branch_taken_0x1a87ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A87F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87ECu;
            // 0x1a87f0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87ec) {
            ctx->pc = 0x1A8784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8784;
        }
    }
    ctx->pc = 0x1A87F4u;
    // 0x1a87f4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1a87f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1a87f8: 0x26d60003  addiu       $s6, $s6, 0x3
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x1a87fc: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x1a87fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8800: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A8800u;
    {
        const bool branch_taken_0x1a8800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8800u;
            // 0x1a8804: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8800) {
            ctx->pc = 0x1A877Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a877c;
        }
    }
    ctx->pc = 0x1A8808u;
    // 0x1a8808: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a880c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8810: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8810u;
    SET_GPR_U32(ctx, 31, 0x1A8818u);
    ctx->pc = 0x1A8814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8810u;
            // 0x1a8814: 0x24a55fc0  addiu       $a1, $a1, 0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8818u; }
        if (ctx->pc != 0x1A8818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8818u; }
        if (ctx->pc != 0x1A8818u) { return; }
    }
    ctx->pc = 0x1A8818u;
label_1a8818:
    // 0x1a8818: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a881c:
    // 0x1a881c: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a8820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8824: 0x146200b8  bne         $v1, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1A8824u;
    {
        const bool branch_taken_0x1a8824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8824) {
            ctx->pc = 0x1A8B08u;
            goto label_1a8b08;
        }
    }
    ctx->pc = 0x1A882Cu;
    // 0x1a882c: 0x27d1fffe  addiu       $s1, $fp, -0x2
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x1a8830: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a8830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8834: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A8834u;
    {
        const bool branch_taken_0x1a8834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8834) {
            ctx->pc = 0x1A8998u;
            goto label_1a8998;
        }
    }
    ctx->pc = 0x1A883Cu;
    // 0x1a883c: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x1a883cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a8840: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x1A8840u;
    {
        const bool branch_taken_0x1a8840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8840) {
            ctx->pc = 0x1A8998u;
            goto label_1a8998;
        }
    }
    ctx->pc = 0x1A8848u;
    // 0x1a8848: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1A8848u;
    SET_GPR_U32(ctx, 31, 0x1A8850u);
    ctx->pc = 0x1A884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8848u;
            // 0x1a884c: 0x27a41240  addiu       $a0, $sp, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8850u; }
        if (ctx->pc != 0x1A8850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8850u; }
        if (ctx->pc != 0x1A8850u) { return; }
    }
    ctx->pc = 0x1A8850u;
label_1a8850:
    // 0x1a8850: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8854: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a8858: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8858u;
    SET_GPR_U32(ctx, 31, 0x1A8860u);
    ctx->pc = 0x1A885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8858u;
            // 0x1a885c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8860u; }
        if (ctx->pc != 0x1A8860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8860u; }
        if (ctx->pc != 0x1A8860u) { return; }
    }
    ctx->pc = 0x1A8860u;
label_1a8860:
    // 0x1a8860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8860u;
    {
        const bool branch_taken_0x1a8860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8860) {
            ctx->pc = 0x1A887Cu;
            goto label_1a887c;
        }
    }
    ctx->pc = 0x1A8868u;
    // 0x1a8868: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x1a886c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a886cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a8870: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1a8870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1a8874: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8878: 0xac431234  sw          $v1, 0x1234($v0)
    ctx->pc = 0x1a8878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 3));
label_1a887c:
    // 0x1a887c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a887cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8880: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a8880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a8884: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8884u;
    SET_GPR_U32(ctx, 31, 0x1A888Cu);
    ctx->pc = 0x1A8888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8884u;
            // 0x1a8888: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A888Cu; }
        if (ctx->pc != 0x1A888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A888Cu; }
        if (ctx->pc != 0x1A888Cu) { return; }
    }
    ctx->pc = 0x1A888Cu;
label_1a888c:
    // 0x1a888c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A888Cu;
    {
        const bool branch_taken_0x1a888c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A888Cu;
            // 0x1a8890: 0x27a41240  addiu       $a0, $sp, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a888c) {
            ctx->pc = 0x1A88ACu;
            goto label_1a88ac;
        }
    }
    ctx->pc = 0x1A8894u;
    // 0x1a8894: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x1a8894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x1a8898: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a889c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1a889cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1a88a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a88a4: 0xac431234  sw          $v1, 0x1234($v0)
    ctx->pc = 0x1a88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 3));
    // 0x1a88a8: 0x27a41240  addiu       $a0, $sp, 0x1240
    ctx->pc = 0x1a88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4672));
label_1a88ac:
    // 0x1a88ac: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1A88ACu;
    SET_GPR_U32(ctx, 31, 0x1A88B4u);
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88B4u; }
        if (ctx->pc != 0x1A88B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88B4u; }
        if (ctx->pc != 0x1A88B4u) { return; }
    }
    ctx->pc = 0x1A88B4u;
label_1a88b4:
    // 0x1a88b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a88b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a88b8: 0x0  nop
    ctx->pc = 0x1a88b8u;
    // NOP
    // 0x1a88bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a88bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a88c0: 0x0  nop
    ctx->pc = 0x1a88c0u;
    // NOP
    // 0x1a88c4: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x1A88C4u;
    {
        const bool branch_taken_0x1a88c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a88c4) {
            ctx->pc = 0x1A8998u;
            goto label_1a8998;
        }
    }
    ctx->pc = 0x1A88CCu;
    // 0x1a88cc: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a88d0: 0x27b31254  addiu       $s3, $sp, 0x1254
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4692));
    // 0x1a88d4: 0x27b21258  addiu       $s2, $sp, 0x1258
    ctx->pc = 0x1a88d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4696));
    // 0x1a88d8: 0x27a41250  addiu       $a0, $sp, 0x1250
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x1a88dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a88e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a88e4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1a88e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a88e8: 0xe7a01250  swc1        $f0, 0x1250($sp)
    ctx->pc = 0x1a88e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4688), bits); }
    // 0x1a88ec: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1a88ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a88f0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1a88f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1a88f4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1a88f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a88f8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1a88f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1a88fc: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1A88FCu;
    SET_GPR_U32(ctx, 31, 0x1A8904u);
    ctx->pc = 0x1A8900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88FCu;
            // 0x1a8900: 0xe7a1125c  swc1        $f1, 0x125C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4700), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8904u; }
        if (ctx->pc != 0x1A8904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8904u; }
        if (ctx->pc != 0x1A8904u) { return; }
    }
    ctx->pc = 0x1A8904u;
label_1a8904:
    // 0x1a8904: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a8904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8908: 0x0  nop
    ctx->pc = 0x1a8908u;
    // NOP
    // 0x1a890c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a890cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8910: 0x0  nop
    ctx->pc = 0x1a8910u;
    // NOP
    // 0x1a8914: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8914u;
    {
        const bool branch_taken_0x1a8914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8914u;
            // 0x1a8918: 0x27a41260  addiu       $a0, $sp, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8914) {
            ctx->pc = 0x1A8928u;
            goto label_1a8928;
        }
    }
    ctx->pc = 0x1A891Cu;
    // 0x1a891c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8920: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8924: 0x27a41260  addiu       $a0, $sp, 0x1260
    ctx->pc = 0x1a8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4704));
label_1a8928:
    // 0x1a8928: 0xc04c050  jal         func_130140
    ctx->pc = 0x1A8928u;
    SET_GPR_U32(ctx, 31, 0x1A8930u);
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8930u; }
        if (ctx->pc != 0x1A8930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8930u; }
        if (ctx->pc != 0x1A8930u) { return; }
    }
    ctx->pc = 0x1A8930u;
label_1a8930:
    // 0x1a8930: 0x27a41260  addiu       $a0, $sp, 0x1260
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4704));
    // 0x1a8934: 0x27a61240  addiu       $a2, $sp, 0x1240
    ctx->pc = 0x1a8934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4672));
    // 0x1a8938: 0xc041d20  jal         func_107480
    ctx->pc = 0x1A8938u;
    SET_GPR_U32(ctx, 31, 0x1A8940u);
    ctx->pc = 0x1A893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8938u;
            // 0x1a893c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107480u;
    if (runtime->hasFunction(0x107480u)) {
        auto targetFn = runtime->lookupFunction(0x107480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8940u; }
        if (ctx->pc != 0x1A8940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrix_0x107480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8940u; }
        if (ctx->pc != 0x1A8940u) { return; }
    }
    ctx->pc = 0x1A8940u;
label_1a8940:
    // 0x1a8940: 0x27a41250  addiu       $a0, $sp, 0x1250
    ctx->pc = 0x1a8940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x1a8944: 0x27a51260  addiu       $a1, $sp, 0x1260
    ctx->pc = 0x1a8944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4704));
    // 0x1a8948: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1A8948u;
    SET_GPR_U32(ctx, 31, 0x1A8950u);
    ctx->pc = 0x1A894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8948u;
            // 0x1a894c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8950u; }
        if (ctx->pc != 0x1A8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8950u; }
        if (ctx->pc != 0x1A8950u) { return; }
    }
    ctx->pc = 0x1A8950u;
label_1a8950:
    // 0x1a8950: 0x27a41250  addiu       $a0, $sp, 0x1250
    ctx->pc = 0x1a8950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x1a8954: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1A8954u;
    SET_GPR_U32(ctx, 31, 0x1A895Cu);
    ctx->pc = 0x1A8958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8954u;
            // 0x1a8958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A895Cu; }
        if (ctx->pc != 0x1A895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A895Cu; }
        if (ctx->pc != 0x1A895Cu) { return; }
    }
    ctx->pc = 0x1A895Cu;
label_1a895c:
    // 0x1a895c: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a8960: 0xc7a01250  lwc1        $f0, 0x1250($sp)
    ctx->pc = 0x1a8960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8968: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a896c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1a896cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1a8970: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a8974: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1a8974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a897c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a8980: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1a8980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1a8984: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a8984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a8988: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1a8988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a898c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8990: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a8990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a8994: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1a8994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1a8998:
    // 0x1a8998: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8998u;
    {
        const bool branch_taken_0x1a8998 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8998u;
            // 0x1a899c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8998) {
            ctx->pc = 0x1A89C8u;
            goto label_1a89c8;
        }
    }
    ctx->pc = 0x1A89A0u;
    // 0x1a89a0: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1a89a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a89a4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A89A4u;
    {
        const bool branch_taken_0x1a89a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a89a4) {
            ctx->pc = 0x1A89C4u;
            goto label_1a89c4;
        }
    }
    ctx->pc = 0x1A89ACu;
    // 0x1a89ac: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a89b0: 0xafb100c0  sw          $s1, 0xC0($sp)
    ctx->pc = 0x1a89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 17));
    // 0x1a89b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a89b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1a89bc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1a89c0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1a89c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1a89c4:
    // 0x1a89c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a89c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a89c8:
    // 0x1a89c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a89c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a89cc:
    // 0x1a89cc: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a89d0: 0x2321826  xor         $v1, $s1, $s2
    ctx->pc = 0x1a89d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
    // 0x1a89d4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1a89d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a89d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a89dc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1a89e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a89e4: 0xc44c0070  lwc1        $f12, 0x70($v0)
    ctx->pc = 0x1a89e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a89e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A89E8u;
    SET_GPR_U32(ctx, 31, 0x1A89F0u);
    ctx->pc = 0x1A89ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89E8u;
            // 0x1a89ec: 0x3a080  sll         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89F0u; }
        if (ctx->pc != 0x1A89F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89F0u; }
        if (ctx->pc != 0x1A89F0u) { return; }
    }
    ctx->pc = 0x1A89F0u;
label_1a89f0:
    // 0x1a89f0: 0x29d4021  addu        $t0, $s4, $sp
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1a89f4: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1a89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a89f8: 0x8d066440  lw          $a2, 0x6440($t0)
    ctx->pc = 0x1a89f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 25664)));
    // 0x1a89fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a89fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8a00: 0x8d096448  lw          $t1, 0x6448($t0)
    ctx->pc = 0x1a8a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 25672)));
    // 0x1a8a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a08: 0x8c676420  lw          $a3, 0x6420($v1)
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25632)));
    // 0x1a8a0c: 0x24a55fe0  addiu       $a1, $a1, 0x5FE0
    ctx->pc = 0x1a8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24544));
    // 0x1a8a10: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8A10u;
    SET_GPR_U32(ctx, 31, 0x1A8A18u);
    ctx->pc = 0x1A8A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A10u;
            // 0x1a8a14: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A18u; }
        if (ctx->pc != 0x1A8A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A18u; }
        if (ctx->pc != 0x1A8A18u) { return; }
    }
    ctx->pc = 0x1A8A18u;
label_1a8a18:
    // 0x1a8a18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8a1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a8a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a8a20: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1a8a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8a24: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A8A24u;
    {
        const bool branch_taken_0x1a8a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A24u;
            // 0x1a8a28: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a24) {
            ctx->pc = 0x1A89CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a89cc;
        }
    }
    ctx->pc = 0x1A8A2Cu;
    // 0x1a8a2c: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x1a8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x1a8a30: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8a34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8a40: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8a44: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8a48: 0x8c476448  lw          $a3, 0x6448($v0)
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8a4c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A54u);
    ctx->pc = 0x1A8A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A4Cu;
            // 0x1a8a50: 0x24a56000  addiu       $a1, $a1, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A54u; }
        if (ctx->pc != 0x1A8A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A54u; }
        if (ctx->pc != 0x1A8A54u) { return; }
    }
    ctx->pc = 0x1A8A54u;
label_1a8a54:
    // 0x1a8a54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8a58: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8a5c: 0x3a220004  xori        $v0, $s1, 0x4
    ctx->pc = 0x1a8a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)4);
    // 0x1a8a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8a6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8a70: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8a74: 0x8c476448  lw          $a3, 0x6448($v0)
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8a78: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8A78u;
    SET_GPR_U32(ctx, 31, 0x1A8A80u);
    ctx->pc = 0x1A8A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A78u;
            // 0x1a8a7c: 0x24a56020  addiu       $a1, $a1, 0x6020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A80u; }
        if (ctx->pc != 0x1A8A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A80u; }
        if (ctx->pc != 0x1A8A80u) { return; }
    }
    ctx->pc = 0x1A8A80u;
label_1a8a80:
    // 0x1a8a80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8a84: 0x3a230005  xori        $v1, $s1, 0x5
    ctx->pc = 0x1a8a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x1a8a88: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x1a8a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8a8c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8a9c: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8aa0: 0x8c476448  lw          $a3, 0x6448($v0)
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8aa4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8AA4u;
    SET_GPR_U32(ctx, 31, 0x1A8AACu);
    ctx->pc = 0x1A8AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AA4u;
            // 0x1a8aa8: 0x24a56040  addiu       $a1, $a1, 0x6040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AACu; }
        if (ctx->pc != 0x1A8AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AACu; }
        if (ctx->pc != 0x1A8AACu) { return; }
    }
    ctx->pc = 0x1A8AACu;
label_1a8aac:
    // 0x1a8aac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8ab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a8ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ab4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a8ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ab8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8abc:
    // 0x1a8abc: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a8ac0: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1a8ac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8ac8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a8acc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1A8ACCu;
    SET_GPR_U32(ctx, 31, 0x1A8AD4u);
    ctx->pc = 0x1A8AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8ACCu;
            // 0x1a8ad0: 0xc44c0030  lwc1        $f12, 0x30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AD4u; }
        if (ctx->pc != 0x1A8AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AD4u; }
        if (ctx->pc != 0x1A8AD4u) { return; }
    }
    ctx->pc = 0x1A8AD4u;
label_1a8ad4:
    // 0x1a8ad4: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1a8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a8ad8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8adc: 0x8c666430  lw          $a2, 0x6430($v1)
    ctx->pc = 0x1a8adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25648)));
    // 0x1a8ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ae4: 0x24a56058  addiu       $a1, $a1, 0x6058
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24664));
    // 0x1a8ae8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8AE8u;
    SET_GPR_U32(ctx, 31, 0x1A8AF0u);
    ctx->pc = 0x1A8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AE8u;
            // 0x1a8aec: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AF0u; }
        if (ctx->pc != 0x1A8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AF0u; }
        if (ctx->pc != 0x1A8AF0u) { return; }
    }
    ctx->pc = 0x1A8AF0u;
label_1a8af0:
    // 0x1a8af0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8af4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a8af8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a8af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8afc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1a8afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1a8b00: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A8B00u;
    {
        const bool branch_taken_0x1a8b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B00u;
            // 0x1a8b04: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b00) {
            ctx->pc = 0x1A8ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8abc;
        }
    }
    ctx->pc = 0x1A8B08u;
label_1a8b08:
    // 0x1a8b08: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a8b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8b10: 0x146200dc  bne         $v1, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x1A8B10u;
    {
        const bool branch_taken_0x1a8b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8b10) {
            ctx->pc = 0x1A8E84u;
            goto label_1a8e84;
        }
    }
    ctx->pc = 0x1A8B18u;
    // 0x1a8b18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8b1c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a8b20: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a8b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1a8b24: 0x27d1fffe  addiu       $s1, $fp, -0x2
    ctx->pc = 0x1a8b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x1a8b28: 0x26b201a0  addiu       $s2, $s5, 0x1A0
    ctx->pc = 0x1a8b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
    // 0x1a8b2c: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B34u);
    ctx->pc = 0x1A8B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B2Cu;
            // 0x1a8b30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B34u; }
        if (ctx->pc != 0x1A8B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B34u; }
        if (ctx->pc != 0x1A8B34u) { return; }
    }
    ctx->pc = 0x1A8B34u;
label_1a8b34:
    // 0x1a8b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8B34u;
    {
        const bool branch_taken_0x1a8b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b34) {
            ctx->pc = 0x1A8B40u;
            goto label_1a8b40;
        }
    }
    ctx->pc = 0x1A8B3Cu;
    // 0x1a8b3c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a8b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8b40:
    // 0x1a8b40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8b44: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a8b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a8b48: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8B48u;
    SET_GPR_U32(ctx, 31, 0x1A8B50u);
    ctx->pc = 0x1A8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B48u;
            // 0x1a8b4c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B50u; }
        if (ctx->pc != 0x1A8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B50u; }
        if (ctx->pc != 0x1A8B50u) { return; }
    }
    ctx->pc = 0x1A8B50u;
label_1a8b50:
    // 0x1a8b50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8B50u;
    {
        const bool branch_taken_0x1a8b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b50) {
            ctx->pc = 0x1A8B5Cu;
            goto label_1a8b5c;
        }
    }
    ctx->pc = 0x1A8B58u;
    // 0x1a8b58: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a8b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8b5c:
    // 0x1a8b5c: 0x1260006d  beqz        $s3, . + 4 + (0x6D << 2)
    ctx->pc = 0x1A8B5Cu;
    {
        const bool branch_taken_0x1a8b5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b5c) {
            ctx->pc = 0x1A8D14u;
            goto label_1a8d14;
        }
    }
    ctx->pc = 0x1A8B64u;
    // 0x1a8b64: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x1a8b64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a8b68: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A8B68u;
    {
        const bool branch_taken_0x1a8b68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b68) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8B70u;
    // 0x1a8b70: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1a8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1a8b74: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a8b78: 0x24636120  addiu       $v1, $v1, 0x6120
    ctx->pc = 0x1a8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24864));
    // 0x1a8b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8b84: 0x400008  jr          $v0
    ctx->pc = 0x1A8B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8B8Cu: goto label_1a8b8c;
            case 0x1A8BB4u: goto label_1a8bb4;
            case 0x1A8BDCu: goto label_1a8bdc;
            case 0x1A8C10u: goto label_1a8c10;
            case 0x1A8C30u: goto label_1a8c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8B8Cu;
label_1a8b8c:
    // 0x1a8b8c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1a8b8cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8b90: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a8b94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8b98: 0x0  nop
    ctx->pc = 0x1a8b98u;
    // NOP
    // 0x1a8b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8ba0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1a8ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8ba4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a8ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a8ba8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a8ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a8bac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A8BACu;
    {
        const bool branch_taken_0x1a8bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BACu;
            // 0x1a8bb0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bac) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1a8bb4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8bb8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a8bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8bc0: 0x0  nop
    ctx->pc = 0x1a8bc0u;
    // NOP
    // 0x1a8bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8bc8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1a8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8bcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a8bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a8bd0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a8bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a8bd4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A8BD4u;
    {
        const bool branch_taken_0x1a8bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BD4u;
            // 0x1a8bd8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bd4) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8BDCu;
label_1a8bdc:
    // 0x1a8bdc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1a8be0: 0x24430006  addiu       $v1, $v0, 0x6
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1a8be4: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1a8be4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1a8be8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a8bec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8BECu;
    {
        const bool branch_taken_0x1a8bec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BECu;
            // 0x1a8bf0: 0x28410100  slti        $at, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bec) {
            ctx->pc = 0x1A8BFCu;
            goto label_1a8bfc;
        }
    }
    ctx->pc = 0x1A8BF4u;
    // 0x1a8bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bf8: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x1a8bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_1a8bfc:
    // 0x1a8bfc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8BFCu;
    {
        const bool branch_taken_0x1a8bfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bfc) {
            ctx->pc = 0x1A8C08u;
            goto label_1a8c08;
        }
    }
    ctx->pc = 0x1A8C04u;
    // 0x1a8c04: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a8c08:
    // 0x1a8c08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A8C08u;
    {
        const bool branch_taken_0x1a8c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C08u;
            // 0x1a8c0c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c08) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8C10u;
label_1a8c10:
    // 0x1a8c10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A8C10u;
    SET_GPR_U32(ctx, 31, 0x1A8C18u);
    ctx->pc = 0x1A8C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C10u;
            // 0x1a8c14: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C18u; }
        if (ctx->pc != 0x1A8C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C18u; }
        if (ctx->pc != 0x1A8C18u) { return; }
    }
    ctx->pc = 0x1A8C18u;
label_1a8c18:
    // 0x1a8c18: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a8c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8c20: 0x0  nop
    ctx->pc = 0x1a8c20u;
    // NOP
    // 0x1a8c24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8c28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8C28u;
    {
        const bool branch_taken_0x1a8c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C28u;
            // 0x1a8c2c: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c28) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8C30u;
label_1a8c30:
    // 0x1a8c30: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A8C30u;
    SET_GPR_U32(ctx, 31, 0x1A8C38u);
    ctx->pc = 0x1A8C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C30u;
            // 0x1a8c34: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C38u; }
        if (ctx->pc != 0x1A8C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C38u; }
        if (ctx->pc != 0x1A8C38u) { return; }
    }
    ctx->pc = 0x1A8C38u;
label_1a8c38:
    // 0x1a8c38: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a8c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8c40: 0x0  nop
    ctx->pc = 0x1a8c40u;
    // NOP
    // 0x1a8c44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8c48: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1a8c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1a8c4c:
    // 0x1a8c4c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1a8c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a8c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8c54: 0x0  nop
    ctx->pc = 0x1a8c54u;
    // NOP
    // 0x1a8c58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a8c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8c5c: 0x0  nop
    ctx->pc = 0x1a8c5cu;
    // NOP
    // 0x1a8c60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8C60u;
    {
        const bool branch_taken_0x1a8c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8c60) {
            ctx->pc = 0x1A8C6Cu;
            goto label_1a8c6c;
        }
    }
    ctx->pc = 0x1A8C68u;
    // 0x1a8c68: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x1a8c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1a8c6c:
    // 0x1a8c6c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1a8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a8c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8c74: 0x0  nop
    ctx->pc = 0x1a8c74u;
    // NOP
    // 0x1a8c78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a8c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8c7c: 0x0  nop
    ctx->pc = 0x1a8c7cu;
    // NOP
    // 0x1a8c80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8C80u;
    {
        const bool branch_taken_0x1a8c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8c80) {
            ctx->pc = 0x1A8C8Cu;
            goto label_1a8c8c;
        }
    }
    ctx->pc = 0x1A8C88u;
    // 0x1a8c88: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1a8c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1a8c8c:
    // 0x1a8c8c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1a8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c90: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1a8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1a8c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8c98: 0x0  nop
    ctx->pc = 0x1a8c98u;
    // NOP
    // 0x1a8c9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a8c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8ca0: 0x0  nop
    ctx->pc = 0x1a8ca0u;
    // NOP
    // 0x1a8ca4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8CA4u;
    {
        const bool branch_taken_0x1a8ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8ca4) {
            ctx->pc = 0x1A8CB0u;
            goto label_1a8cb0;
        }
    }
    ctx->pc = 0x1A8CACu;
    // 0x1a8cac: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x1a8cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1a8cb0:
    // 0x1a8cb0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1a8cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8cb4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1a8cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8cbc: 0x0  nop
    ctx->pc = 0x1a8cbcu;
    // NOP
    // 0x1a8cc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a8cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8cc4: 0x0  nop
    ctx->pc = 0x1a8cc4u;
    // NOP
    // 0x1a8cc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8CC8u;
    {
        const bool branch_taken_0x1a8cc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8cc8) {
            ctx->pc = 0x1A8CD4u;
            goto label_1a8cd4;
        }
    }
    ctx->pc = 0x1A8CD0u;
    // 0x1a8cd0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1a8cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1a8cd4:
    // 0x1a8cd4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1a8cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8cd8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a8cdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8ce0: 0x0  nop
    ctx->pc = 0x1a8ce0u;
    // NOP
    // 0x1a8ce4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a8ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8ce8: 0x0  nop
    ctx->pc = 0x1a8ce8u;
    // NOP
    // 0x1a8cec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8CECu;
    {
        const bool branch_taken_0x1a8cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8cec) {
            ctx->pc = 0x1A8CF8u;
            goto label_1a8cf8;
        }
    }
    ctx->pc = 0x1A8CF4u;
    // 0x1a8cf4: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1a8cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1a8cf8:
    // 0x1a8cf8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1a8cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8cfc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1a8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8d00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a8d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8d04: 0x0  nop
    ctx->pc = 0x1a8d04u;
    // NOP
    // 0x1a8d08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8D08u;
    {
        const bool branch_taken_0x1a8d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8d08) {
            ctx->pc = 0x1A8D14u;
            goto label_1a8d14;
        }
    }
    ctx->pc = 0x1A8D10u;
    // 0x1a8d10: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1a8d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1a8d14:
    // 0x1a8d14: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1a8d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8d18: 0x2201026  xor         $v0, $s1, $zero
    ctx->pc = 0x1a8d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
    // 0x1a8d1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8d20: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1A8D20u;
    SET_GPR_U32(ctx, 31, 0x1A8D28u);
    ctx->pc = 0x1A8D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D20u;
            // 0x1a8d24: 0x29880  sll         $s3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D28u; }
        if (ctx->pc != 0x1A8D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D28u; }
        if (ctx->pc != 0x1A8D28u) { return; }
    }
    ctx->pc = 0x1A8D28u;
label_1a8d28:
    // 0x1a8d28: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1a8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a8d2c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8d30: 0x8c666440  lw          $a2, 0x6440($v1)
    ctx->pc = 0x1a8d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25664)));
    // 0x1a8d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d38: 0x8c686448  lw          $t0, 0x6448($v1)
    ctx->pc = 0x1a8d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25672)));
    // 0x1a8d3c: 0x24a56068  addiu       $a1, $a1, 0x6068
    ctx->pc = 0x1a8d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24680));
    // 0x1a8d40: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8D40u;
    SET_GPR_U32(ctx, 31, 0x1A8D48u);
    ctx->pc = 0x1A8D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D40u;
            // 0x1a8d44: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D48u; }
        if (ctx->pc != 0x1A8D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D48u; }
        if (ctx->pc != 0x1A8D48u) { return; }
    }
    ctx->pc = 0x1A8D48u;
label_1a8d48:
    // 0x1a8d48: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x1a8d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8d4c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8d50: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x1a8d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1a8d54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8d58: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1A8D58u;
    SET_GPR_U32(ctx, 31, 0x1A8D60u);
    ctx->pc = 0x1A8D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D58u;
            // 0x1a8d5c: 0x29880  sll         $s3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D60u; }
        if (ctx->pc != 0x1A8D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D60u; }
        if (ctx->pc != 0x1A8D60u) { return; }
    }
    ctx->pc = 0x1A8D60u;
label_1a8d60:
    // 0x1a8d60: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a8d64: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8d68: 0x8c666440  lw          $a2, 0x6440($v1)
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25664)));
    // 0x1a8d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d70: 0x8c686448  lw          $t0, 0x6448($v1)
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25672)));
    // 0x1a8d74: 0x24a56078  addiu       $a1, $a1, 0x6078
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24696));
    // 0x1a8d78: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8D78u;
    SET_GPR_U32(ctx, 31, 0x1A8D80u);
    ctx->pc = 0x1A8D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D78u;
            // 0x1a8d7c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D80u; }
        if (ctx->pc != 0x1A8D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D80u; }
        if (ctx->pc != 0x1A8D80u) { return; }
    }
    ctx->pc = 0x1A8D80u;
label_1a8d80:
    // 0x1a8d80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8d84: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8d88: 0x3a220002  xori        $v0, $s1, 0x2
    ctx->pc = 0x1a8d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
    // 0x1a8d8c: 0x92470008  lbu         $a3, 0x8($s2)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a8d90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8d9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8da0: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8da4: 0x8c486448  lw          $t0, 0x6448($v0)
    ctx->pc = 0x1a8da4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8da8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8DA8u;
    SET_GPR_U32(ctx, 31, 0x1A8DB0u);
    ctx->pc = 0x1A8DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DA8u;
            // 0x1a8dac: 0x24a56088  addiu       $a1, $a1, 0x6088 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DB0u; }
        if (ctx->pc != 0x1A8DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DB0u; }
        if (ctx->pc != 0x1A8DB0u) { return; }
    }
    ctx->pc = 0x1A8DB0u;
label_1a8db0:
    // 0x1a8db0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8db4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8db8: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x1a8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x1a8dbc: 0x92470009  lbu         $a3, 0x9($s2)
    ctx->pc = 0x1a8dbcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1a8dc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8dcc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8dd0: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8dd4: 0x8c486448  lw          $t0, 0x6448($v0)
    ctx->pc = 0x1a8dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8dd8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8DD8u;
    SET_GPR_U32(ctx, 31, 0x1A8DE0u);
    ctx->pc = 0x1A8DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DD8u;
            // 0x1a8ddc: 0x24a56098  addiu       $a1, $a1, 0x6098 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DE0u; }
        if (ctx->pc != 0x1A8DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DE0u; }
        if (ctx->pc != 0x1A8DE0u) { return; }
    }
    ctx->pc = 0x1A8DE0u;
label_1a8de0:
    // 0x1a8de0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8de4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8de8: 0x3a220004  xori        $v0, $s1, 0x4
    ctx->pc = 0x1a8de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)4);
    // 0x1a8dec: 0x9247000a  lbu         $a3, 0xA($s2)
    ctx->pc = 0x1a8decu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1a8df0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8dfc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8e00: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8e04: 0x8c486448  lw          $t0, 0x6448($v0)
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8e08: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8E08u;
    SET_GPR_U32(ctx, 31, 0x1A8E10u);
    ctx->pc = 0x1A8E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E08u;
            // 0x1a8e0c: 0x24a560a8  addiu       $a1, $a1, 0x60A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E10u; }
        if (ctx->pc != 0x1A8E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E10u; }
        if (ctx->pc != 0x1A8E10u) { return; }
    }
    ctx->pc = 0x1A8E10u;
label_1a8e10:
    // 0x1a8e10: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x1a8e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8e14: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8e18: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x1a8e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x1a8e1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8e20: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A8E20u;
    SET_GPR_U32(ctx, 31, 0x1A8E28u);
    ctx->pc = 0x1A8E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E20u;
            // 0x1a8e24: 0x29880  sll         $s3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E28u; }
        if (ctx->pc != 0x1A8E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E28u; }
        if (ctx->pc != 0x1A8E28u) { return; }
    }
    ctx->pc = 0x1A8E28u;
label_1a8e28:
    // 0x1a8e28: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1a8e2c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8e30: 0x8c666440  lw          $a2, 0x6440($v1)
    ctx->pc = 0x1a8e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25664)));
    // 0x1a8e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e38: 0x8c686448  lw          $t0, 0x6448($v1)
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25672)));
    // 0x1a8e3c: 0x24a560b8  addiu       $a1, $a1, 0x60B8
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24760));
    // 0x1a8e40: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8E40u;
    SET_GPR_U32(ctx, 31, 0x1A8E48u);
    ctx->pc = 0x1A8E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E40u;
            // 0x1a8e44: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E48u; }
        if (ctx->pc != 0x1A8E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E48u; }
        if (ctx->pc != 0x1A8E48u) { return; }
    }
    ctx->pc = 0x1A8E48u;
label_1a8e48:
    // 0x1a8e48: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x1a8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8e4c: 0x3a230006  xori        $v1, $s1, 0x6
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)6);
    // 0x1a8e50: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1a8e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8e54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8e58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A8E58u;
    SET_GPR_U32(ctx, 31, 0x1A8E60u);
    ctx->pc = 0x1A8E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E58u;
            // 0x1a8e5c: 0x38880  sll         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E60u; }
        if (ctx->pc != 0x1A8E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E60u; }
        if (ctx->pc != 0x1A8E60u) { return; }
    }
    ctx->pc = 0x1A8E60u;
label_1a8e60:
    // 0x1a8e60: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1a8e64: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8e68: 0x8c666440  lw          $a2, 0x6440($v1)
    ctx->pc = 0x1a8e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25664)));
    // 0x1a8e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e70: 0x8c686448  lw          $t0, 0x6448($v1)
    ctx->pc = 0x1a8e70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25672)));
    // 0x1a8e74: 0x24a560c8  addiu       $a1, $a1, 0x60C8
    ctx->pc = 0x1a8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24776));
    // 0x1a8e78: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8E78u;
    SET_GPR_U32(ctx, 31, 0x1A8E80u);
    ctx->pc = 0x1A8E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E78u;
            // 0x1a8e7c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E80u; }
        if (ctx->pc != 0x1A8E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E80u; }
        if (ctx->pc != 0x1A8E80u) { return; }
    }
    ctx->pc = 0x1A8E80u;
label_1a8e80:
    // 0x1a8e80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a8e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8e84:
    // 0x1a8e84: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a8e88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8e8c: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A8E8Cu;
    {
        const bool branch_taken_0x1a8e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e8c) {
            ctx->pc = 0x1A8F5Cu;
            goto label_1a8f5c;
        }
    }
    ctx->pc = 0x1A8E94u;
    // 0x1a8e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e98: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8e9c: 0x27d0fffe  addiu       $s0, $fp, -0x2
    ctx->pc = 0x1a8e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x1a8ea0: 0x2001026  xor         $v0, $s0, $zero
    ctx->pc = 0x1a8ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
    // 0x1a8ea4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a8ea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8eac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8eb0: 0x8c466440  lw          $a2, 0x6440($v0)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25664)));
    // 0x1a8eb4: 0x8c476448  lw          $a3, 0x6448($v0)
    ctx->pc = 0x1a8eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25672)));
    // 0x1a8eb8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8EB8u;
    SET_GPR_U32(ctx, 31, 0x1A8EC0u);
    ctx->pc = 0x1A8EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EB8u;
            // 0x1a8ebc: 0x24a560d8  addiu       $a1, $a1, 0x60D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EC0u; }
        if (ctx->pc != 0x1A8EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EC0u; }
        if (ctx->pc != 0x1A8EC0u) { return; }
    }
    ctx->pc = 0x1A8EC0u;
label_1a8ec0:
    // 0x1a8ec0: 0x16000026  bnez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A8EC0u;
    {
        const bool branch_taken_0x1a8ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ec0) {
            ctx->pc = 0x1A8F5Cu;
            goto label_1a8f5c;
        }
    }
    ctx->pc = 0x1A8EC8u;
    // 0x1a8ec8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8ecc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a8eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a8ed0: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8ED0u;
    SET_GPR_U32(ctx, 31, 0x1A8ED8u);
    ctx->pc = 0x1A8ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8ED0u;
            // 0x1a8ed4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8ED8u; }
        if (ctx->pc != 0x1A8ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8ED8u; }
        if (ctx->pc != 0x1A8ED8u) { return; }
    }
    ctx->pc = 0x1A8ED8u;
label_1a8ed8:
    // 0x1a8ed8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8ED8u;
    {
        const bool branch_taken_0x1a8ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ed8) {
            ctx->pc = 0x1A8EF8u;
            goto label_1a8ef8;
        }
    }
    ctx->pc = 0x1A8EE0u;
    // 0x1a8ee0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8ee4: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a8ee8: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8EE8u;
    SET_GPR_U32(ctx, 31, 0x1A8EF0u);
    ctx->pc = 0x1A8EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EE8u;
            // 0x1a8eec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EF0u; }
        if (ctx->pc != 0x1A8EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EF0u; }
        if (ctx->pc != 0x1A8EF0u) { return; }
    }
    ctx->pc = 0x1A8EF0u;
label_1a8ef0:
    // 0x1a8ef0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A8EF0u;
    {
        const bool branch_taken_0x1a8ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ef0) {
            ctx->pc = 0x1A8F5Cu;
            goto label_1a8f5c;
        }
    }
    ctx->pc = 0x1A8EF8u;
label_1a8ef8:
    // 0x1a8ef8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x1a8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a8efc: 0xc0597cc  jal         func_165F30
    ctx->pc = 0x1A8EFCu;
    SET_GPR_U32(ctx, 31, 0x1A8F04u);
    ctx->pc = 0x1A8F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EFCu;
            // 0x1a8f00: 0x27a512a0  addiu       $a1, $sp, 0x12A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165F30u;
    if (runtime->hasFunction(0x165F30u)) {
        auto targetFn = runtime->lookupFunction(0x165F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F04u; }
        if (ctx->pc != 0x1A8F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OutputLightData__8CMapInfoFPc_0x165f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F04u; }
        if (ctx->pc != 0x1A8F04u) { return; }
    }
    ctx->pc = 0x1A8F04u;
label_1a8f04:
    // 0x1a8f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f08: 0x1a000014  blez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A8F08u;
    {
        const bool branch_taken_0x1a8f08 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1a8f08) {
            ctx->pc = 0x1A8F5Cu;
            goto label_1a8f5c;
        }
    }
    ctx->pc = 0x1A8F10u;
    // 0x1a8f10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a8f14: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x1a8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1a8f18: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x1a8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x1a8f1c: 0x27a362a0  addiu       $v1, $sp, 0x62A0
    ctx->pc = 0x1a8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 25248));
    // 0x1a8f20: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a8f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8f24: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1a8f24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1a8f28: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1a8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1a8f2c: 0xc0a0f24  jal         func_283C90
    ctx->pc = 0x1A8F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F34u);
    ctx->pc = 0x1A8F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F2Cu;
            // 0x1a8f30: 0x8c452e5c  lw          $a1, 0x2E5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F34u; }
        if (ctx->pc != 0x1A8F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F34u; }
        if (ctx->pc != 0x1A8F34u) { return; }
    }
    ctx->pc = 0x1A8F34u;
label_1a8f34:
    // 0x1a8f34: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a8f38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a8f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f3c: 0x27a462b0  addiu       $a0, $sp, 0x62B0
    ctx->pc = 0x1a8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25264));
    // 0x1a8f40: 0x24a560f0  addiu       $a1, $a1, 0x60F0
    ctx->pc = 0x1a8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24816));
    // 0x1a8f44: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A8F44u;
    SET_GPR_U32(ctx, 31, 0x1A8F4Cu);
    ctx->pc = 0x1A8F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F44u;
            // 0x1a8f48: 0x27a662a0  addiu       $a2, $sp, 0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F4Cu; }
        if (ctx->pc != 0x1A8F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F4Cu; }
        if (ctx->pc != 0x1A8F4Cu) { return; }
    }
    ctx->pc = 0x1A8F4Cu;
label_1a8f4c:
    // 0x1a8f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a8f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f50: 0x27a512a0  addiu       $a1, $sp, 0x12A0
    ctx->pc = 0x1a8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4768));
    // 0x1a8f54: 0xc0526fc  jal         func_149BF0
    ctx->pc = 0x1A8F54u;
    SET_GPR_U32(ctx, 31, 0x1A8F5Cu);
    ctx->pc = 0x1A8F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F54u;
            // 0x1a8f58: 0x27a462b0  addiu       $a0, $sp, 0x62B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149BF0u;
    if (runtime->hasFunction(0x149BF0u)) {
        auto targetFn = runtime->lookupFunction(0x149BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F5Cu; }
        if (ctx->pc != 0x1A8F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WriteFile__FPcPvi_0x149bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F5Cu; }
        if (ctx->pc != 0x1A8F5Cu) { return; }
    }
    ctx->pc = 0x1A8F5Cu;
label_1a8f5c:
    // 0x1a8f5c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8f60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A8F60u;
    {
        const bool branch_taken_0x1a8f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f60) {
            ctx->pc = 0x1A8FE8u;
            goto label_1a8fe8;
        }
    }
    ctx->pc = 0x1A8F68u;
    // 0x1a8f68: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a8f6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8f70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8f74: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1a8f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8f78: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A8F78u;
    SET_GPR_U32(ctx, 31, 0x1A8F80u);
    ctx->pc = 0x1A8F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F78u;
            // 0x1a8f7c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F80u; }
        if (ctx->pc != 0x1A8F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F80u; }
        if (ctx->pc != 0x1A8F80u) { return; }
    }
    ctx->pc = 0x1A8F80u;
label_1a8f80:
    // 0x1a8f80: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f88: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a8f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1a8f8c: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F94u);
    ctx->pc = 0x1A8F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F8Cu;
            // 0x1a8f90: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F94u; }
        if (ctx->pc != 0x1A8F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F94u; }
        if (ctx->pc != 0x1A8F94u) { return; }
    }
    ctx->pc = 0x1A8F94u;
label_1a8f94:
    // 0x1a8f94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8F94u;
    {
        const bool branch_taken_0x1a8f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f94) {
            ctx->pc = 0x1A8FA0u;
            goto label_1a8fa0;
        }
    }
    ctx->pc = 0x1A8F9Cu;
    // 0x1a8f9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a8fa0:
    // 0x1a8fa0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8fa4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a8fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a8fa8: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8FA8u;
    SET_GPR_U32(ctx, 31, 0x1A8FB0u);
    ctx->pc = 0x1A8FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FA8u;
            // 0x1a8fac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FB0u; }
        if (ctx->pc != 0x1A8FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FB0u; }
        if (ctx->pc != 0x1A8FB0u) { return; }
    }
    ctx->pc = 0x1A8FB0u;
label_1a8fb0:
    // 0x1a8fb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8FB0u;
    {
        const bool branch_taken_0x1a8fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fb0) {
            ctx->pc = 0x1A8FBCu;
            goto label_1a8fbc;
        }
    }
    ctx->pc = 0x1A8FB8u;
    // 0x1a8fb8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a8fbc:
    // 0x1a8fbc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8FBCu;
    {
        const bool branch_taken_0x1a8fbc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A8FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FBCu;
            // 0x1a8fc0: 0x2a010100  slti        $at, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fbc) {
            ctx->pc = 0x1A8FCCu;
            goto label_1a8fcc;
        }
    }
    ctx->pc = 0x1A8FC4u;
    // 0x1a8fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fc8: 0x2a010100  slti        $at, $s0, 0x100
    ctx->pc = 0x1a8fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_1a8fcc:
    // 0x1a8fcc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8FCCu;
    {
        const bool branch_taken_0x1a8fcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fcc) {
            ctx->pc = 0x1A8FD8u;
            goto label_1a8fd8;
        }
    }
    ctx->pc = 0x1A8FD4u;
    // 0x1a8fd4: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x1a8fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a8fd8:
    // 0x1a8fd8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1a8fd8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8fdc: 0x0  nop
    ctx->pc = 0x1a8fdcu;
    // NOP
    // 0x1a8fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8fe4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a8fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a8fe8:
    // 0x1a8fe8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a8fec: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1a8fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a8ff0: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A8FF0u;
    SET_GPR_U32(ctx, 31, 0x1A8FF8u);
    ctx->pc = 0x1A8FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FF0u;
            // 0x1a8ff4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FF8u; }
        if (ctx->pc != 0x1A8FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FF8u; }
        if (ctx->pc != 0x1A8FF8u) { return; }
    }
    ctx->pc = 0x1A8FF8u;
label_1a8ff8:
    // 0x1a8ff8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8FF8u;
    {
        const bool branch_taken_0x1a8ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ff8) {
            ctx->pc = 0x1A9004u;
            goto label_1a9004;
        }
    }
    ctx->pc = 0x1A9000u;
    // 0x1a9000: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1a9000u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_1a9004:
    // 0x1a9004: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a9004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a9008: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1a9008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1a900c: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A900Cu;
    SET_GPR_U32(ctx, 31, 0x1A9014u);
    ctx->pc = 0x1A9010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A900Cu;
            // 0x1a9010: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9014u; }
        if (ctx->pc != 0x1A9014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9014u; }
        if (ctx->pc != 0x1A9014u) { return; }
    }
    ctx->pc = 0x1A9014u;
label_1a9014:
    // 0x1a9014: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9014u;
    {
        const bool branch_taken_0x1a9014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9014) {
            ctx->pc = 0x1A9020u;
            goto label_1a9020;
        }
    }
    ctx->pc = 0x1A901Cu;
    // 0x1a901c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1a901cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1a9020:
    // 0x1a9020: 0x7c10008  bgez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9020u;
    {
        const bool branch_taken_0x1a9020 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x1a9020) {
            ctx->pc = 0x1A9044u;
            goto label_1a9044;
        }
    }
    ctx->pc = 0x1A9028u;
    // 0x1a9028: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a902c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a9030: 0x24426860  addiu       $v0, $v0, 0x6860
    ctx->pc = 0x1a9030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26720));
    // 0x1a9034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a903c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9040: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a9044:
    // 0x1a9044: 0x8f908c3c  lw          $s0, -0x73C4($gp)
    ctx->pc = 0x1a9044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a9048: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a9048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a904c: 0x24426860  addiu       $v0, $v0, 0x6860
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26720));
    // 0x1a9050: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a9050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a9054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a9058: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a905c: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1a905cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a9060: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9060u;
    {
        const bool branch_taken_0x1a9060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9060) {
            ctx->pc = 0x1A906Cu;
            goto label_1a906c;
        }
    }
    ctx->pc = 0x1A9068u;
    // 0x1a9068: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1a9068u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a906c:
    // 0x1a906c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a9070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9074: 0x24636850  addiu       $v1, $v1, 0x6850
    ctx->pc = 0x1a9074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26704));
    // 0x1a9078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a9078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a907c: 0x17c20053  bne         $fp, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1A907Cu;
    {
        const bool branch_taken_0x1a907c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A907Cu;
            // 0x1a9080: 0xac7e0000  sw          $fp, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a907c) {
            ctx->pc = 0x1A91CCu;
            goto label_1a91cc;
        }
    }
    ctx->pc = 0x1A9084u;
    // 0x1a9084: 0x16020024  bne         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A9084u;
    {
        const bool branch_taken_0x1a9084 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9084) {
            ctx->pc = 0x1A9118u;
            goto label_1a9118;
        }
    }
    ctx->pc = 0x1A908Cu;
    // 0x1a908c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a908cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a9090: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a9090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a9094: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A9094u;
    SET_GPR_U32(ctx, 31, 0x1A909Cu);
    ctx->pc = 0x1A9098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9094u;
            // 0x1a9098: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A909Cu; }
        if (ctx->pc != 0x1A909Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A909Cu; }
        if (ctx->pc != 0x1A909Cu) { return; }
    }
    ctx->pc = 0x1A909Cu;
label_1a909c:
    // 0x1a909c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A909Cu;
    {
        const bool branch_taken_0x1a909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a909c) {
            ctx->pc = 0x1A90B0u;
            goto label_1a90b0;
        }
    }
    ctx->pc = 0x1A90A4u;
    // 0x1a90a4: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a90a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a90ac: 0xaf828c40  sw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a90acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 2));
label_1a90b0:
    // 0x1a90b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a90b4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a90b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a90b8: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A90B8u;
    SET_GPR_U32(ctx, 31, 0x1A90C0u);
    ctx->pc = 0x1A90BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90B8u;
            // 0x1a90bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90C0u; }
        if (ctx->pc != 0x1A90C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90C0u; }
        if (ctx->pc != 0x1A90C0u) { return; }
    }
    ctx->pc = 0x1A90C0u;
label_1a90c0:
    // 0x1a90c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A90C0u;
    {
        const bool branch_taken_0x1a90c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90c0) {
            ctx->pc = 0x1A90D4u;
            goto label_1a90d4;
        }
    }
    ctx->pc = 0x1A90C8u;
    // 0x1a90c8: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a90cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a90d0: 0xaf828c40  sw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 2));
label_1a90d4:
    // 0x1a90d4: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a90d8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A90D8u;
    {
        const bool branch_taken_0x1a90d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a90d8) {
            ctx->pc = 0x1A90F0u;
            goto label_1a90f0;
        }
    }
    ctx->pc = 0x1A90E0u;
    // 0x1a90e0: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a90e4: 0xaf808c40  sw          $zero, -0x73C0($gp)
    ctx->pc = 0x1a90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 0));
    // 0x1a90e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a90ec: 0xaf828c3c  sw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 2));
label_1a90f0:
    // 0x1a90f0: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a90f4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1a90f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a90f8: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A90F8u;
    {
        const bool branch_taken_0x1a90f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a90f8) {
            ctx->pc = 0x1A9160u;
            goto label_1a9160;
        }
    }
    ctx->pc = 0x1A9100u;
    // 0x1a9100: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a9104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9108: 0xaf838c40  sw          $v1, -0x73C0($gp)
    ctx->pc = 0x1a9108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 3));
    // 0x1a910c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9110: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9110u;
    {
        const bool branch_taken_0x1a9110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9110u;
            // 0x1a9114: 0xaf828c3c  sw          $v0, -0x73C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9110) {
            ctx->pc = 0x1A9160u;
            goto label_1a9160;
        }
    }
    ctx->pc = 0x1A9118u;
label_1a9118:
    // 0x1a9118: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a911c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a9120: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A9120u;
    SET_GPR_U32(ctx, 31, 0x1A9128u);
    ctx->pc = 0x1A9124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9120u;
            // 0x1a9124: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9128u; }
        if (ctx->pc != 0x1A9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9128u; }
        if (ctx->pc != 0x1A9128u) { return; }
    }
    ctx->pc = 0x1A9128u;
label_1a9128:
    // 0x1a9128: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9128u;
    {
        const bool branch_taken_0x1a9128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9128) {
            ctx->pc = 0x1A913Cu;
            goto label_1a913c;
        }
    }
    ctx->pc = 0x1A9130u;
    // 0x1a9130: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a9134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9138: 0xaf828c3c  sw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 2));
label_1a913c:
    // 0x1a913c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a9140: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a9140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a9144: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A9144u;
    SET_GPR_U32(ctx, 31, 0x1A914Cu);
    ctx->pc = 0x1A9148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9144u;
            // 0x1a9148: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A914Cu; }
        if (ctx->pc != 0x1A914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A914Cu; }
        if (ctx->pc != 0x1A914Cu) { return; }
    }
    ctx->pc = 0x1A914Cu;
label_1a914c:
    // 0x1a914c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A914Cu;
    {
        const bool branch_taken_0x1a914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a914c) {
            ctx->pc = 0x1A9160u;
            goto label_1a9160;
        }
    }
    ctx->pc = 0x1A9154u;
    // 0x1a9154: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a9158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a915c: 0xaf828c3c  sw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a915cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 2));
label_1a9160:
    // 0x1a9160: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a9164: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9164u;
    {
        const bool branch_taken_0x1a9164 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a9164) {
            ctx->pc = 0x1A9170u;
            goto label_1a9170;
        }
    }
    ctx->pc = 0x1A916Cu;
    // 0x1a916c: 0xaf808c3c  sw          $zero, -0x73C4($gp)
    ctx->pc = 0x1a916cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 0));
label_1a9170:
    // 0x1a9170: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a9174: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1a9174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9178: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9178u;
    {
        const bool branch_taken_0x1a9178 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9178) {
            ctx->pc = 0x1A9188u;
            goto label_1a9188;
        }
    }
    ctx->pc = 0x1A9180u;
    // 0x1a9180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9184: 0xaf828c3c  sw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a9184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 2));
label_1a9188:
    // 0x1a9188: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a9188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a918c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A918Cu;
    {
        const bool branch_taken_0x1a918c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A918Cu;
            // 0x1a9190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a918c) {
            ctx->pc = 0x1A919Cu;
            goto label_1a919c;
        }
    }
    ctx->pc = 0x1A9194u;
    // 0x1a9194: 0xaf808c40  sw          $zero, -0x73C0($gp)
    ctx->pc = 0x1a9194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 0));
    // 0x1a9198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a919c:
    // 0x1a919c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A919Cu;
    {
        const bool branch_taken_0x1a919c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a919c) {
            ctx->pc = 0x1A91ACu;
            goto label_1a91ac;
        }
    }
    ctx->pc = 0x1A91A4u;
    // 0x1a91a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a91a8: 0xaf828c40  sw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 2));
label_1a91ac:
    // 0x1a91ac: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A91ACu;
    {
        const bool branch_taken_0x1a91ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a91ac) {
            ctx->pc = 0x1A91CCu;
            goto label_1a91cc;
        }
    }
    ctx->pc = 0x1A91B4u;
    // 0x1a91b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a91b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a91bc: 0x24426850  addiu       $v0, $v0, 0x6850
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
    // 0x1a91c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a91c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a91c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a91cc:
    // 0x1a91cc: 0x17c00037  bnez        $fp, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A91CCu;
    {
        const bool branch_taken_0x1a91cc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a91cc) {
            ctx->pc = 0x1A92ACu;
            goto label_1a92ac;
        }
    }
    ctx->pc = 0x1A91D4u;
    // 0x1a91d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a91d8: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a91dc: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A91DCu;
    SET_GPR_U32(ctx, 31, 0x1A91E4u);
    ctx->pc = 0x1A91E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91DCu;
            // 0x1a91e0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E4u; }
        if (ctx->pc != 0x1A91E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E4u; }
        if (ctx->pc != 0x1A91E4u) { return; }
    }
    ctx->pc = 0x1A91E4u;
label_1a91e4:
    // 0x1a91e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A91E4u;
    {
        const bool branch_taken_0x1a91e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a91e4) {
            ctx->pc = 0x1A91F8u;
            goto label_1a91f8;
        }
    }
    ctx->pc = 0x1A91ECu;
    // 0x1a91ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a91f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a91f4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1a91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1a91f8:
    // 0x1a91f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a91fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a91fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a9200: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A9200u;
    SET_GPR_U32(ctx, 31, 0x1A9208u);
    ctx->pc = 0x1A9204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9200u;
            // 0x1a9204: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9208u; }
        if (ctx->pc != 0x1A9208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9208u; }
        if (ctx->pc != 0x1A9208u) { return; }
    }
    ctx->pc = 0x1A9208u;
label_1a9208:
    // 0x1a9208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9208u;
    {
        const bool branch_taken_0x1a9208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9208) {
            ctx->pc = 0x1A921Cu;
            goto label_1a921c;
        }
    }
    ctx->pc = 0x1A9210u;
    // 0x1a9210: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9218: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1a9218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1a921c:
    // 0x1a921c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9220: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9220u;
    {
        const bool branch_taken_0x1a9220 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a9220) {
            ctx->pc = 0x1A922Cu;
            goto label_1a922c;
        }
    }
    ctx->pc = 0x1A9228u;
    // 0x1a9228: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1a9228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1a922c:
    // 0x1a922c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a9230: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1a9234: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9238: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a9238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a923c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A923Cu;
    {
        const bool branch_taken_0x1a923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a923c) {
            ctx->pc = 0x1A924Cu;
            goto label_1a924c;
        }
    }
    ctx->pc = 0x1A9244u;
    // 0x1a9244: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1a9244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9248: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1a9248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1a924c:
    // 0x1a924c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9250: 0xc0584d8  jal         func_161360
    ctx->pc = 0x1A9250u;
    SET_GPR_U32(ctx, 31, 0x1A9258u);
    ctx->pc = 0x1A9254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9250u;
            // 0x1a9254: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161360u;
    if (runtime->hasFunction(0x161360u)) {
        auto targetFn = runtime->lookupFunction(0x161360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9258u; }
        if (ctx->pc != 0x1A9258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightNoTime__4CMapFi_0x161360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9258u; }
        if (ctx->pc != 0x1A9258u) { return; }
    }
    ctx->pc = 0x1A9258u;
label_1a9258:
    // 0x1a9258: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a9258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a925c: 0x0  nop
    ctx->pc = 0x1a925cu;
    // NOP
    // 0x1a9260: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a9260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9264: 0x0  nop
    ctx->pc = 0x1a9264u;
    // NOP
    // 0x1a9268: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9268u;
    {
        const bool branch_taken_0x1a9268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9268) {
            ctx->pc = 0x1A927Cu;
            goto label_1a927c;
        }
    }
    ctx->pc = 0x1A9270u;
    // 0x1a9270: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x1a9270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1a9274: 0xc0a1270  jal         func_2849C0
    ctx->pc = 0x1A9274u;
    SET_GPR_U32(ctx, 31, 0x1A927Cu);
    ctx->pc = 0x1A9278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9274u;
            // 0x1a9278: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A927Cu; }
        if (ctx->pc != 0x1A927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A927Cu; }
        if (ctx->pc != 0x1A927Cu) { return; }
    }
    ctx->pc = 0x1A927Cu;
label_1a927c:
    // 0x1a927c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9280: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9280u;
    {
        const bool branch_taken_0x1a9280 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a9280) {
            ctx->pc = 0x1A92ACu;
            goto label_1a92ac;
        }
    }
    ctx->pc = 0x1A9288u;
    // 0x1a9288: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a928c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1a9290: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9294: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a9294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a9298: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9298u;
    {
        const bool branch_taken_0x1a9298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9298) {
            ctx->pc = 0x1A92ACu;
            goto label_1a92ac;
        }
    }
    ctx->pc = 0x1A92A0u;
    // 0x1a92a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a92a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92a4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1a92a8: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x1a92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
label_1a92ac:
    // 0x1a92ac: 0xc064210  jal         func_190840
    ctx->pc = 0x1A92ACu;
    SET_GPR_U32(ctx, 31, 0x1A92B4u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B4u; }
        if (ctx->pc != 0x1A92B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B4u; }
        if (ctx->pc != 0x1A92B4u) { return; }
    }
    ctx->pc = 0x1A92B4u;
label_1a92b4:
    // 0x1a92b4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a92b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a92b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92bc: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a92c0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1A92C0u;
    SET_GPR_U32(ctx, 31, 0x1A92C8u);
    ctx->pc = 0x1A92C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92C0u;
            // 0x1a92c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92C8u; }
        if (ctx->pc != 0x1A92C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92C8u; }
        if (ctx->pc != 0x1A92C8u) { return; }
    }
    ctx->pc = 0x1A92C8u;
label_1a92c8:
    // 0x1a92c8: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a92cc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A92CCu;
    {
        const bool branch_taken_0x1a92cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a92cc) {
            ctx->pc = 0x1A93A8u;
            goto label_1a93a8;
        }
    }
    ctx->pc = 0x1A92D4u;
    // 0x1a92d4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a92d8: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1A92D8u;
    SET_GPR_U32(ctx, 31, 0x1A92E0u);
    ctx->pc = 0x1A92DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92D8u;
            // 0x1a92dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92E0u; }
        if (ctx->pc != 0x1A92E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92E0u; }
        if (ctx->pc != 0x1A92E0u) { return; }
    }
    ctx->pc = 0x1A92E0u;
label_1a92e0:
    // 0x1a92e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a92e4: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1A92E4u;
    SET_GPR_U32(ctx, 31, 0x1A92ECu);
    ctx->pc = 0x1A92E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92E4u;
            // 0x1a92e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92ECu; }
        if (ctx->pc != 0x1A92ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92ECu; }
        if (ctx->pc != 0x1A92ECu) { return; }
    }
    ctx->pc = 0x1A92ECu;
label_1a92ec:
    // 0x1a92ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a92f0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1A92F0u;
    SET_GPR_U32(ctx, 31, 0x1A92F8u);
    ctx->pc = 0x1A92F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92F0u;
            // 0x1a92f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92F8u; }
        if (ctx->pc != 0x1A92F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92F8u; }
        if (ctx->pc != 0x1A92F8u) { return; }
    }
    ctx->pc = 0x1A92F8u;
label_1a92f8:
    // 0x1a92f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a92f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a92fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1A92FCu;
    SET_GPR_U32(ctx, 31, 0x1A9304u);
    ctx->pc = 0x1A9300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92FCu;
            // 0x1a9300: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9304u; }
        if (ctx->pc != 0x1A9304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9304u; }
        if (ctx->pc != 0x1A9304u) { return; }
    }
    ctx->pc = 0x1A9304u;
label_1a9304:
    // 0x1a9304: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9308: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x1A9308u;
    SET_GPR_U32(ctx, 31, 0x1A9310u);
    ctx->pc = 0x1A930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9308u;
            // 0x1a930c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9310u; }
        if (ctx->pc != 0x1A9310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9310u; }
        if (ctx->pc != 0x1A9310u) { return; }
    }
    ctx->pc = 0x1A9310u;
label_1a9310:
    // 0x1a9310: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9314: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1a9314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a9318: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1a9318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1a931c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A931Cu;
    SET_GPR_U32(ctx, 31, 0x1A9324u);
    ctx->pc = 0x1A9320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A931Cu;
            // 0x1a9320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9324u; }
        if (ctx->pc != 0x1A9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9324u; }
        if (ctx->pc != 0x1A9324u) { return; }
    }
    ctx->pc = 0x1A9324u;
label_1a9324:
    // 0x1a9324: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9328: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a932c: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1a932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1a9330: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A9330u;
    SET_GPR_U32(ctx, 31, 0x1A9338u);
    ctx->pc = 0x1A9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9330u;
            // 0x1a9334: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9338u; }
        if (ctx->pc != 0x1A9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9338u; }
        if (ctx->pc != 0x1A9338u) { return; }
    }
    ctx->pc = 0x1A9338u;
label_1a9338:
    // 0x1a9338: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a933c: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x1A933Cu;
    SET_GPR_U32(ctx, 31, 0x1A9344u);
    ctx->pc = 0x1A9340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A933Cu;
            // 0x1a9340: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9344u; }
        if (ctx->pc != 0x1A9344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9344u; }
        if (ctx->pc != 0x1A9344u) { return; }
    }
    ctx->pc = 0x1A9344u;
label_1a9344:
    // 0x1a9344: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9348: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1a9348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a934c: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1a934cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1a9350: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A9350u;
    SET_GPR_U32(ctx, 31, 0x1A9358u);
    ctx->pc = 0x1A9354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9350u;
            // 0x1a9354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9358u; }
        if (ctx->pc != 0x1A9358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9358u; }
        if (ctx->pc != 0x1A9358u) { return; }
    }
    ctx->pc = 0x1A9358u;
label_1a9358:
    // 0x1a9358: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a935c: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1a935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a9360: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1a9360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1a9364: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A9364u;
    SET_GPR_U32(ctx, 31, 0x1A936Cu);
    ctx->pc = 0x1A9368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9364u;
            // 0x1a9368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A936Cu; }
        if (ctx->pc != 0x1A936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A936Cu; }
        if (ctx->pc != 0x1A936Cu) { return; }
    }
    ctx->pc = 0x1A936Cu;
label_1a936c:
    // 0x1a936c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9370: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x1A9370u;
    SET_GPR_U32(ctx, 31, 0x1A9378u);
    ctx->pc = 0x1A9374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9370u;
            // 0x1a9374: 0x26a50180  addiu       $a1, $s5, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9378u; }
        if (ctx->pc != 0x1A9378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9378u; }
        if (ctx->pc != 0x1A9378u) { return; }
    }
    ctx->pc = 0x1A9378u;
label_1a9378:
    // 0x1a9378: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a937c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1a937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a9380: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1a9384: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A9384u;
    SET_GPR_U32(ctx, 31, 0x1A938Cu);
    ctx->pc = 0x1A9388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9384u;
            // 0x1a9388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A938Cu; }
        if (ctx->pc != 0x1A938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A938Cu; }
        if (ctx->pc != 0x1A938Cu) { return; }
    }
    ctx->pc = 0x1A938Cu;
label_1a938c:
    // 0x1a938c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9390: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1a9394: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1a9398: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A9398u;
    SET_GPR_U32(ctx, 31, 0x1A93A0u);
    ctx->pc = 0x1A939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9398u;
            // 0x1a939c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93A0u; }
        if (ctx->pc != 0x1A93A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93A0u; }
        if (ctx->pc != 0x1A93A0u) { return; }
    }
    ctx->pc = 0x1A93A0u;
label_1a93a0:
    // 0x1a93a0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1A93A0u;
    SET_GPR_U32(ctx, 31, 0x1A93A8u);
    ctx->pc = 0x1A93A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93A0u;
            // 0x1a93a4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93A8u; }
        if (ctx->pc != 0x1A93A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93A8u; }
        if (ctx->pc != 0x1A93A8u) { return; }
    }
    ctx->pc = 0x1A93A8u;
label_1a93a8:
    // 0x1a93a8: 0x8f838c3c  lw          $v1, -0x73C4($gp)
    ctx->pc = 0x1a93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x1a93ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a93acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a93b0: 0x14620130  bne         $v1, $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x1A93B0u;
    {
        const bool branch_taken_0x1a93b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a93b0) {
            ctx->pc = 0x1A9874u;
            goto label_1a9874;
        }
    }
    ctx->pc = 0x1A93B8u;
    // 0x1a93b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a93b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a93bc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1A93BCu;
    SET_GPR_U32(ctx, 31, 0x1A93C4u);
    ctx->pc = 0x1A93C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93BCu;
            // 0x1a93c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93C4u; }
        if (ctx->pc != 0x1A93C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93C4u; }
        if (ctx->pc != 0x1A93C4u) { return; }
    }
    ctx->pc = 0x1A93C4u;
label_1a93c4:
    // 0x1a93c4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a93c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a93c8: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1A93C8u;
    SET_GPR_U32(ctx, 31, 0x1A93D0u);
    ctx->pc = 0x1A93CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93C8u;
            // 0x1a93cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D0u; }
        if (ctx->pc != 0x1A93D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D0u; }
        if (ctx->pc != 0x1A93D0u) { return; }
    }
    ctx->pc = 0x1A93D0u;
label_1a93d0:
    // 0x1a93d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a93d4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1A93D4u;
    SET_GPR_U32(ctx, 31, 0x1A93DCu);
    ctx->pc = 0x1A93D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93D4u;
            // 0x1a93d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93DCu; }
        if (ctx->pc != 0x1A93DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93DCu; }
        if (ctx->pc != 0x1A93DCu) { return; }
    }
    ctx->pc = 0x1A93DCu;
label_1a93dc:
    // 0x1a93dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a93e0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1A93E0u;
    SET_GPR_U32(ctx, 31, 0x1A93E8u);
    ctx->pc = 0x1A93E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93E0u;
            // 0x1a93e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93E8u; }
        if (ctx->pc != 0x1A93E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93E8u; }
        if (ctx->pc != 0x1A93E8u) { return; }
    }
    ctx->pc = 0x1A93E8u;
label_1a93e8:
    // 0x1a93e8: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a93ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a93ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a93f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a93f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1a93f8: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x1A93F8u;
    SET_GPR_U32(ctx, 31, 0x1A9400u);
    ctx->pc = 0x1A93FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93F8u;
            // 0x1a93fc: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
        if (ctx->pc != 0x1A9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
        if (ctx->pc != 0x1A9400u) { return; }
    }
    ctx->pc = 0x1A9400u;
label_1a9400:
    // 0x1a9400: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9404: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1a9404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a9408: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1a9408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1a940c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A940Cu;
    SET_GPR_U32(ctx, 31, 0x1A9414u);
    ctx->pc = 0x1A9410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A940Cu;
            // 0x1a9410: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9414u; }
        if (ctx->pc != 0x1A9414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9414u; }
        if (ctx->pc != 0x1A9414u) { return; }
    }
    ctx->pc = 0x1A9414u;
label_1a9414:
    // 0x1a9414: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9418: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1a9418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a941c: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x1a941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1a9420: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A9420u;
    SET_GPR_U32(ctx, 31, 0x1A9428u);
    ctx->pc = 0x1A9424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9420u;
            // 0x1a9424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9428u; }
        if (ctx->pc != 0x1A9428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9428u; }
        if (ctx->pc != 0x1A9428u) { return; }
    }
    ctx->pc = 0x1A9428u;
label_1a9428:
    // 0x1a9428: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1A9428u;
    SET_GPR_U32(ctx, 31, 0x1A9430u);
    ctx->pc = 0x1A942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9428u;
            // 0x1a942c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9430u; }
        if (ctx->pc != 0x1A9430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9430u; }
        if (ctx->pc != 0x1A9430u) { return; }
    }
    ctx->pc = 0x1A9430u;
label_1a9430:
    // 0x1a9430: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a9430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a9434: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x1a9434u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x1a9438: 0x244268c0  addiu       $v0, $v0, 0x68C0
    ctx->pc = 0x1a9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26816));
    // 0x1a943c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1a943cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1a9440: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x1a9440u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9444: 0x27ac63e0  addiu       $t4, $sp, 0x63E0
    ctx->pc = 0x1a9444u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 25568));
    // 0x1a9448: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1a9448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1a944c: 0x27a46330  addiu       $a0, $sp, 0x6330
    ctx->pc = 0x1a944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25392));
    // 0x1a9450: 0x254a68d0  addiu       $t2, $t2, 0x68D0
    ctx->pc = 0x1a9450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26832));
    // 0x1a9454: 0x27a963f0  addiu       $t1, $sp, 0x63F0
    ctx->pc = 0x1a9454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 25584));
    // 0x1a9458: 0x250868e0  addiu       $t0, $t0, 0x68E0
    ctx->pc = 0x1a9458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26848));
    // 0x1a945c: 0x27a76400  addiu       $a3, $sp, 0x6400
    ctx->pc = 0x1a945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 25600));
    // 0x1a9460: 0x24c668f0  addiu       $a2, $a2, 0x68F0
    ctx->pc = 0x1a9460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26864));
    // 0x1a9464: 0x27a36410  addiu       $v1, $sp, 0x6410
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 25616));
    // 0x1a9468: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a9468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a946c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a9470: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x1a9470u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
    // 0x1a9474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9478: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x1a9478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a947c: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x1a947cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x1a9480: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1a9480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a9484: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1a9484u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1a9488: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1a9488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a948c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1a948cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1a9490: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x1a9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x1a9494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9498: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a9498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a949c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1a949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a94a0: 0xe7a06330  swc1        $f0, 0x6330($sp)
    ctx->pc = 0x1a94a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 25392), bits); }
    // 0x1a94a4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1a94a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a94a8: 0xe7a06334  swc1        $f0, 0x6334($sp)
    ctx->pc = 0x1a94a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 25396), bits); }
    // 0x1a94ac: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1a94acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a94b0: 0xe7a06338  swc1        $f0, 0x6338($sp)
    ctx->pc = 0x1a94b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 25400), bits); }
    // 0x1a94b4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A94B4u;
    SET_GPR_U32(ctx, 31, 0x1A94BCu);
    ctx->pc = 0x1A94B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94B4u;
            // 0x1a94b8: 0xafa0633c  sw          $zero, 0x633C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 25404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94BCu; }
        if (ctx->pc != 0x1A94BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94BCu; }
        if (ctx->pc != 0x1A94BCu) { return; }
    }
    ctx->pc = 0x1A94BCu;
label_1a94bc:
    // 0x1a94bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a94c0: 0x27a463f0  addiu       $a0, $sp, 0x63F0
    ctx->pc = 0x1a94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25584));
    // 0x1a94c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a94c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a94c8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A94C8u;
    SET_GPR_U32(ctx, 31, 0x1A94D0u);
    ctx->pc = 0x1A94CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94C8u;
            // 0x1a94cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94D0u; }
        if (ctx->pc != 0x1A94D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94D0u; }
        if (ctx->pc != 0x1A94D0u) { return; }
    }
    ctx->pc = 0x1A94D0u;
label_1a94d0:
    // 0x1a94d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a94d4: 0x27a46400  addiu       $a0, $sp, 0x6400
    ctx->pc = 0x1a94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25600));
    // 0x1a94d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a94d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a94dc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A94DCu;
    SET_GPR_U32(ctx, 31, 0x1A94E4u);
    ctx->pc = 0x1A94E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94DCu;
            // 0x1a94e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94E4u; }
        if (ctx->pc != 0x1A94E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94E4u; }
        if (ctx->pc != 0x1A94E4u) { return; }
    }
    ctx->pc = 0x1A94E4u;
label_1a94e4:
    // 0x1a94e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a94e8: 0x27a46410  addiu       $a0, $sp, 0x6410
    ctx->pc = 0x1a94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25616));
    // 0x1a94ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a94ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a94f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A94F0u;
    SET_GPR_U32(ctx, 31, 0x1A94F8u);
    ctx->pc = 0x1A94F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94F0u;
            // 0x1a94f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94F8u; }
        if (ctx->pc != 0x1A94F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94F8u; }
        if (ctx->pc != 0x1A94F8u) { return; }
    }
    ctx->pc = 0x1A94F8u;
label_1a94f8:
    // 0x1a94f8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x1a94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1a94fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a94fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9500: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1A9500u;
    SET_GPR_U32(ctx, 31, 0x1A9508u);
    ctx->pc = 0x1A9504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9500u;
            // 0x1a9504: 0x8c452e54  lw          $a1, 0x2E54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9508u; }
        if (ctx->pc != 0x1A9508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9508u; }
        if (ctx->pc != 0x1A9508u) { return; }
    }
    ctx->pc = 0x1A9508u;
label_1a9508:
    // 0x1a9508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9508u;
    {
        const bool branch_taken_0x1a9508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9508) {
            ctx->pc = 0x1A951Cu;
            goto label_1a951c;
        }
    }
    ctx->pc = 0x1A9510u;
    // 0x1a9510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a9510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9514: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x1A9514u;
    SET_GPR_U32(ctx, 31, 0x1A951Cu);
    ctx->pc = 0x1A9518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9514u;
            // 0x1a9518: 0x27a56340  addiu       $a1, $sp, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A951Cu; }
        if (ctx->pc != 0x1A951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A951Cu; }
        if (ctx->pc != 0x1A951Cu) { return; }
    }
    ctx->pc = 0x1A951Cu;
label_1a951c:
    // 0x1a951c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9520: 0x27a46350  addiu       $a0, $sp, 0x6350
    ctx->pc = 0x1a9520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25424));
    // 0x1a9524: 0xafa2634c  sw          $v0, 0x634C($sp)
    ctx->pc = 0x1a9524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 25420), GPR_U32(ctx, 2));
    // 0x1a9528: 0x27a56340  addiu       $a1, $sp, 0x6340
    ctx->pc = 0x1a9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25408));
    // 0x1a952c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A952Cu;
    SET_GPR_U32(ctx, 31, 0x1A9534u);
    ctx->pc = 0x1A9530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A952Cu;
            // 0x1a9530: 0x27a66330  addiu       $a2, $sp, 0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9534u; }
        if (ctx->pc != 0x1A9534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9534u; }
        if (ctx->pc != 0x1A9534u) { return; }
    }
    ctx->pc = 0x1A9534u;
label_1a9534:
    // 0x1a9534: 0x27a46360  addiu       $a0, $sp, 0x6360
    ctx->pc = 0x1a9534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25440));
    // 0x1a9538: 0x27a56340  addiu       $a1, $sp, 0x6340
    ctx->pc = 0x1a9538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25408));
    // 0x1a953c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A953Cu;
    SET_GPR_U32(ctx, 31, 0x1A9544u);
    ctx->pc = 0x1A9540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A953Cu;
            // 0x1a9540: 0x27a663f0  addiu       $a2, $sp, 0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9544u; }
        if (ctx->pc != 0x1A9544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9544u; }
        if (ctx->pc != 0x1A9544u) { return; }
    }
    ctx->pc = 0x1A9544u;
label_1a9544:
    // 0x1a9544: 0x27a46370  addiu       $a0, $sp, 0x6370
    ctx->pc = 0x1a9544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25456));
    // 0x1a9548: 0x27a56340  addiu       $a1, $sp, 0x6340
    ctx->pc = 0x1a9548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25408));
    // 0x1a954c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A954Cu;
    SET_GPR_U32(ctx, 31, 0x1A9554u);
    ctx->pc = 0x1A9550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A954Cu;
            // 0x1a9550: 0x27a66400  addiu       $a2, $sp, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9554u; }
        if (ctx->pc != 0x1A9554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9554u; }
        if (ctx->pc != 0x1A9554u) { return; }
    }
    ctx->pc = 0x1A9554u;
label_1a9554:
    // 0x1a9554: 0x27a46380  addiu       $a0, $sp, 0x6380
    ctx->pc = 0x1a9554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25472));
    // 0x1a9558: 0x27a56340  addiu       $a1, $sp, 0x6340
    ctx->pc = 0x1a9558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25408));
    // 0x1a955c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A955Cu;
    SET_GPR_U32(ctx, 31, 0x1A9564u);
    ctx->pc = 0x1A9560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A955Cu;
            // 0x1a9560: 0x27a66410  addiu       $a2, $sp, 0x6410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9564u; }
        if (ctx->pc != 0x1A9564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9564u; }
        if (ctx->pc != 0x1A9564u) { return; }
    }
    ctx->pc = 0x1A9564u;
label_1a9564:
    // 0x1a9564: 0x27a46390  addiu       $a0, $sp, 0x6390
    ctx->pc = 0x1a9564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25488));
    // 0x1a9568: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x1A9568u;
    SET_GPR_U32(ctx, 31, 0x1A9570u);
    ctx->pc = 0x1A956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9568u;
            // 0x1a956c: 0x27a56340  addiu       $a1, $sp, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9570u; }
        if (ctx->pc != 0x1A9570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9570u; }
        if (ctx->pc != 0x1A9570u) { return; }
    }
    ctx->pc = 0x1A9570u;
label_1a9570:
    // 0x1a9570: 0x27a463a0  addiu       $a0, $sp, 0x63A0
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25504));
    // 0x1a9574: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x1A9574u;
    SET_GPR_U32(ctx, 31, 0x1A957Cu);
    ctx->pc = 0x1A9578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9574u;
            // 0x1a9578: 0x27a56350  addiu       $a1, $sp, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A957Cu; }
        if (ctx->pc != 0x1A957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A957Cu; }
        if (ctx->pc != 0x1A957Cu) { return; }
    }
    ctx->pc = 0x1A957Cu;
label_1a957c:
    // 0x1a957c: 0x27a463b0  addiu       $a0, $sp, 0x63B0
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25520));
    // 0x1a9580: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x1A9580u;
    SET_GPR_U32(ctx, 31, 0x1A9588u);
    ctx->pc = 0x1A9584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9580u;
            // 0x1a9584: 0x27a56360  addiu       $a1, $sp, 0x6360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9588u; }
        if (ctx->pc != 0x1A9588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9588u; }
        if (ctx->pc != 0x1A9588u) { return; }
    }
    ctx->pc = 0x1A9588u;
label_1a9588:
    // 0x1a9588: 0x27a463c0  addiu       $a0, $sp, 0x63C0
    ctx->pc = 0x1a9588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25536));
    // 0x1a958c: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x1A958Cu;
    SET_GPR_U32(ctx, 31, 0x1A9594u);
    ctx->pc = 0x1A9590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A958Cu;
            // 0x1a9590: 0x27a56370  addiu       $a1, $sp, 0x6370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9594u; }
        if (ctx->pc != 0x1A9594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9594u; }
        if (ctx->pc != 0x1A9594u) { return; }
    }
    ctx->pc = 0x1A9594u;
label_1a9594:
    // 0x1a9594: 0x27a463d0  addiu       $a0, $sp, 0x63D0
    ctx->pc = 0x1a9594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25552));
    // 0x1a9598: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x1A9598u;
    SET_GPR_U32(ctx, 31, 0x1A95A0u);
    ctx->pc = 0x1A959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9598u;
            // 0x1a959c: 0x27a56380  addiu       $a1, $sp, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95A0u; }
        if (ctx->pc != 0x1A95A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95A0u; }
        if (ctx->pc != 0x1A95A0u) { return; }
    }
    ctx->pc = 0x1A95A0u;
label_1a95a0:
    // 0x1a95a0: 0x27b063a0  addiu       $s0, $sp, 0x63A0
    ctx->pc = 0x1a95a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 25504));
    // 0x1a95a4: 0x8fa36390  lw          $v1, 0x6390($sp)
    ctx->pc = 0x1a95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 25488)));
    // 0x1a95a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a95ac: 0x27b763b0  addiu       $s7, $sp, 0x63B0
    ctx->pc = 0x1a95acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 25520));
    // 0x1a95b0: 0x27b663c0  addiu       $s6, $sp, 0x63C0
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 25536));
    // 0x1a95b4: 0x27b563d0  addiu       $s5, $sp, 0x63D0
    ctx->pc = 0x1a95b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 25552));
    // 0x1a95b8: 0x27b163a4  addiu       $s1, $sp, 0x63A4
    ctx->pc = 0x1a95b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 25508));
    // 0x1a95bc: 0x27b263b4  addiu       $s2, $sp, 0x63B4
    ctx->pc = 0x1a95bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 25524));
    // 0x1a95c0: 0x27b363c4  addiu       $s3, $sp, 0x63C4
    ctx->pc = 0x1a95c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 25540));
    // 0x1a95c4: 0x27b463d4  addiu       $s4, $sp, 0x63D4
    ctx->pc = 0x1a95c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 25556));
    // 0x1a95c8: 0x27a46350  addiu       $a0, $sp, 0x6350
    ctx->pc = 0x1a95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25424));
    // 0x1a95cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a95ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a95d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a95d8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1a95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1a95dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a95e0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1a95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1a95e4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1a95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1a95e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a95ec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1a95ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1a95f0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a95f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a95f8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a95fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a9600: 0x8fa36394  lw          $v1, 0x6394($sp)
    ctx->pc = 0x1a9600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 25492)));
    // 0x1a9604: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a9604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9608: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a9608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a960c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a9610: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a9610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9614: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a9614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a9618: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a961c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a961cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9620: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a9620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a9624: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a9628: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a9628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a962c: 0xc041c72  jal         func_1071C8
    ctx->pc = 0x1A962Cu;
    SET_GPR_U32(ctx, 31, 0x1A9634u);
    ctx->pc = 0x1A9630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A962Cu;
            // 0x1a9630: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071C8u;
    if (runtime->hasFunction(0x1071C8u)) {
        auto targetFn = runtime->lookupFunction(0x1071C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9634u; }
        if (ctx->pc != 0x1A9634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ITOF4Vector_0x1071c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9634u; }
        if (ctx->pc != 0x1A9634u) { return; }
    }
    ctx->pc = 0x1A9634u;
label_1a9634:
    // 0x1a9634: 0x27a46360  addiu       $a0, $sp, 0x6360
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25440));
    // 0x1a9638: 0xc041c72  jal         func_1071C8
    ctx->pc = 0x1A9638u;
    SET_GPR_U32(ctx, 31, 0x1A9640u);
    ctx->pc = 0x1A963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9638u;
            // 0x1a963c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071C8u;
    if (runtime->hasFunction(0x1071C8u)) {
        auto targetFn = runtime->lookupFunction(0x1071C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9640u; }
        if (ctx->pc != 0x1A9640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ITOF4Vector_0x1071c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9640u; }
        if (ctx->pc != 0x1A9640u) { return; }
    }
    ctx->pc = 0x1A9640u;
label_1a9640:
    // 0x1a9640: 0x27a46370  addiu       $a0, $sp, 0x6370
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25456));
    // 0x1a9644: 0xc041c72  jal         func_1071C8
    ctx->pc = 0x1A9644u;
    SET_GPR_U32(ctx, 31, 0x1A964Cu);
    ctx->pc = 0x1A9648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9644u;
            // 0x1a9648: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071C8u;
    if (runtime->hasFunction(0x1071C8u)) {
        auto targetFn = runtime->lookupFunction(0x1071C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A964Cu; }
        if (ctx->pc != 0x1A964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ITOF4Vector_0x1071c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A964Cu; }
        if (ctx->pc != 0x1A964Cu) { return; }
    }
    ctx->pc = 0x1A964Cu;
label_1a964c:
    // 0x1a964c: 0x27a46380  addiu       $a0, $sp, 0x6380
    ctx->pc = 0x1a964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25472));
    // 0x1a9650: 0xc041c72  jal         func_1071C8
    ctx->pc = 0x1A9650u;
    SET_GPR_U32(ctx, 31, 0x1A9658u);
    ctx->pc = 0x1A9654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9650u;
            // 0x1a9654: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071C8u;
    if (runtime->hasFunction(0x1071C8u)) {
        auto targetFn = runtime->lookupFunction(0x1071C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9658u; }
        if (ctx->pc != 0x1A9658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ITOF4Vector_0x1071c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9658u; }
        if (ctx->pc != 0x1A9658u) { return; }
    }
    ctx->pc = 0x1A9658u;
label_1a9658:
    // 0x1a9658: 0xc7a16374  lwc1        $f1, 0x6374($sp)
    ctx->pc = 0x1a9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 25460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a965c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a965cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9660: 0x0  nop
    ctx->pc = 0x1a9660u;
    // NOP
    // 0x1a9664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9668: 0x0  nop
    ctx->pc = 0x1a9668u;
    // NOP
    // 0x1a966c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A966Cu;
    {
        const bool branch_taken_0x1a966c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a966c) {
            ctx->pc = 0x1A9678u;
            goto label_1a9678;
        }
    }
    ctx->pc = 0x1A9674u;
    // 0x1a9674: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a9674u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a9678:
    // 0x1a9678: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a9678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1a967c: 0x27a46350  addiu       $a0, $sp, 0x6350
    ctx->pc = 0x1a967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25424));
    // 0x1a9680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9684: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a9684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9688: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1a9688u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a968c: 0x0  nop
    ctx->pc = 0x1a968cu;
    // NOP
    // 0x1a9690: 0x0  nop
    ctx->pc = 0x1a9690u;
    // NOP
    // 0x1a9694: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A9694u;
    SET_GPR_U32(ctx, 31, 0x1A969Cu);
    ctx->pc = 0x1A9698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9694u;
            // 0x1a9698: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A969Cu; }
        if (ctx->pc != 0x1A969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A969Cu; }
        if (ctx->pc != 0x1A969Cu) { return; }
    }
    ctx->pc = 0x1A969Cu;
label_1a969c:
    // 0x1a969c: 0x27a46360  addiu       $a0, $sp, 0x6360
    ctx->pc = 0x1a969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25440));
    // 0x1a96a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a96a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a96a4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A96A4u;
    SET_GPR_U32(ctx, 31, 0x1A96ACu);
    ctx->pc = 0x1A96A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96A4u;
            // 0x1a96a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96ACu; }
        if (ctx->pc != 0x1A96ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96ACu; }
        if (ctx->pc != 0x1A96ACu) { return; }
    }
    ctx->pc = 0x1A96ACu;
label_1a96ac:
    // 0x1a96ac: 0x27a46370  addiu       $a0, $sp, 0x6370
    ctx->pc = 0x1a96acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25456));
    // 0x1a96b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a96b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a96b4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A96B4u;
    SET_GPR_U32(ctx, 31, 0x1A96BCu);
    ctx->pc = 0x1A96B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96B4u;
            // 0x1a96b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96BCu; }
        if (ctx->pc != 0x1A96BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96BCu; }
        if (ctx->pc != 0x1A96BCu) { return; }
    }
    ctx->pc = 0x1A96BCu;
label_1a96bc:
    // 0x1a96bc: 0x27a46380  addiu       $a0, $sp, 0x6380
    ctx->pc = 0x1a96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25472));
    // 0x1a96c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a96c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a96c4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1A96C4u;
    SET_GPR_U32(ctx, 31, 0x1A96CCu);
    ctx->pc = 0x1A96C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96C4u;
            // 0x1a96c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96CCu; }
        if (ctx->pc != 0x1A96CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96CCu; }
        if (ctx->pc != 0x1A96CCu) { return; }
    }
    ctx->pc = 0x1A96CCu;
label_1a96cc:
    // 0x1a96cc: 0x27a463a0  addiu       $a0, $sp, 0x63A0
    ctx->pc = 0x1a96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25504));
    // 0x1a96d0: 0xc041c6a  jal         func_1071A8
    ctx->pc = 0x1A96D0u;
    SET_GPR_U32(ctx, 31, 0x1A96D8u);
    ctx->pc = 0x1A96D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96D0u;
            // 0x1a96d4: 0x27a56350  addiu       $a1, $sp, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071A8u;
    if (runtime->hasFunction(0x1071A8u)) {
        auto targetFn = runtime->lookupFunction(0x1071A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96D8u; }
        if (ctx->pc != 0x1A96D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0FTOI4Vector_0x1071a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96D8u; }
        if (ctx->pc != 0x1A96D8u) { return; }
    }
    ctx->pc = 0x1A96D8u;
label_1a96d8:
    // 0x1a96d8: 0x27a463b0  addiu       $a0, $sp, 0x63B0
    ctx->pc = 0x1a96d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25520));
    // 0x1a96dc: 0xc041c6a  jal         func_1071A8
    ctx->pc = 0x1A96DCu;
    SET_GPR_U32(ctx, 31, 0x1A96E4u);
    ctx->pc = 0x1A96E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96DCu;
            // 0x1a96e0: 0x27a56360  addiu       $a1, $sp, 0x6360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071A8u;
    if (runtime->hasFunction(0x1071A8u)) {
        auto targetFn = runtime->lookupFunction(0x1071A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96E4u; }
        if (ctx->pc != 0x1A96E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0FTOI4Vector_0x1071a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96E4u; }
        if (ctx->pc != 0x1A96E4u) { return; }
    }
    ctx->pc = 0x1A96E4u;
label_1a96e4:
    // 0x1a96e4: 0x27a463c0  addiu       $a0, $sp, 0x63C0
    ctx->pc = 0x1a96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25536));
    // 0x1a96e8: 0xc041c6a  jal         func_1071A8
    ctx->pc = 0x1A96E8u;
    SET_GPR_U32(ctx, 31, 0x1A96F0u);
    ctx->pc = 0x1A96ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96E8u;
            // 0x1a96ec: 0x27a56370  addiu       $a1, $sp, 0x6370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071A8u;
    if (runtime->hasFunction(0x1071A8u)) {
        auto targetFn = runtime->lookupFunction(0x1071A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96F0u; }
        if (ctx->pc != 0x1A96F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0FTOI4Vector_0x1071a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96F0u; }
        if (ctx->pc != 0x1A96F0u) { return; }
    }
    ctx->pc = 0x1A96F0u;
label_1a96f0:
    // 0x1a96f0: 0x27a463d0  addiu       $a0, $sp, 0x63D0
    ctx->pc = 0x1a96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 25552));
    // 0x1a96f4: 0xc041c6a  jal         func_1071A8
    ctx->pc = 0x1A96F4u;
    SET_GPR_U32(ctx, 31, 0x1A96FCu);
    ctx->pc = 0x1A96F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96F4u;
            // 0x1a96f8: 0x27a56380  addiu       $a1, $sp, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071A8u;
    if (runtime->hasFunction(0x1071A8u)) {
        auto targetFn = runtime->lookupFunction(0x1071A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96FCu; }
        if (ctx->pc != 0x1A96FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0FTOI4Vector_0x1071a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96FCu; }
        if (ctx->pc != 0x1A96FCu) { return; }
    }
    ctx->pc = 0x1A96FCu;
label_1a96fc:
    // 0x1a96fc: 0x8fa363e0  lw          $v1, 0x63E0($sp)
    ctx->pc = 0x1a96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 25568)));
    // 0x1a9700: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9704: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a970c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a9710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a9714: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1a9714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1a9718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a971c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1a971cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1a9720: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1a9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1a9724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9728: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1a9728u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1a972c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a9730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9734: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a9734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a9738: 0x8fa363e4  lw          $v1, 0x63E4($sp)
    ctx->pc = 0x1a9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 25572)));
    // 0x1a973c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a9740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9744: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a9744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a9748: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a974c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9750: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a9750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a9754: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a9754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a9758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a975c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a975cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a9760: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a9760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a9764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9768: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1A9768u;
    SET_GPR_U32(ctx, 31, 0x1A9770u);
    ctx->pc = 0x1A976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9768u;
            // 0x1a976c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9770u; }
        if (ctx->pc != 0x1A9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9770u; }
        if (ctx->pc != 0x1A9770u) { return; }
    }
    ctx->pc = 0x1A9770u;
label_1a9770:
    // 0x1a9770: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9774: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1A9774u;
    SET_GPR_U32(ctx, 31, 0x1A977Cu);
    ctx->pc = 0x1A9778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9774u;
            // 0x1a9778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A977Cu; }
        if (ctx->pc != 0x1A977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A977Cu; }
        if (ctx->pc != 0x1A977Cu) { return; }
    }
    ctx->pc = 0x1A977Cu;
label_1a977c:
    // 0x1a977c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9780: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1A9780u;
    SET_GPR_U32(ctx, 31, 0x1A9788u);
    ctx->pc = 0x1A9784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9780u;
            // 0x1a9784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9788u; }
        if (ctx->pc != 0x1A9788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9788u; }
        if (ctx->pc != 0x1A9788u) { return; }
    }
    ctx->pc = 0x1A9788u;
label_1a9788:
    // 0x1a9788: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a978c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1A978Cu;
    SET_GPR_U32(ctx, 31, 0x1A9794u);
    ctx->pc = 0x1A9790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A978Cu;
            // 0x1a9790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9794u; }
        if (ctx->pc != 0x1A9794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9794u; }
        if (ctx->pc != 0x1A9794u) { return; }
    }
    ctx->pc = 0x1A9794u;
label_1a9794:
    // 0x1a9794: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a979c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1a979cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a97a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a97a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97a4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A97A4u;
    SET_GPR_U32(ctx, 31, 0x1A97ACu);
    ctx->pc = 0x1A97A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97A4u;
            // 0x1a97a8: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97ACu; }
        if (ctx->pc != 0x1A97ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97ACu; }
        if (ctx->pc != 0x1A97ACu) { return; }
    }
    ctx->pc = 0x1A97ACu;
label_1a97ac:
    // 0x1a97ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a97acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a97b0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A97B0u;
    SET_GPR_U32(ctx, 31, 0x1A97B8u);
    ctx->pc = 0x1A97B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97B0u;
            // 0x1a97b4: 0x27a563e0  addiu       $a1, $sp, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97B8u; }
        if (ctx->pc != 0x1A97B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97B8u; }
        if (ctx->pc != 0x1A97B8u) { return; }
    }
    ctx->pc = 0x1A97B8u;
label_1a97b8:
    // 0x1a97b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a97bc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A97BCu;
    SET_GPR_U32(ctx, 31, 0x1A97C4u);
    ctx->pc = 0x1A97C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97BCu;
            // 0x1a97c0: 0x27a563b0  addiu       $a1, $sp, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97C4u; }
        if (ctx->pc != 0x1A97C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97C4u; }
        if (ctx->pc != 0x1A97C4u) { return; }
    }
    ctx->pc = 0x1A97C4u;
label_1a97c4:
    // 0x1a97c4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a97c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a97c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a97ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97d0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1a97d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a97d4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A97D4u;
    SET_GPR_U32(ctx, 31, 0x1A97DCu);
    ctx->pc = 0x1A97D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97D4u;
            // 0x1a97d8: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97DCu; }
        if (ctx->pc != 0x1A97DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97DCu; }
        if (ctx->pc != 0x1A97DCu) { return; }
    }
    ctx->pc = 0x1A97DCu;
label_1a97dc:
    // 0x1a97dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a97e0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A97E0u;
    SET_GPR_U32(ctx, 31, 0x1A97E8u);
    ctx->pc = 0x1A97E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97E0u;
            // 0x1a97e4: 0x27a563e0  addiu       $a1, $sp, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97E8u; }
        if (ctx->pc != 0x1A97E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97E8u; }
        if (ctx->pc != 0x1A97E8u) { return; }
    }
    ctx->pc = 0x1A97E8u;
label_1a97e8:
    // 0x1a97e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a97ec: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A97ECu;
    SET_GPR_U32(ctx, 31, 0x1A97F4u);
    ctx->pc = 0x1A97F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97ECu;
            // 0x1a97f0: 0x27a563c0  addiu       $a1, $sp, 0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97F4u; }
        if (ctx->pc != 0x1A97F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97F4u; }
        if (ctx->pc != 0x1A97F4u) { return; }
    }
    ctx->pc = 0x1A97F4u;
label_1a97f4:
    // 0x1a97f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a97f8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a97fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a97fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a9800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9804: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A9804u;
    SET_GPR_U32(ctx, 31, 0x1A980Cu);
    ctx->pc = 0x1A9808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9804u;
            // 0x1a9808: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A980Cu; }
        if (ctx->pc != 0x1A980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A980Cu; }
        if (ctx->pc != 0x1A980Cu) { return; }
    }
    ctx->pc = 0x1A980Cu;
label_1a980c:
    // 0x1a980c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9810: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A9810u;
    SET_GPR_U32(ctx, 31, 0x1A9818u);
    ctx->pc = 0x1A9814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9810u;
            // 0x1a9814: 0x27a563e0  addiu       $a1, $sp, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9818u; }
        if (ctx->pc != 0x1A9818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9818u; }
        if (ctx->pc != 0x1A9818u) { return; }
    }
    ctx->pc = 0x1A9818u;
label_1a9818:
    // 0x1a9818: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a981c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A981Cu;
    SET_GPR_U32(ctx, 31, 0x1A9824u);
    ctx->pc = 0x1A9820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A981Cu;
            // 0x1a9820: 0x27a563d0  addiu       $a1, $sp, 0x63D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9824u; }
        if (ctx->pc != 0x1A9824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9824u; }
        if (ctx->pc != 0x1A9824u) { return; }
    }
    ctx->pc = 0x1A9824u;
label_1a9824:
    // 0x1a9824: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a9828: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a982c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a982cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9830: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a9830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9834: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A9834u;
    SET_GPR_U32(ctx, 31, 0x1A983Cu);
    ctx->pc = 0x1A9838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9834u;
            // 0x1a9838: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A983Cu; }
        if (ctx->pc != 0x1A983Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A983Cu; }
        if (ctx->pc != 0x1A983Cu) { return; }
    }
    ctx->pc = 0x1A983Cu;
label_1a983c:
    // 0x1a983c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9840: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A9840u;
    SET_GPR_U32(ctx, 31, 0x1A9848u);
    ctx->pc = 0x1A9844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9840u;
            // 0x1a9844: 0x27a563e0  addiu       $a1, $sp, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9848u; }
        if (ctx->pc != 0x1A9848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9848u; }
        if (ctx->pc != 0x1A9848u) { return; }
    }
    ctx->pc = 0x1A9848u;
label_1a9848:
    // 0x1a9848: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a9848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a984c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9850: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a9850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9854: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a9854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9858: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A9858u;
    SET_GPR_U32(ctx, 31, 0x1A9860u);
    ctx->pc = 0x1A985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9858u;
            // 0x1a985c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9860u; }
        if (ctx->pc != 0x1A9860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9860u; }
        if (ctx->pc != 0x1A9860u) { return; }
    }
    ctx->pc = 0x1A9860u;
label_1a9860:
    // 0x1a9860: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1a9860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a9864: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1A9864u;
    SET_GPR_U32(ctx, 31, 0x1A986Cu);
    ctx->pc = 0x1A9868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9864u;
            // 0x1a9868: 0x27a563a0  addiu       $a1, $sp, 0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 25504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A986Cu; }
        if (ctx->pc != 0x1A986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A986Cu; }
        if (ctx->pc != 0x1A986Cu) { return; }
    }
    ctx->pc = 0x1A986Cu;
label_1a986c:
    // 0x1a986c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1A986Cu;
    SET_GPR_U32(ctx, 31, 0x1A9874u);
    ctx->pc = 0x1A9870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A986Cu;
            // 0x1a9870: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9874u; }
        if (ctx->pc != 0x1A9874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9874u; }
        if (ctx->pc != 0x1A9874u) { return; }
    }
    ctx->pc = 0x1A9874u;
label_1a9874:
    // 0x1a9874: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x1a9874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1a9878: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a987c: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1A987Cu;
    SET_GPR_U32(ctx, 31, 0x1A9884u);
    ctx->pc = 0x1A9880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A987Cu;
            // 0x1a9880: 0x8c452e54  lw          $a1, 0x2E54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9884u; }
        if (ctx->pc != 0x1A9884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9884u; }
        if (ctx->pc != 0x1A9884u) { return; }
    }
    ctx->pc = 0x1A9884u;
label_1a9884:
    // 0x1a9884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9888: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A9888u;
    {
        const bool branch_taken_0x1a9888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9888) {
            ctx->pc = 0x1A9900u;
            goto label_1a9900;
        }
    }
    ctx->pc = 0x1A9890u;
    // 0x1a9890: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a9890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a9894: 0xc052ce0  jal         func_14B380
    ctx->pc = 0x1A9894u;
    SET_GPR_U32(ctx, 31, 0x1A989Cu);
    ctx->pc = 0x1A9898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9894u;
            // 0x1a9898: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B380u;
    if (runtime->hasFunction(0x14B380u)) {
        auto targetFn = runtime->lookupFunction(0x14B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A989Cu; }
        if (ctx->pc != 0x1A989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf2__8CGamePadFv_0x14b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A989Cu; }
        if (ctx->pc != 0x1A989Cu) { return; }
    }
    ctx->pc = 0x1A989Cu;
label_1a989c:
    // 0x1a989c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1a989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1a98a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a98a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a98a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a98a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a98a8: 0x0  nop
    ctx->pc = 0x1a98a8u;
    // NOP
    // 0x1a98ac: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1a98acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x1a98b0: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x1a98b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a98b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a98b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a98b8: 0x0  nop
    ctx->pc = 0x1a98b8u;
    // NOP
    // 0x1a98bc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1a98bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a98c0: 0x0  nop
    ctx->pc = 0x1a98c0u;
    // NOP
    // 0x1a98c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A98C4u;
    {
        const bool branch_taken_0x1a98c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98C4u;
            // 0x1a98c8: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98c4) {
            ctx->pc = 0x1A98D8u;
            goto label_1a98d8;
        }
    }
    ctx->pc = 0x1A98CCu;
    // 0x1a98cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A98CCu;
    {
        const bool branch_taken_0x1a98cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98CCu;
            // 0x1a98d0: 0x46006047  neg.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98cc) {
            ctx->pc = 0x1A98D8u;
            goto label_1a98d8;
        }
    }
    ctx->pc = 0x1A98D4u;
    // 0x1a98d4: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1a98d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_1a98d8:
    // 0x1a98d8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1a98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1a98dc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1a98dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1a98e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a98e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a98e4: 0x0  nop
    ctx->pc = 0x1a98e4u;
    // NOP
    // 0x1a98e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a98e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a98ec: 0x0  nop
    ctx->pc = 0x1a98ecu;
    // NOP
    // 0x1a98f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A98F0u;
    {
        const bool branch_taken_0x1a98f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a98f0) {
            ctx->pc = 0x1A9900u;
            goto label_1a9900;
        }
    }
    ctx->pc = 0x1A98F8u;
    // 0x1a98f8: 0xc0bb1c4  jal         func_2EC710
    ctx->pc = 0x1A98F8u;
    SET_GPR_U32(ctx, 31, 0x1A9900u);
    ctx->pc = 0x1A98FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98F8u;
            // 0x1a98fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9900u; }
        if (ctx->pc != 0x1A9900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9900u; }
        if (ctx->pc != 0x1A9900u) { return; }
    }
    ctx->pc = 0x1A9900u;
label_1a9900:
    // 0x1a9900: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a9900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a9904: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1a9904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1a9908: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1A9908u;
    SET_GPR_U32(ctx, 31, 0x1A9910u);
    ctx->pc = 0x1A990Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9908u;
            // 0x1a990c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9910u; }
        if (ctx->pc != 0x1A9910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9910u; }
        if (ctx->pc != 0x1A9910u) { return; }
    }
    ctx->pc = 0x1A9910u;
label_1a9910:
    // 0x1a9910: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9910u;
    {
        const bool branch_taken_0x1a9910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9910) {
            ctx->pc = 0x1A9930u;
            goto label_1a9930;
        }
    }
    ctx->pc = 0x1A9918u;
    // 0x1a9918: 0xc06a108  jal         func_1A8420
    ctx->pc = 0x1A9918u;
    SET_GPR_U32(ctx, 31, 0x1A9920u);
    ctx->pc = 0x1A991Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9918u;
            // 0x1a991c: 0xaf808c38  sw          $zero, -0x73C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8420u;
    if (runtime->hasFunction(0x1A8420u)) {
        auto targetFn = runtime->lookupFunction(0x1A8420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9920u; }
        if (ctx->pc != 0x1A9920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndLightingEdit__Fv_0x1a8420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9920u; }
        if (ctx->pc != 0x1A9920u) { return; }
    }
    ctx->pc = 0x1A9920u;
label_1a9920:
    // 0x1a9920: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a9920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1a9924: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1a9928: 0xc052c10  jal         func_14B040
    ctx->pc = 0x1A9928u;
    SET_GPR_U32(ctx, 31, 0x1A9930u);
    ctx->pc = 0x1A992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9928u;
            // 0x1a992c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B040u;
    if (runtime->hasFunction(0x14B040u)) {
        auto targetFn = runtime->lookupFunction(0x14B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9930u; }
        if (ctx->pc != 0x1A9930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelAutoRepeat2__8CGamePadFi_0x14b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9930u; }
        if (ctx->pc != 0x1A9930u) { return; }
    }
    ctx->pc = 0x1A9930u;
label_1a9930:
    // 0x1a9930: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a9930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9934:
    // 0x1a9934: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9938: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a9938u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a993c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a993cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a9940: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a9940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9944: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a9944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a9948: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a9948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a994c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a994cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9950: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a9950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a9954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a995c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A995Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A995Cu;
            // 0x1a9960: 0x27bd6460  addiu       $sp, $sp, 0x6460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 25696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9964u;
}
