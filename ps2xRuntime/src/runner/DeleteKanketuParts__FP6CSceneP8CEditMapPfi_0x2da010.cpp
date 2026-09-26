#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteKanketuParts__FP6CSceneP8CEditMapPfi
// Address: 0x2da010 - 0x2da2d8
void DeleteKanketuParts__FP6CSceneP8CEditMapPfi_0x2da010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteKanketuParts__FP6CSceneP8CEditMapPfi_0x2da010");
#endif

    switch (ctx->pc) {
        case 0x2da044u: goto label_2da044;
        case 0x2da05cu: goto label_2da05c;
        case 0x2da080u: goto label_2da080;
        case 0x2da094u: goto label_2da094;
        case 0x2da0a4u: goto label_2da0a4;
        case 0x2da0b0u: goto label_2da0b0;
        case 0x2da0f4u: goto label_2da0f4;
        case 0x2da108u: goto label_2da108;
        case 0x2da11cu: goto label_2da11c;
        case 0x2da15cu: goto label_2da15c;
        case 0x2da170u: goto label_2da170;
        case 0x2da184u: goto label_2da184;
        case 0x2da1dcu: goto label_2da1dc;
        case 0x2da1f0u: goto label_2da1f0;
        case 0x2da204u: goto label_2da204;
        case 0x2da258u: goto label_2da258;
        case 0x2da26cu: goto label_2da26c;
        case 0x2da280u: goto label_2da280;
        case 0x2da290u: goto label_2da290;
        case 0x2da2a0u: goto label_2da2a0;
        default: break;
    }

    ctx->pc = 0x2da010u;

    // 0x2da010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2da010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2da014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2da014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2da018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2da018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2da01c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da020: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2da020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da028: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2da028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2da030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da034: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2da034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2da038: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2da038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da03c: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2DA03Cu;
    SET_GPR_U32(ctx, 31, 0x2DA044u);
    ctx->pc = 0x2DA040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA03Cu;
            // 0x2da040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA044u; }
        if (ctx->pc != 0x2DA044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA044u; }
        if (ctx->pc != 0x2DA044u) { return; }
    }
    ctx->pc = 0x2DA044u;
label_2da044:
    // 0x2da044: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA044u;
    {
        const bool branch_taken_0x2da044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA044u;
            // 0x2da048: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da044) {
            ctx->pc = 0x2DA054u;
            goto label_2da054;
        }
    }
    ctx->pc = 0x2DA04Cu;
    // 0x2da04c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2DA04Cu;
    {
        const bool branch_taken_0x2da04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA04Cu;
            // 0x2da050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da04c) {
            ctx->pc = 0x2DA2BCu;
            goto label_2da2bc;
        }
    }
    ctx->pc = 0x2DA054u;
label_2da054:
    // 0x2da054: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2DA054u;
    SET_GPR_U32(ctx, 31, 0x2DA05Cu);
    ctx->pc = 0x2DA058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA054u;
            // 0x2da058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA05Cu; }
        if (ctx->pc != 0x2DA05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA05Cu; }
        if (ctx->pc != 0x2DA05Cu) { return; }
    }
    ctx->pc = 0x2DA05Cu;
label_2da05c:
    // 0x2da05c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2da05cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2da060: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da064: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x2da068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da070: 0x24c688f0  addiu       $a2, $a2, -0x7710
    ctx->pc = 0x2da070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936816));
    // 0x2da074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da078: 0xc06c628  jal         func_1B18A0
    ctx->pc = 0x2DA078u;
    SET_GPR_U32(ctx, 31, 0x2DA080u);
    ctx->pc = 0x2DA07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA078u;
            // 0x2da07c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B18A0u;
    if (runtime->hasFunction(0x1B18A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B18A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA080u; }
        if (ctx->pc != 0x2DA080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo_0x1b18a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA080u; }
        if (ctx->pc != 0x2DA080u) { return; }
    }
    ctx->pc = 0x2DA080u;
label_2da080:
    // 0x2da080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da084: 0x1200008c  beqz        $s0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2DA084u;
    {
        const bool branch_taken_0x2da084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA084u;
            // 0x2da088: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da084) {
            ctx->pc = 0x2DA2B8u;
            goto label_2da2b8;
        }
    }
    ctx->pc = 0x2DA08Cu;
    // 0x2da08c: 0xc064218  jal         func_190860
    ctx->pc = 0x2DA08Cu;
    SET_GPR_U32(ctx, 31, 0x2DA094u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA094u; }
        if (ctx->pc != 0x2DA094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA094u; }
        if (ctx->pc != 0x2DA094u) { return; }
    }
    ctx->pc = 0x2DA094u;
label_2da094:
    // 0x2da094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da098: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2da098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2da09c: 0xc063818  jal         func_18E060
    ctx->pc = 0x2DA09Cu;
    SET_GPR_U32(ctx, 31, 0x2DA0A4u);
    ctx->pc = 0x2DA0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA09Cu;
            // 0x2da0a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0A4u; }
        if (ctx->pc != 0x2DA0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0A4u; }
        if (ctx->pc != 0x2DA0A4u) { return; }
    }
    ctx->pc = 0x2DA0A4u;
label_2da0a4:
    // 0x2da0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0a8: 0xc0a1150  jal         func_284540
    ctx->pc = 0x2DA0A8u;
    SET_GPR_U32(ctx, 31, 0x2DA0B0u);
    ctx->pc = 0x2DA0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA0A8u;
            // 0x2da0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0B0u; }
        if (ctx->pc != 0x2DA0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0B0u; }
        if (ctx->pc != 0x2DA0B0u) { return; }
    }
    ctx->pc = 0x2DA0B0u;
label_2da0b0:
    // 0x2da0b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0b4: 0x12200072  beqz        $s1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2DA0B4u;
    {
        const bool branch_taken_0x2da0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA0B4u;
            // 0x2da0b8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0b4) {
            ctx->pc = 0x2DA280u;
            goto label_2da280;
        }
    }
    ctx->pc = 0x2DA0BCu;
    // 0x2da0bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2da0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2da0c0: 0x24427130  addiu       $v0, $v0, 0x7130
    ctx->pc = 0x2da0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28976));
    // 0x2da0c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da0c8: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2da0c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da0cc: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da0d0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2da0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0d8: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x2da0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    // 0x2da0dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2da0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0e0: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x2da0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x2da0e4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da0e8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2da0e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da0ec: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2DA0ECu;
    SET_GPR_U32(ctx, 31, 0x2DA0F4u);
    ctx->pc = 0x2DA0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA0ECu;
            // 0x2da0f0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0F4u; }
        if (ctx->pc != 0x2DA0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0F4u; }
        if (ctx->pc != 0x2DA0F4u) { return; }
    }
    ctx->pc = 0x2DA0F4u;
label_2da0f4:
    // 0x2da0f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2da0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da100: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2DA100u;
    SET_GPR_U32(ctx, 31, 0x2DA108u);
    ctx->pc = 0x2DA104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA100u;
            // 0x2da104: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA108u; }
        if (ctx->pc != 0x2DA108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA108u; }
        if (ctx->pc != 0x2DA108u) { return; }
    }
    ctx->pc = 0x2DA108u;
label_2da108:
    // 0x2da108: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da110: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2da110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da114: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2DA114u;
    SET_GPR_U32(ctx, 31, 0x2DA11Cu);
    ctx->pc = 0x2DA118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA114u;
            // 0x2da118: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA11Cu; }
        if (ctx->pc != 0x2DA11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA11Cu; }
        if (ctx->pc != 0x2DA11Cu) { return; }
    }
    ctx->pc = 0x2DA11Cu;
label_2da11c:
    // 0x2da11c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da120: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2da124: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2da124u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da128: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2da128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da12c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da134: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x2da134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    // 0x2da138: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2da138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da13c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2da13cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x2da140: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2da144: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2da144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da14c: 0x0  nop
    ctx->pc = 0x2da14cu;
    // NOP
    // 0x2da150: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da154: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2DA154u;
    SET_GPR_U32(ctx, 31, 0x2DA15Cu);
    ctx->pc = 0x2DA158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA154u;
            // 0x2da158: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA15Cu; }
        if (ctx->pc != 0x2DA15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA15Cu; }
        if (ctx->pc != 0x2DA15Cu) { return; }
    }
    ctx->pc = 0x2DA15Cu;
label_2da15c:
    // 0x2da15c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da164: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2da164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da168: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2DA168u;
    SET_GPR_U32(ctx, 31, 0x2DA170u);
    ctx->pc = 0x2DA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA168u;
            // 0x2da16c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA170u; }
        if (ctx->pc != 0x2DA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA170u; }
        if (ctx->pc != 0x2DA170u) { return; }
    }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da178: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2da178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da17c: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2DA17Cu;
    SET_GPR_U32(ctx, 31, 0x2DA184u);
    ctx->pc = 0x2DA180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA17Cu;
            // 0x2da180: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA184u; }
        if (ctx->pc != 0x2DA184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA184u; }
        if (ctx->pc != 0x2DA184u) { return; }
    }
    ctx->pc = 0x2DA184u;
label_2da184:
    // 0x2da184: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2da184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da188: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2da188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2da18c: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2da18cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da190: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2da190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da194: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da198: 0x27b20078  addiu       $s2, $sp, 0x78
    ctx->pc = 0x2da198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2da19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1a0: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x2da1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    // 0x2da1a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2da1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1a8: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2da1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x2da1ac: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2da1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2da1b0: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2da1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da1b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da1b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2da1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da1c0: 0x0  nop
    ctx->pc = 0x2da1c0u;
    // NOP
    // 0x2da1c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2da1c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2da1c8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2da1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2da1cc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2da1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da1d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da1d4: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2DA1D4u;
    SET_GPR_U32(ctx, 31, 0x2DA1DCu);
    ctx->pc = 0x2DA1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA1D4u;
            // 0x2da1d8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA1DCu; }
        if (ctx->pc != 0x2DA1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA1DCu; }
        if (ctx->pc != 0x2DA1DCu) { return; }
    }
    ctx->pc = 0x2DA1DCu;
label_2da1dc:
    // 0x2da1dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1e4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2da1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da1e8: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2DA1E8u;
    SET_GPR_U32(ctx, 31, 0x2DA1F0u);
    ctx->pc = 0x2DA1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA1E8u;
            // 0x2da1ec: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA1F0u; }
        if (ctx->pc != 0x2DA1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA1F0u; }
        if (ctx->pc != 0x2DA1F0u) { return; }
    }
    ctx->pc = 0x2DA1F0u;
label_2da1f0:
    // 0x2da1f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2da1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da1fc: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2DA1FCu;
    SET_GPR_U32(ctx, 31, 0x2DA204u);
    ctx->pc = 0x2DA200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA1FCu;
            // 0x2da200: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA204u; }
        if (ctx->pc != 0x2DA204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA204u; }
        if (ctx->pc != 0x2DA204u) { return; }
    }
    ctx->pc = 0x2DA204u;
label_2da204:
    // 0x2da204: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2da204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da208: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2da208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2da20c: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2da20cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da210: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2da210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da214: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da21c: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x2da21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    // 0x2da220: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2da220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da224: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2da224u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x2da228: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x2da228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x2da22c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2da22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da234: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2da234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2da238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da23c: 0x0  nop
    ctx->pc = 0x2da23cu;
    // NOP
    // 0x2da240: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2da240u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2da244: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2da244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2da248: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2da248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da24c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da24cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da250: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2DA250u;
    SET_GPR_U32(ctx, 31, 0x2DA258u);
    ctx->pc = 0x2DA254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA250u;
            // 0x2da254: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA258u; }
        if (ctx->pc != 0x2DA258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA258u; }
        if (ctx->pc != 0x2DA258u) { return; }
    }
    ctx->pc = 0x2DA258u;
label_2da258:
    // 0x2da258: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da260: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2da260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2da264: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2DA264u;
    SET_GPR_U32(ctx, 31, 0x2DA26Cu);
    ctx->pc = 0x2DA268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA264u;
            // 0x2da268: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA26Cu; }
        if (ctx->pc != 0x2DA26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA26Cu; }
        if (ctx->pc != 0x2DA26Cu) { return; }
    }
    ctx->pc = 0x2DA26Cu;
label_2da26c:
    // 0x2da26c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2da26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da274: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2da274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da278: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2DA278u;
    SET_GPR_U32(ctx, 31, 0x2DA280u);
    ctx->pc = 0x2DA27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA278u;
            // 0x2da27c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA280u; }
        if (ctx->pc != 0x2DA280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA280u; }
        if (ctx->pc != 0x2DA280u) { return; }
    }
    ctx->pc = 0x2DA280u;
label_2da280:
    // 0x2da280: 0x8f829e28  lw          $v0, -0x61D8($gp)
    ctx->pc = 0x2da280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942248)));
    // 0x2da284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2da284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2da288: 0xc064220  jal         func_190880
    ctx->pc = 0x2DA288u;
    SET_GPR_U32(ctx, 31, 0x2DA290u);
    ctx->pc = 0x2DA28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA288u;
            // 0x2da28c: 0xaf829e28  sw          $v0, -0x61D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA290u; }
        if (ctx->pc != 0x2DA290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA290u; }
        if (ctx->pc != 0x2DA290u) { return; }
    }
    ctx->pc = 0x2DA290u;
label_2da290:
    // 0x2da290: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2da290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2da294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da298: 0xc0bd988  jal         func_2F6620
    ctx->pc = 0x2DA298u;
    SET_GPR_U32(ctx, 31, 0x2DA2A0u);
    ctx->pc = 0x2DA29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA298u;
            // 0x2da29c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6620u;
    if (runtime->hasFunction(0x2F6620u)) {
        auto targetFn = runtime->lookupFunction(0x2F6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA2A0u; }
        if (ctx->pc != 0x2DA2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddBuildPartsNum__9CSaveDataFii_0x2f6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA2A0u; }
        if (ctx->pc != 0x2DA2A0u) { return; }
    }
    ctx->pc = 0x2DA2A0u;
label_2da2a0:
    // 0x2da2a0: 0x8f829e28  lw          $v0, -0x61D8($gp)
    ctx->pc = 0x2da2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942248)));
    // 0x2da2a4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA2A4u;
    {
        const bool branch_taken_0x2da2a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DA2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA2A4u;
            // 0x2da2a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2a4) {
            ctx->pc = 0x2DA2B4u;
            goto label_2da2b4;
        }
    }
    ctx->pc = 0x2DA2ACu;
    // 0x2da2ac: 0xaf809e28  sw          $zero, -0x61D8($gp)
    ctx->pc = 0x2da2acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 0));
    // 0x2da2b0: 0xaf829e24  sw          $v0, -0x61DC($gp)
    ctx->pc = 0x2da2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
label_2da2b4:
    // 0x2da2b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2da2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da2b8:
    // 0x2da2b8: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2da2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
label_2da2bc:
    // 0x2da2bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2da2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2da2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA2D0u;
            // 0x2da2d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA2D8u;
}
