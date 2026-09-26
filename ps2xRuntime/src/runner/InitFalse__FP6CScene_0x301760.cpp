#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitFalse__FP6CScene
// Address: 0x301760 - 0x3018c4
void InitFalse__FP6CScene_0x301760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFalse__FP6CScene_0x301760");
#endif

    switch (ctx->pc) {
        case 0x301760u: goto label_301760;
        case 0x301764u: goto label_301764;
        case 0x301768u: goto label_301768;
        case 0x30176cu: goto label_30176c;
        case 0x301770u: goto label_301770;
        case 0x301774u: goto label_301774;
        case 0x301778u: goto label_301778;
        case 0x30177cu: goto label_30177c;
        case 0x301780u: goto label_301780;
        case 0x301784u: goto label_301784;
        case 0x301788u: goto label_301788;
        case 0x30178cu: goto label_30178c;
        case 0x301790u: goto label_301790;
        case 0x301794u: goto label_301794;
        case 0x301798u: goto label_301798;
        case 0x30179cu: goto label_30179c;
        case 0x3017a0u: goto label_3017a0;
        case 0x3017a4u: goto label_3017a4;
        case 0x3017a8u: goto label_3017a8;
        case 0x3017acu: goto label_3017ac;
        case 0x3017b0u: goto label_3017b0;
        case 0x3017b4u: goto label_3017b4;
        case 0x3017b8u: goto label_3017b8;
        case 0x3017bcu: goto label_3017bc;
        case 0x3017c0u: goto label_3017c0;
        case 0x3017c4u: goto label_3017c4;
        case 0x3017c8u: goto label_3017c8;
        case 0x3017ccu: goto label_3017cc;
        case 0x3017d0u: goto label_3017d0;
        case 0x3017d4u: goto label_3017d4;
        case 0x3017d8u: goto label_3017d8;
        case 0x3017dcu: goto label_3017dc;
        case 0x3017e0u: goto label_3017e0;
        case 0x3017e4u: goto label_3017e4;
        case 0x3017e8u: goto label_3017e8;
        case 0x3017ecu: goto label_3017ec;
        case 0x3017f0u: goto label_3017f0;
        case 0x3017f4u: goto label_3017f4;
        case 0x3017f8u: goto label_3017f8;
        case 0x3017fcu: goto label_3017fc;
        case 0x301800u: goto label_301800;
        case 0x301804u: goto label_301804;
        case 0x301808u: goto label_301808;
        case 0x30180cu: goto label_30180c;
        case 0x301810u: goto label_301810;
        case 0x301814u: goto label_301814;
        case 0x301818u: goto label_301818;
        case 0x30181cu: goto label_30181c;
        case 0x301820u: goto label_301820;
        case 0x301824u: goto label_301824;
        case 0x301828u: goto label_301828;
        case 0x30182cu: goto label_30182c;
        case 0x301830u: goto label_301830;
        case 0x301834u: goto label_301834;
        case 0x301838u: goto label_301838;
        case 0x30183cu: goto label_30183c;
        case 0x301840u: goto label_301840;
        case 0x301844u: goto label_301844;
        case 0x301848u: goto label_301848;
        case 0x30184cu: goto label_30184c;
        case 0x301850u: goto label_301850;
        case 0x301854u: goto label_301854;
        case 0x301858u: goto label_301858;
        case 0x30185cu: goto label_30185c;
        case 0x301860u: goto label_301860;
        case 0x301864u: goto label_301864;
        case 0x301868u: goto label_301868;
        case 0x30186cu: goto label_30186c;
        case 0x301870u: goto label_301870;
        case 0x301874u: goto label_301874;
        case 0x301878u: goto label_301878;
        case 0x30187cu: goto label_30187c;
        case 0x301880u: goto label_301880;
        case 0x301884u: goto label_301884;
        case 0x301888u: goto label_301888;
        case 0x30188cu: goto label_30188c;
        case 0x301890u: goto label_301890;
        case 0x301894u: goto label_301894;
        case 0x301898u: goto label_301898;
        case 0x30189cu: goto label_30189c;
        case 0x3018a0u: goto label_3018a0;
        case 0x3018a4u: goto label_3018a4;
        case 0x3018a8u: goto label_3018a8;
        case 0x3018acu: goto label_3018ac;
        case 0x3018b0u: goto label_3018b0;
        case 0x3018b4u: goto label_3018b4;
        case 0x3018b8u: goto label_3018b8;
        case 0x3018bcu: goto label_3018bc;
        case 0x3018c0u: goto label_3018c0;
        default: break;
    }

    ctx->pc = 0x301760u;

label_301760:
    // 0x301760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x301760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_301764:
    // 0x301764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x301764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_301768:
    // 0x301768: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x301768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30176c:
    // 0x30176c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_301770:
    // 0x301770: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x301770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_301774:
    // 0x301774: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x301774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_301778:
    // 0x301778: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x301778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_30177c:
    // 0x30177c: 0xc0a0ed8  jal         func_283B60
label_301780:
    if (ctx->pc == 0x301780u) {
        ctx->pc = 0x301780u;
            // 0x301780: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301784u;
        goto label_301784;
    }
    ctx->pc = 0x30177Cu;
    SET_GPR_U32(ctx, 31, 0x301784u);
    ctx->pc = 0x301780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30177Cu;
            // 0x301780: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301784u; }
        if (ctx->pc != 0x301784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301784u; }
        if (ctx->pc != 0x301784u) { return; }
    }
    ctx->pc = 0x301784u;
label_301784:
    // 0x301784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301788:
    // 0x301788: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_30178c:
    if (ctx->pc == 0x30178Cu) {
        ctx->pc = 0x30178Cu;
            // 0x30178c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301790u;
        goto label_301790;
    }
    ctx->pc = 0x301788u;
    {
        const bool branch_taken_0x301788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301788u;
            // 0x30178c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301788) {
            ctx->pc = 0x301798u;
            goto label_301798;
        }
    }
    ctx->pc = 0x301790u;
label_301790:
    // 0x301790: 0x10000046  b           . + 4 + (0x46 << 2)
label_301794:
    if (ctx->pc == 0x301794u) {
        ctx->pc = 0x301794u;
            // 0x301794: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x301798u;
        goto label_301798;
    }
    ctx->pc = 0x301790u;
    {
        const bool branch_taken_0x301790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301790u;
            // 0x301794: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301790) {
            ctx->pc = 0x3018ACu;
            goto label_3018ac;
        }
    }
    ctx->pc = 0x301798u;
label_301798:
    // 0x301798: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x301798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_30179c:
    // 0x30179c: 0xc0a0e30  jal         func_2838C0
label_3017a0:
    if (ctx->pc == 0x3017A0u) {
        ctx->pc = 0x3017A0u;
            // 0x3017a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3017A4u;
        goto label_3017a4;
    }
    ctx->pc = 0x30179Cu;
    SET_GPR_U32(ctx, 31, 0x3017A4u);
    ctx->pc = 0x3017A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30179Cu;
            // 0x3017a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017A4u; }
        if (ctx->pc != 0x3017A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017A4u; }
        if (ctx->pc != 0x3017A4u) { return; }
    }
    ctx->pc = 0x3017A4u;
label_3017a4:
    // 0x3017a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3017a8:
    if (ctx->pc == 0x3017A8u) {
        ctx->pc = 0x3017ACu;
        goto label_3017ac;
    }
    ctx->pc = 0x3017A4u;
    {
        const bool branch_taken_0x3017a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3017a4) {
            ctx->pc = 0x3017C8u;
            goto label_3017c8;
        }
    }
    ctx->pc = 0x3017ACu;
label_3017ac:
    // 0x3017ac: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x3017acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3017b0:
    // 0x3017b0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3017b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3017b4:
    // 0x3017b4: 0x320f809  jalr        $t9
label_3017b8:
    if (ctx->pc == 0x3017B8u) {
        ctx->pc = 0x3017B8u;
            // 0x3017b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3017BCu;
        goto label_3017bc;
    }
    ctx->pc = 0x3017B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3017BCu);
        ctx->pc = 0x3017B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3017B4u;
            // 0x3017b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3017BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3017BCu; }
            if (ctx->pc != 0x3017BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3017BCu;
label_3017bc:
    // 0x3017bc: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x3017bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_3017c0:
    // 0x3017c0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3017c4:
    if (ctx->pc == 0x3017C4u) {
        ctx->pc = 0x3017C4u;
            // 0x3017c4: 0x3c02c47a  lui         $v0, 0xC47A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
        ctx->pc = 0x3017C8u;
        goto label_3017c8;
    }
    ctx->pc = 0x3017C0u;
    {
        const bool branch_taken_0x3017c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3017C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3017C0u;
            // 0x3017c4: 0x3c02c47a  lui         $v0, 0xC47A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017c0) {
            ctx->pc = 0x3017D0u;
            goto label_3017d0;
        }
    }
    ctx->pc = 0x3017C8u;
label_3017c8:
    // 0x3017c8: 0x10000037  b           . + 4 + (0x37 << 2)
label_3017cc:
    if (ctx->pc == 0x3017CCu) {
        ctx->pc = 0x3017CCu;
            // 0x3017cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3017D0u;
        goto label_3017d0;
    }
    ctx->pc = 0x3017C8u;
    {
        const bool branch_taken_0x3017c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3017CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3017C8u;
            // 0x3017cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017c8) {
            ctx->pc = 0x3018A8u;
            goto label_3018a8;
        }
    }
    ctx->pc = 0x3017D0u;
label_3017d0:
    // 0x3017d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3017d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3017d4:
    // 0x3017d4: 0xc0c3e94  jal         func_30FA50
label_3017d8:
    if (ctx->pc == 0x3017D8u) {
        ctx->pc = 0x3017DCu;
        goto label_3017dc;
    }
    ctx->pc = 0x3017D4u;
    SET_GPR_U32(ctx, 31, 0x3017DCu);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017DCu; }
        if (ctx->pc != 0x3017DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017DCu; }
        if (ctx->pc != 0x3017DCu) { return; }
    }
    ctx->pc = 0x3017DCu;
label_3017dc:
    // 0x3017dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3017e0:
    // 0x3017e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3017e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3017e4:
    // 0x3017e4: 0xc0c3e94  jal         func_30FA50
label_3017e8:
    if (ctx->pc == 0x3017E8u) {
        ctx->pc = 0x3017ECu;
        goto label_3017ec;
    }
    ctx->pc = 0x3017E4u;
    SET_GPR_U32(ctx, 31, 0x3017ECu);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017ECu; }
        if (ctx->pc != 0x3017ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017ECu; }
        if (ctx->pc != 0x3017ECu) { return; }
    }
    ctx->pc = 0x3017ECu;
label_3017ec:
    // 0x3017ec: 0xc0c4244  jal         func_310910
label_3017f0:
    if (ctx->pc == 0x3017F0u) {
        ctx->pc = 0x3017F4u;
        goto label_3017f4;
    }
    ctx->pc = 0x3017ECu;
    SET_GPR_U32(ctx, 31, 0x3017F4u);
    ctx->pc = 0x310910u;
    if (runtime->hasFunction(0x310910u)) {
        auto targetFn = runtime->lookupFunction(0x310910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017F4u; }
        if (ctx->pc != 0x3017F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetLineVelo__Fv_0x310910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017F4u; }
        if (ctx->pc != 0x3017F4u) { return; }
    }
    ctx->pc = 0x3017F4u;
label_3017f4:
    // 0x3017f4: 0xaf80a0c8  sw          $zero, -0x5F38($gp)
    ctx->pc = 0x3017f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 0));
label_3017f8:
    // 0x3017f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3017f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3017fc:
    // 0x3017fc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3017fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_301800:
    // 0x301800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301804:
    // 0x301804: 0x24a52090  addiu       $a1, $a1, 0x2090
    ctx->pc = 0x301804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
label_301808:
    // 0x301808: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x301808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_30180c:
    // 0x30180c: 0x320f809  jalr        $t9
label_301810:
    if (ctx->pc == 0x301810u) {
        ctx->pc = 0x301810u;
            // 0x301810: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x301814u;
        goto label_301814;
    }
    ctx->pc = 0x30180Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301814u);
        ctx->pc = 0x301810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30180Cu;
            // 0x301810: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301814u; }
            if (ctx->pc != 0x301814u) { return; }
        }
        }
    }
    ctx->pc = 0x301814u;
label_301814:
    // 0x301814: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_301818:
    // 0x301818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30181c:
    // 0x30181c: 0x24a52090  addiu       $a1, $a1, 0x2090
    ctx->pc = 0x30181cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
label_301820:
    // 0x301820: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x301820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_301824:
    // 0x301824: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x301824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_301828:
    // 0x301828: 0xc0bff38  jal         func_2FFCE0
label_30182c:
    if (ctx->pc == 0x30182Cu) {
        ctx->pc = 0x30182Cu;
            // 0x30182c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301830u;
        goto label_301830;
    }
    ctx->pc = 0x301828u;
    SET_GPR_U32(ctx, 31, 0x301830u);
    ctx->pc = 0x30182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301828u;
            // 0x30182c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFCE0u;
    if (runtime->hasFunction(0x2FFCE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301830u; }
        if (ctx->pc != 0x301830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionCount__FP11CCharacter2Pciii_0x2ffce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301830u; }
        if (ctx->pc != 0x301830u) { return; }
    }
    ctx->pc = 0x301830u;
label_301830:
    // 0x301830: 0xc04c3b8  jal         func_130EE0
label_301834:
    if (ctx->pc == 0x301834u) {
        ctx->pc = 0x301834u;
            // 0x301834: 0xaf82a0d0  sw          $v0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 2));
        ctx->pc = 0x301838u;
        goto label_301838;
    }
    ctx->pc = 0x301830u;
    SET_GPR_U32(ctx, 31, 0x301838u);
    ctx->pc = 0x301834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301830u;
            // 0x301834: 0xaf82a0d0  sw          $v0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301838u; }
        if (ctx->pc != 0x301838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301838u; }
        if (ctx->pc != 0x301838u) { return; }
    }
    ctx->pc = 0x301838u;
label_301838:
    // 0x301838: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30183c:
    // 0x30183c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x30183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_301840:
    // 0x301840: 0xc4219cf4  lwc1        $f1, -0x630C($at)
    ctx->pc = 0x301840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301844:
    // 0x301844: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x301844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_301848:
    // 0x301848: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x301848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_30184c:
    // 0x30184c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_301850:
    // 0x301850: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x301850u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_301854:
    // 0x301854: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x301854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_301858:
    // 0x301858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x301858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30185c:
    // 0x30185c: 0x0  nop
    ctx->pc = 0x30185cu;
    // NOP
label_301860:
    // 0x301860: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x301860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_301864:
    // 0x301864: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x301864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_301868:
    // 0x301868: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x301868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_30186c:
    // 0x30186c: 0xc0c3e70  jal         func_30F9C0
label_301870:
    if (ctx->pc == 0x301870u) {
        ctx->pc = 0x301870u;
            // 0x301870: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x301874u;
        goto label_301874;
    }
    ctx->pc = 0x30186Cu;
    SET_GPR_U32(ctx, 31, 0x301874u);
    ctx->pc = 0x301870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30186Cu;
            // 0x301870: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301874u; }
        if (ctx->pc != 0x301874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301874u; }
        if (ctx->pc != 0x301874u) { return; }
    }
    ctx->pc = 0x301874u;
label_301874:
    // 0x301874: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301878:
    // 0x301878: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_30187c:
    if (ctx->pc == 0x30187Cu) {
        ctx->pc = 0x30187Cu;
            // 0x30187c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x301880u;
        goto label_301880;
    }
    ctx->pc = 0x301878u;
    {
        const bool branch_taken_0x301878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301878u;
            // 0x30187c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301878) {
            ctx->pc = 0x30188Cu;
            goto label_30188c;
        }
    }
    ctx->pc = 0x301880u;
label_301880:
    // 0x301880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x301880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301884:
    // 0x301884: 0x0  nop
    ctx->pc = 0x301884u;
    // NOP
label_301888:
    // 0x301888: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x301888u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30188c:
    // 0x30188c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x30188cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301890:
    // 0x301890: 0x0  nop
    ctx->pc = 0x301890u;
    // NOP
label_301894:
    // 0x301894: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_301898:
    if (ctx->pc == 0x301898u) {
        ctx->pc = 0x301898u;
            // 0x301898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30189Cu;
        goto label_30189c;
    }
    ctx->pc = 0x301894u;
    {
        const bool branch_taken_0x301894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301894u;
            // 0x301898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301894) {
            ctx->pc = 0x3018A8u;
            goto label_3018a8;
        }
    }
    ctx->pc = 0x30189Cu;
label_30189c:
    // 0x30189c: 0xc0c05c8  jal         func_301720
label_3018a0:
    if (ctx->pc == 0x3018A0u) {
        ctx->pc = 0x3018A4u;
        goto label_3018a4;
    }
    ctx->pc = 0x30189Cu;
    SET_GPR_U32(ctx, 31, 0x3018A4u);
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3018A4u; }
        if (ctx->pc != 0x3018A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEsa__Fv_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3018A4u; }
        if (ctx->pc != 0x3018A4u) { return; }
    }
    ctx->pc = 0x3018A4u;
label_3018a4:
    // 0x3018a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3018a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3018a8:
    // 0x3018a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3018a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3018ac:
    // 0x3018ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3018acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3018b0:
    // 0x3018b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3018b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3018b4:
    // 0x3018b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3018b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3018b8:
    // 0x3018b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3018b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3018bc:
    // 0x3018bc: 0x3e00008  jr          $ra
label_3018c0:
    if (ctx->pc == 0x3018C0u) {
        ctx->pc = 0x3018C0u;
            // 0x3018c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3018C4u;
        goto label_fallthrough_0x3018bc;
    }
    ctx->pc = 0x3018BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3018C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3018BCu;
            // 0x3018c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3018bc:
    ctx->pc = 0x3018C4u;
}
