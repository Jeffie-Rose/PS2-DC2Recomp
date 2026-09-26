#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CDamageScore2FP6CScene
// Address: 0x1cb030 - 0x1cb244
void Draw__13CDamageScore2FP6CScene_0x1cb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CDamageScore2FP6CScene_0x1cb030");
#endif

    switch (ctx->pc) {
        case 0x1cb06cu: goto label_1cb06c;
        case 0x1cb088u: goto label_1cb088;
        case 0x1cb098u: goto label_1cb098;
        case 0x1cb0a0u: goto label_1cb0a0;
        case 0x1cb0acu: goto label_1cb0ac;
        case 0x1cb0b8u: goto label_1cb0b8;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb0d0u: goto label_1cb0d0;
        case 0x1cb0dcu: goto label_1cb0dc;
        case 0x1cb100u: goto label_1cb100;
        case 0x1cb108u: goto label_1cb108;
        case 0x1cb15cu: goto label_1cb15c;
        case 0x1cb18cu: goto label_1cb18c;
        case 0x1cb1a4u: goto label_1cb1a4;
        case 0x1cb1c0u: goto label_1cb1c0;
        case 0x1cb1d4u: goto label_1cb1d4;
        case 0x1cb1e4u: goto label_1cb1e4;
        case 0x1cb200u: goto label_1cb200;
        case 0x1cb224u: goto label_1cb224;
        default: break;
    }

    ctx->pc = 0x1cb030u;

    // 0x1cb030: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1cb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1cb034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cb034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cb038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cb038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cb03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cb040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb04c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1cb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1cb050: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1CB050u;
    {
        const bool branch_taken_0x1cb050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB050u;
            // 0x1cb054: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb050) {
            ctx->pc = 0x1CB224u;
            goto label_1cb224;
        }
    }
    ctx->pc = 0x1CB058u;
    // 0x1cb058: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1cb05c: 0x18600071  blez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1CB05Cu;
    {
        const bool branch_taken_0x1cb05c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CB060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB05Cu;
            // 0x1cb060: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb05c) {
            ctx->pc = 0x1CB224u;
            goto label_1cb224;
        }
    }
    ctx->pc = 0x1CB064u;
    // 0x1cb064: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1CB064u;
    SET_GPR_U32(ctx, 31, 0x1CB06Cu);
    ctx->pc = 0x1CB068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB064u;
            // 0x1cb068: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB06Cu; }
        if (ctx->pc != 0x1CB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB06Cu; }
        if (ctx->pc != 0x1CB06Cu) { return; }
    }
    ctx->pc = 0x1CB06Cu;
label_1cb06c:
    // 0x1cb06c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1CB06Cu;
    {
        const bool branch_taken_0x1cb06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb06c) {
            ctx->pc = 0x1CB224u;
            goto label_1cb224;
        }
    }
    ctx->pc = 0x1CB074u;
    // 0x1cb074: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x1cb074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cb078: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1CB078u;
    {
        const bool branch_taken_0x1cb078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB078u;
            // 0x1cb07c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb078) {
            ctx->pc = 0x1CB224u;
            goto label_1cb224;
        }
    }
    ctx->pc = 0x1CB080u;
    // 0x1cb080: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CB080u;
    SET_GPR_U32(ctx, 31, 0x1CB088u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB088u; }
        if (ctx->pc != 0x1CB088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB088u; }
        if (ctx->pc != 0x1CB088u) { return; }
    }
    ctx->pc = 0x1CB088u;
label_1cb088:
    // 0x1cb088: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb090: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CB090u;
    SET_GPR_U32(ctx, 31, 0x1CB098u);
    ctx->pc = 0x1CB094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB090u;
            // 0x1cb094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB098u; }
        if (ctx->pc != 0x1CB098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB098u; }
        if (ctx->pc != 0x1CB098u) { return; }
    }
    ctx->pc = 0x1CB098u;
label_1cb098:
    // 0x1cb098: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CB098u;
    SET_GPR_U32(ctx, 31, 0x1CB0A0u);
    ctx->pc = 0x1CB09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB098u;
            // 0x1cb09c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0A0u; }
        if (ctx->pc != 0x1CB0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0A0u; }
        if (ctx->pc != 0x1CB0A0u) { return; }
    }
    ctx->pc = 0x1CB0A0u;
label_1cb0a0:
    // 0x1cb0a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb0a4: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1CB0A4u;
    SET_GPR_U32(ctx, 31, 0x1CB0ACu);
    ctx->pc = 0x1CB0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0A4u;
            // 0x1cb0a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0ACu; }
        if (ctx->pc != 0x1CB0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0ACu; }
        if (ctx->pc != 0x1CB0ACu) { return; }
    }
    ctx->pc = 0x1CB0ACu;
label_1cb0ac:
    // 0x1cb0ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb0b0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CB0B0u;
    SET_GPR_U32(ctx, 31, 0x1CB0B8u);
    ctx->pc = 0x1CB0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0B0u;
            // 0x1cb0b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0B8u; }
        if (ctx->pc != 0x1CB0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0B8u; }
        if (ctx->pc != 0x1CB0B8u) { return; }
    }
    ctx->pc = 0x1CB0B8u;
label_1cb0b8:
    // 0x1cb0b8: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1cb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1cb0bc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1CB0BCu;
    SET_GPR_U32(ctx, 31, 0x1CB0C4u);
    ctx->pc = 0x1CB0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0BCu;
            // 0x1cb0c0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0C4u; }
        if (ctx->pc != 0x1CB0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0C4u; }
        if (ctx->pc != 0x1CB0C4u) { return; }
    }
    ctx->pc = 0x1CB0C4u;
label_1cb0c4:
    // 0x1cb0c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb0c8: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1CB0C8u;
    SET_GPR_U32(ctx, 31, 0x1CB0D0u);
    ctx->pc = 0x1CB0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0C8u;
            // 0x1cb0cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0D0u; }
        if (ctx->pc != 0x1CB0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0D0u; }
        if (ctx->pc != 0x1CB0D0u) { return; }
    }
    ctx->pc = 0x1CB0D0u;
label_1cb0d0:
    // 0x1cb0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0d4: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1CB0D4u;
    SET_GPR_U32(ctx, 31, 0x1CB0DCu);
    ctx->pc = 0x1CB0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0D4u;
            // 0x1cb0d8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0DCu; }
        if (ctx->pc != 0x1CB0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0DCu; }
        if (ctx->pc != 0x1CB0DCu) { return; }
    }
    ctx->pc = 0x1CB0DCu;
label_1cb0dc:
    // 0x1cb0dc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1cb0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb0e4: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1cb0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cb0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cb0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0f0: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x1cb0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x1cb0f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb0f8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1CB0F8u;
    {
        const bool branch_taken_0x1cb0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0F8u;
            // 0x1cb0fc: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0f8) {
            ctx->pc = 0x1CB208u;
            goto label_1cb208;
        }
    }
    ctx->pc = 0x1CB100u;
label_1cb100:
    // 0x1cb100: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1CB100u;
    SET_GPR_U32(ctx, 31, 0x1CB108u);
    ctx->pc = 0x1CB104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB100u;
            // 0x1cb104: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB108u; }
        if (ctx->pc != 0x1CB108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB108u; }
        if (ctx->pc != 0x1CB108u) { return; }
    }
    ctx->pc = 0x1CB108u;
label_1cb108:
    // 0x1cb108: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1CB108u;
    {
        const bool branch_taken_0x1cb108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb108) {
            ctx->pc = 0x1CB200u;
            goto label_1cb200;
        }
    }
    ctx->pc = 0x1CB110u;
    // 0x1cb110: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1cb110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1cb114: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cb118: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cb118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb11c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1cb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb120: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x1cb120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1cb124: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB124u;
    {
        const bool branch_taken_0x1cb124 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CB128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB124u;
            // 0x1cb128: 0x2107f  dsra32      $v0, $v0, 1 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb124) {
            ctx->pc = 0x1CB134u;
            goto label_1cb134;
        }
    }
    ctx->pc = 0x1CB12Cu;
    // 0x1cb12c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb130: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1cb130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1cb134:
    // 0x1cb134: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cb138: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1cb138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1cb13c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1cb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cb140: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1cb140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cb144: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1cb144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1cb148: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1cb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cb14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb150: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1cb150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1cb154: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CB154u;
    SET_GPR_U32(ctx, 31, 0x1CB15Cu);
    ctx->pc = 0x1CB158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB154u;
            // 0x1cb158: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB15Cu; }
        if (ctx->pc != 0x1CB15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB15Cu; }
        if (ctx->pc != 0x1CB15Cu) { return; }
    }
    ctx->pc = 0x1CB15Cu;
label_1cb15c:
    // 0x1cb15c: 0x27b30184  addiu       $s3, $sp, 0x184
    ctx->pc = 0x1cb15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1cb160: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cb164: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1cb164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cb168: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1cb16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb170: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cb174: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1cb174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1cb178: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x1cb178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb17c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1cb17cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb180: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1cb180u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cb184: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CB184u;
    SET_GPR_U32(ctx, 31, 0x1CB18Cu);
    ctx->pc = 0x1CB188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB184u;
            // 0x1cb188: 0x2452ffd0  addiu       $s2, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB18Cu; }
        if (ctx->pc != 0x1CB18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB18Cu; }
        if (ctx->pc != 0x1CB18Cu) { return; }
    }
    ctx->pc = 0x1CB18Cu;
label_1cb18c:
    // 0x1cb18c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cb190: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1cb190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb194: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb198: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x1cb198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1cb19c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CB19Cu;
    SET_GPR_U32(ctx, 31, 0x1CB1A4u);
    ctx->pc = 0x1CB1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB19Cu;
            // 0x1cb1a0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1A4u; }
        if (ctx->pc != 0x1CB1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1A4u; }
        if (ctx->pc != 0x1CB1A4u) { return; }
    }
    ctx->pc = 0x1CB1A4u;
label_1cb1a4:
    // 0x1cb1a4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1cb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1cb1a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb1ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1cb1b0: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1cb1b4: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb1b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1CB1B8u;
    SET_GPR_U32(ctx, 31, 0x1CB1C0u);
    ctx->pc = 0x1CB1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1B8u;
            // 0x1cb1bc: 0x2645004e  addiu       $a1, $s2, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C0u; }
        if (ctx->pc != 0x1CB1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C0u; }
        if (ctx->pc != 0x1CB1C0u) { return; }
    }
    ctx->pc = 0x1CB1C0u;
label_1cb1c0:
    // 0x1cb1c0: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1cb1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cb1c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb1c8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cb1cc: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x1CB1CCu;
    SET_GPR_U32(ctx, 31, 0x1CB1D4u);
    ctx->pc = 0x1CB1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1CCu;
            // 0x1cb1d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1D4u; }
        if (ctx->pc != 0x1CB1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1D4u; }
        if (ctx->pc != 0x1CB1D4u) { return; }
    }
    ctx->pc = 0x1CB1D4u;
label_1cb1d4:
    // 0x1cb1d4: 0x2645005a  addiu       $a1, $s2, 0x5A
    ctx->pc = 0x1cb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 90));
    // 0x1cb1d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb1dc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1CB1DCu;
    SET_GPR_U32(ctx, 31, 0x1CB1E4u);
    ctx->pc = 0x1CB1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1DCu;
            // 0x1cb1e0: 0x240600b3  addiu       $a2, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1E4u; }
        if (ctx->pc != 0x1CB1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1E4u; }
        if (ctx->pc != 0x1CB1E4u) { return; }
    }
    ctx->pc = 0x1CB1E4u;
label_1cb1e4:
    // 0x1cb1e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cb1e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb1ec: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cb1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1f4: 0x24460130  addiu       $a2, $v0, 0x130
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x1cb1f8: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x1CB1F8u;
    SET_GPR_U32(ctx, 31, 0x1CB200u);
    ctx->pc = 0x1CB1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1F8u;
            // 0x1cb1fc: 0x246500e0  addiu       $a1, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB200u; }
        if (ctx->pc != 0x1CB200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB200u; }
        if (ctx->pc != 0x1CB200u) { return; }
    }
    ctx->pc = 0x1CB200u;
label_1cb200:
    // 0x1cb200: 0x2631000e  addiu       $s1, $s1, 0xE
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x1cb204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cb208:
    // 0x1cb208: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x1cb208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1cb20c: 0x24520014  addiu       $s2, $v0, 0x14
    ctx->pc = 0x1cb20cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1cb210: 0x80420014  lb          $v0, 0x14($v0)
    ctx->pc = 0x1cb210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1cb214: 0x1c40ffba  bgtz        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1CB214u;
    {
        const bool branch_taken_0x1cb214 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1CB218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB214u;
            // 0x1cb218: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb214) {
            ctx->pc = 0x1CB100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb100;
        }
    }
    ctx->pc = 0x1CB21Cu;
    // 0x1cb21c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CB21Cu;
    SET_GPR_U32(ctx, 31, 0x1CB224u);
    ctx->pc = 0x1CB220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB21Cu;
            // 0x1cb220: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB224u; }
        if (ctx->pc != 0x1CB224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB224u; }
        if (ctx->pc != 0x1CB224u) { return; }
    }
    ctx->pc = 0x1CB224u;
label_1cb224:
    // 0x1cb224: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cb224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cb228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cb228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb22c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cb22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB23Cu;
            // 0x1cb240: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB244u;
}
