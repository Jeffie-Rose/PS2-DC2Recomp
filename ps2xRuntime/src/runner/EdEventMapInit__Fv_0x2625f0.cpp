#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventMapInit__Fv
// Address: 0x2625f0 - 0x262868
void EdEventMapInit__Fv_0x2625f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventMapInit__Fv_0x2625f0");
#endif

    switch (ctx->pc) {
        case 0x262600u: goto label_262600;
        case 0x262614u: goto label_262614;
        case 0x262624u: goto label_262624;
        case 0x262660u: goto label_262660;
        case 0x262668u: goto label_262668;
        case 0x26267cu: goto label_26267c;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626e8u: goto label_2626e8;
        case 0x2626fcu: goto label_2626fc;
        case 0x262724u: goto label_262724;
        case 0x26272cu: goto label_26272c;
        case 0x262734u: goto label_262734;
        default: break;
    }

    ctx->pc = 0x2625f0u;

    // 0x2625f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2625f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2625f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2625f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2625f8: 0xc0659dc  jal         func_196770
    ctx->pc = 0x2625F8u;
    SET_GPR_U32(ctx, 31, 0x262600u);
    ctx->pc = 0x2625FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2625F8u;
            // 0x2625fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262600u; }
        if (ctx->pc != 0x262600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262600u; }
        if (ctx->pc != 0x262600u) { return; }
    }
    ctx->pc = 0x262600u;
label_262600:
    // 0x262600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262600u;
    {
        const bool branch_taken_0x262600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262600u;
            // 0x262604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262600) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x262608u;
    // 0x262608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x262608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26260c: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x26260Cu;
    SET_GPR_U32(ctx, 31, 0x262614u);
    ctx->pc = 0x262610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26260Cu;
            // 0x262610: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262614u; }
        if (ctx->pc != 0x262614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262614u; }
        if (ctx->pc != 0x262614u) { return; }
    }
    ctx->pc = 0x262614u;
label_262614:
    // 0x262614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x262614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262618:
    // 0x262618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26261c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x26261cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x262620: 0x2463eec0  addiu       $v1, $v1, -0x1140
    ctx->pc = 0x262620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962880));
label_262624:
    // 0x262624: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x262628: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x262628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26262c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x26262cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x262630: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x262630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x262634: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x262634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x262638: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x26263c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x26263cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x262640: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x262640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x262644: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x262644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x262648: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x262648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x26264c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x26264cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x262650: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x262650u;
    {
        const bool branch_taken_0x262650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262650u;
            // 0x262654: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262650) {
            ctx->pc = 0x262624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262624;
        }
    }
    ctx->pc = 0x262658u;
    // 0x262658: 0xc098468  jal         func_2611A0
    ctx->pc = 0x262658u;
    SET_GPR_U32(ctx, 31, 0x262660u);
    ctx->pc = 0x2611A0u;
    if (runtime->hasFunction(0x2611A0u)) {
        auto targetFn = runtime->lookupFunction(0x2611A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262660u; }
        if (ctx->pc != 0x262660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLocalCnt__Fv_0x2611a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262660u; }
        if (ctx->pc != 0x262660u) { return; }
    }
    ctx->pc = 0x262660u;
label_262660:
    // 0x262660: 0xc0659e0  jal         func_196780
    ctx->pc = 0x262660u;
    SET_GPR_U32(ctx, 31, 0x262668u);
    ctx->pc = 0x262664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262660u;
            // 0x262664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262668u; }
        if (ctx->pc != 0x262668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262668u; }
        if (ctx->pc != 0x262668u) { return; }
    }
    ctx->pc = 0x262668u;
label_262668:
    // 0x262668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26266c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x26266Cu;
    {
        const bool branch_taken_0x26266c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x262670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26266Cu;
            // 0x262670: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26266c) {
            ctx->pc = 0x2626A0u;
            goto label_2626a0;
        }
    }
    ctx->pc = 0x262674u;
    // 0x262674: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x262674u;
    SET_GPR_U32(ctx, 31, 0x26267Cu);
    ctx->pc = 0x262678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262674u;
            // 0x262678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26267Cu; }
        if (ctx->pc != 0x26267Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26267Cu; }
        if (ctx->pc != 0x26267Cu) { return; }
    }
    ctx->pc = 0x26267Cu;
label_26267c:
    // 0x26267c: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x26267cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x262680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262684: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x262684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x262688: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x262688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x26268c: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x26268cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x262690: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x262690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x262694: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x262694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x262698: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x262698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x26269c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26269cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2626a0:
    // 0x2626a0: 0xc0659e0  jal         func_196780
    ctx->pc = 0x2626A0u;
    SET_GPR_U32(ctx, 31, 0x2626A8u);
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626A8u; }
        if (ctx->pc != 0x2626A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626A8u; }
        if (ctx->pc != 0x2626A8u) { return; }
    }
    ctx->pc = 0x2626A8u;
label_2626a8:
    // 0x2626a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2626a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626ac: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2626ACu;
    {
        const bool branch_taken_0x2626ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2626ACu;
            // 0x2626b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626ac) {
            ctx->pc = 0x2626E0u;
            goto label_2626e0;
        }
    }
    ctx->pc = 0x2626B4u;
    // 0x2626b4: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x2626B4u;
    SET_GPR_U32(ctx, 31, 0x2626BCu);
    ctx->pc = 0x2626B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2626B4u;
            // 0x2626b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626BCu; }
        if (ctx->pc != 0x2626BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626BCu; }
        if (ctx->pc != 0x2626BCu) { return; }
    }
    ctx->pc = 0x2626BCu;
label_2626bc:
    // 0x2626bc: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2626bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x2626c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2626c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2626c4: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x2626c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x2626c8: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x2626c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x2626cc: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2626ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x2626d0: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2626d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x2626d4: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x2626d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x2626d8: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x2626d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x2626dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2626dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2626e0:
    // 0x2626e0: 0xc0659e0  jal         func_196780
    ctx->pc = 0x2626E0u;
    SET_GPR_U32(ctx, 31, 0x2626E8u);
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626E8u; }
        if (ctx->pc != 0x2626E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626E8u; }
        if (ctx->pc != 0x2626E8u) { return; }
    }
    ctx->pc = 0x2626E8u;
label_2626e8:
    // 0x2626e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2626e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626ec: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2626ECu;
    {
        const bool branch_taken_0x2626ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2626ECu;
            // 0x2626f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626ec) {
            ctx->pc = 0x26271Cu;
            goto label_26271c;
        }
    }
    ctx->pc = 0x2626F4u;
    // 0x2626f4: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x2626F4u;
    SET_GPR_U32(ctx, 31, 0x2626FCu);
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626FCu; }
        if (ctx->pc != 0x2626FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2626FCu; }
        if (ctx->pc != 0x2626FCu) { return; }
    }
    ctx->pc = 0x2626FCu;
label_2626fc:
    // 0x2626fc: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2626fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x262700: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262704: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x262704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x262708: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x262708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x26270c: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x26270cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x262710: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x262710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x262714: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x262714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x262718: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x262718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_26271c:
    // 0x26271c: 0xc098968  jal         func_2625A0
    ctx->pc = 0x26271Cu;
    SET_GPR_U32(ctx, 31, 0x262724u);
    ctx->pc = 0x2625A0u;
    if (runtime->hasFunction(0x2625A0u)) {
        auto targetFn = runtime->lookupFunction(0x2625A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262724u; }
        if (ctx->pc != 0x262724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMesFileBuffAll__Fv_0x2625a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262724u; }
        if (ctx->pc != 0x262724u) { return; }
    }
    ctx->pc = 0x262724u;
label_262724:
    // 0x262724: 0xc098964  jal         func_262590
    ctx->pc = 0x262724u;
    SET_GPR_U32(ctx, 31, 0x26272Cu);
    ctx->pc = 0x262590u;
    if (runtime->hasFunction(0x262590u)) {
        auto targetFn = runtime->lookupFunction(0x262590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26272Cu; }
        if (ctx->pc != 0x26272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdSetBrokenObject__Fv_0x262590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26272Cu; }
        if (ctx->pc != 0x26272Cu) { return; }
    }
    ctx->pc = 0x26272Cu;
label_26272c:
    // 0x26272c: 0xc0ba558  jal         func_2E9560
    ctx->pc = 0x26272Cu;
    SET_GPR_U32(ctx, 31, 0x262734u);
    ctx->pc = 0x2E9560u;
    if (runtime->hasFunction(0x2E9560u)) {
        auto targetFn = runtime->lookupFunction(0x2E9560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262734u; }
        if (ctx->pc != 0x262734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSphida__Fv_0x2e9560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262734u; }
        if (ctx->pc != 0x262734u) { return; }
    }
    ctx->pc = 0x262734u;
label_262734:
    // 0x262734: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262738: 0x3c0301ee  lui         $v1, 0x1EE
    ctx->pc = 0x262738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)494 << 16));
    // 0x26273c: 0xac2000d8  sw          $zero, 0xD8($at)
    ctx->pc = 0x26273cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 216), GPR_U32(ctx, 0));
    // 0x262740: 0x24639cb0  addiu       $v1, $v1, -0x6350
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941872));
    // 0x262744: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262748: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26274c: 0xac2300d0  sw          $v1, 0xD0($at)
    ctx->pc = 0x26274cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 208), GPR_U32(ctx, 3));
    // 0x262750: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262754: 0x3c0301ee  lui         $v1, 0x1EE
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)494 << 16));
    // 0x262758: 0xac2400dc  sw          $a0, 0xDC($at)
    ctx->pc = 0x262758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 220), GPR_U32(ctx, 4));
    // 0x26275c: 0x2463b0b0  addiu       $v1, $v1, -0x4F50
    ctx->pc = 0x26275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946992));
    // 0x262760: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262764: 0xaf8097e8  sw          $zero, -0x6818($gp)
    ctx->pc = 0x262764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940648), GPR_U32(ctx, 0));
    // 0x262768: 0xac230130  sw          $v1, 0x130($at)
    ctx->pc = 0x262768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 304), GPR_U32(ctx, 3));
    // 0x26276c: 0x3c0301ee  lui         $v1, 0x1EE
    ctx->pc = 0x26276cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)494 << 16));
    // 0x262770: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262774: 0x2463c4b0  addiu       $v1, $v1, -0x3B50
    ctx->pc = 0x262774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952112));
    // 0x262778: 0xaf8097ec  sw          $zero, -0x6814($gp)
    ctx->pc = 0x262778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940652), GPR_U32(ctx, 0));
    // 0x26277c: 0xac230190  sw          $v1, 0x190($at)
    ctx->pc = 0x26277cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 400), GPR_U32(ctx, 3));
    // 0x262780: 0x3c0301ee  lui         $v1, 0x1EE
    ctx->pc = 0x262780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)494 << 16));
    // 0x262784: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262788: 0x2463d8b0  addiu       $v1, $v1, -0x2750
    ctx->pc = 0x262788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
    // 0x26278c: 0xac2301f0  sw          $v1, 0x1F0($at)
    ctx->pc = 0x26278cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 496), GPR_U32(ctx, 3));
    // 0x262790: 0x3c0301ee  lui         $v1, 0x1EE
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)494 << 16));
    // 0x262794: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262798: 0x2463ecb0  addiu       $v1, $v1, -0x1350
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962352));
    // 0x26279c: 0xac230250  sw          $v1, 0x250($at)
    ctx->pc = 0x26279cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 592), GPR_U32(ctx, 3));
    // 0x2627a0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627a4: 0xac2000d4  sw          $zero, 0xD4($at)
    ctx->pc = 0x2627a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 212), GPR_U32(ctx, 0));
    // 0x2627a8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627ac: 0xac2000f4  sw          $zero, 0xF4($at)
    ctx->pc = 0x2627acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 244), GPR_U32(ctx, 0));
    // 0x2627b0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627b4: 0xac24013c  sw          $a0, 0x13C($at)
    ctx->pc = 0x2627b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 316), GPR_U32(ctx, 4));
    // 0x2627b8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627bc: 0xac200138  sw          $zero, 0x138($at)
    ctx->pc = 0x2627bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 312), GPR_U32(ctx, 0));
    // 0x2627c0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627c4: 0xac200134  sw          $zero, 0x134($at)
    ctx->pc = 0x2627c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 308), GPR_U32(ctx, 0));
    // 0x2627c8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627cc: 0xac200154  sw          $zero, 0x154($at)
    ctx->pc = 0x2627ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 340), GPR_U32(ctx, 0));
    // 0x2627d0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627d4: 0xac24019c  sw          $a0, 0x19C($at)
    ctx->pc = 0x2627d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 412), GPR_U32(ctx, 4));
    // 0x2627d8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627dc: 0xac200198  sw          $zero, 0x198($at)
    ctx->pc = 0x2627dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 408), GPR_U32(ctx, 0));
    // 0x2627e0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627e4: 0xac200194  sw          $zero, 0x194($at)
    ctx->pc = 0x2627e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 404), GPR_U32(ctx, 0));
    // 0x2627e8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627ec: 0xac2001b4  sw          $zero, 0x1B4($at)
    ctx->pc = 0x2627ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 436), GPR_U32(ctx, 0));
    // 0x2627f0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627f4: 0xac2401fc  sw          $a0, 0x1FC($at)
    ctx->pc = 0x2627f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 508), GPR_U32(ctx, 4));
    // 0x2627f8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2627f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2627fc: 0xac24025c  sw          $a0, 0x25C($at)
    ctx->pc = 0x2627fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 604), GPR_U32(ctx, 4));
    // 0x262800: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262804: 0xac2001f8  sw          $zero, 0x1F8($at)
    ctx->pc = 0x262804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 504), GPR_U32(ctx, 0));
    // 0x262808: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26280c: 0xac2001f4  sw          $zero, 0x1F4($at)
    ctx->pc = 0x26280cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 500), GPR_U32(ctx, 0));
    // 0x262810: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262814: 0xac200214  sw          $zero, 0x214($at)
    ctx->pc = 0x262814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 532), GPR_U32(ctx, 0));
    // 0x262818: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26281c: 0xac200258  sw          $zero, 0x258($at)
    ctx->pc = 0x26281cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 600), GPR_U32(ctx, 0));
    // 0x262820: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262824: 0xac200254  sw          $zero, 0x254($at)
    ctx->pc = 0x262824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 596), GPR_U32(ctx, 0));
    // 0x262828: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26282c: 0xac200274  sw          $zero, 0x274($at)
    ctx->pc = 0x26282cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 628), GPR_U32(ctx, 0));
    // 0x262830: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262834: 0xfc20e600  sd          $zero, -0x1A00($at)
    ctx->pc = 0x262834u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294960640), GPR_U64(ctx, 0));
    // 0x262838: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26283c: 0xfc20e608  sd          $zero, -0x19F8($at)
    ctx->pc = 0x26283cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294960648), GPR_U64(ctx, 0));
    // 0x262840: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262844: 0xac20e610  sw          $zero, -0x19F0($at)
    ctx->pc = 0x262844u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960656), GPR_U32(ctx, 0));
    // 0x262848: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26284c: 0xac20e614  sw          $zero, -0x19EC($at)
    ctx->pc = 0x26284cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960660), GPR_U32(ctx, 0));
    // 0x262850: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262854: 0xac20e618  sw          $zero, -0x19E8($at)
    ctx->pc = 0x262854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960664), GPR_U32(ctx, 0));
    // 0x262858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26285c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26285cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262860: 0x3e00008  jr          $ra
    ctx->pc = 0x262860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262860u;
            // 0x262864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262868u;
}
