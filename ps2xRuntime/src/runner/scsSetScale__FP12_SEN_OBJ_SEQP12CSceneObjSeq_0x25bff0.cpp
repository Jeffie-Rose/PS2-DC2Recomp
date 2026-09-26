#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetScale__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bff0 - 0x25c0ec
void scsSetScale__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetScale__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bff0");
#endif

    switch (ctx->pc) {
        case 0x25c034u: goto label_25c034;
        case 0x25c05cu: goto label_25c05c;
        case 0x25c06cu: goto label_25c06c;
        case 0x25c080u: goto label_25c080;
        case 0x25c09cu: goto label_25c09c;
        case 0x25c0acu: goto label_25c0ac;
        case 0x25c0c8u: goto label_25c0c8;
        default: break;
    }

    ctx->pc = 0x25bff0u;

    // 0x25bff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25bff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25bff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25bffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25bffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c004: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25c008: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x25c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x25c00c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25c00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25c010: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25C010u;
    {
        const bool branch_taken_0x25c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C010u;
            // 0x25c014: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c010) {
            ctx->pc = 0x25C040u;
            goto label_25c040;
        }
    }
    ctx->pc = 0x25C018u;
    // 0x25c018: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25c018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25c01c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x25c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c020: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x25c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c024: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25c028: 0xc62e0018  lwc1        $f14, 0x18($s1)
    ctx->pc = 0x25c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25c02c: 0xc097a0c  jal         func_25E830
    ctx->pc = 0x25C02Cu;
    SET_GPR_U32(ctx, 31, 0x25C034u);
    ctx->pc = 0x25C030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C02Cu;
            // 0x25c030: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E830u;
    if (runtime->hasFunction(0x25E830u)) {
        auto targetFn = runtime->lookupFunction(0x25E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C034u; }
        if (ctx->pc != 0x25C034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__10CEohMotherFifff_0x25e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C034u; }
        if (ctx->pc != 0x25C034u) { return; }
    }
    ctx->pc = 0x25C034u;
label_25c034:
    // 0x25c034: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x25c034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x25c038: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x25C038u;
    {
        const bool branch_taken_0x25c038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C038u;
            // 0x25c03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c038) {
            ctx->pc = 0x25C0D8u;
            goto label_25c0d8;
        }
    }
    ctx->pc = 0x25C040u;
label_25c040:
    // 0x25c040: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25C040u;
    {
        const bool branch_taken_0x25c040 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x25c040) {
            ctx->pc = 0x25C088u;
            goto label_25c088;
        }
    }
    ctx->pc = 0x25C048u;
    // 0x25c048: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25c048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25c04c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25c050: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25c054: 0xc097a5c  jal         func_25E970
    ctx->pc = 0x25C054u;
    SET_GPR_U32(ctx, 31, 0x25C05Cu);
    ctx->pc = 0x25C058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C054u;
            // 0x25c058: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E970u;
    if (runtime->hasFunction(0x25E970u)) {
        auto targetFn = runtime->lookupFunction(0x25E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C05Cu; }
        if (ctx->pc != 0x25C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScale__10CEohMotherFiPf_0x25e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C05Cu; }
        if (ctx->pc != 0x25C05Cu) { return; }
    }
    ctx->pc = 0x25C05Cu;
label_25c05c:
    // 0x25c05c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25c060: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25c060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25c064: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25C064u;
    SET_GPR_U32(ctx, 31, 0x25C06Cu);
    ctx->pc = 0x25C068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C064u;
            // 0x25c068: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C06Cu; }
        if (ctx->pc != 0x25C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C06Cu; }
        if (ctx->pc != 0x25C06Cu) { return; }
    }
    ctx->pc = 0x25C06Cu;
label_25c06c:
    // 0x25c06c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x25c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c070: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x25c070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x25c074: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25c078: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25C078u;
    SET_GPR_U32(ctx, 31, 0x25C080u);
    ctx->pc = 0x25C07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C078u;
            // 0x25c07c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C080u; }
        if (ctx->pc != 0x25C080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C080u; }
        if (ctx->pc != 0x25C080u) { return; }
    }
    ctx->pc = 0x25C080u;
label_25c080:
    // 0x25c080: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25C080u;
    {
        const bool branch_taken_0x25c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C080u;
            // 0x25c084: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c080) {
            ctx->pc = 0x25C0CCu;
            goto label_25c0cc;
        }
    }
    ctx->pc = 0x25C088u;
label_25c088:
    // 0x25c088: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25c088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25c08c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25c090: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25c094: 0xc097a5c  jal         func_25E970
    ctx->pc = 0x25C094u;
    SET_GPR_U32(ctx, 31, 0x25C09Cu);
    ctx->pc = 0x25C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C094u;
            // 0x25c098: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E970u;
    if (runtime->hasFunction(0x25E970u)) {
        auto targetFn = runtime->lookupFunction(0x25E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C09Cu; }
        if (ctx->pc != 0x25C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScale__10CEohMotherFiPf_0x25e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C09Cu; }
        if (ctx->pc != 0x25C09Cu) { return; }
    }
    ctx->pc = 0x25C09Cu;
label_25c09c:
    // 0x25c09c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25c0a0: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x25c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x25c0a4: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25C0A4u;
    SET_GPR_U32(ctx, 31, 0x25C0ACu);
    ctx->pc = 0x25C0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C0A4u;
            // 0x25c0a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C0ACu; }
        if (ctx->pc != 0x25C0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C0ACu; }
        if (ctx->pc != 0x25C0ACu) { return; }
    }
    ctx->pc = 0x25C0ACu;
label_25c0ac:
    // 0x25c0ac: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25c0b0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x25c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c0b4: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x25c0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c0b8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25c0bc: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x25c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25c0c0: 0xc097a0c  jal         func_25E830
    ctx->pc = 0x25C0C0u;
    SET_GPR_U32(ctx, 31, 0x25C0C8u);
    ctx->pc = 0x25C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C0C0u;
            // 0x25c0c4: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E830u;
    if (runtime->hasFunction(0x25E830u)) {
        auto targetFn = runtime->lookupFunction(0x25E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C0C8u; }
        if (ctx->pc != 0x25C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__10CEohMotherFifff_0x25e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C0C8u; }
        if (ctx->pc != 0x25C0C8u) { return; }
    }
    ctx->pc = 0x25C0C8u;
label_25c0c8:
    // 0x25c0c8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x25c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_25c0cc:
    // 0x25c0cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c0d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25c0d4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x25c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_25c0d8:
    // 0x25c0d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C0E4u;
            // 0x25c0e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C0ECu;
}
