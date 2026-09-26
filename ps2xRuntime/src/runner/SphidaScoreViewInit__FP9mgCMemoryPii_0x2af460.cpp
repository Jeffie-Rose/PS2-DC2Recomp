#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaScoreViewInit__FP9mgCMemoryPii
// Address: 0x2af460 - 0x2af618
void SphidaScoreViewInit__FP9mgCMemoryPii_0x2af460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaScoreViewInit__FP9mgCMemoryPii_0x2af460");
#endif

    switch (ctx->pc) {
        case 0x2af494u: goto label_2af494;
        case 0x2af4a4u: goto label_2af4a4;
        case 0x2af51cu: goto label_2af51c;
        case 0x2af524u: goto label_2af524;
        case 0x2af52cu: goto label_2af52c;
        case 0x2af544u: goto label_2af544;
        case 0x2af554u: goto label_2af554;
        case 0x2af580u: goto label_2af580;
        case 0x2af5a0u: goto label_2af5a0;
        case 0x2af5c0u: goto label_2af5c0;
        case 0x2af5d8u: goto label_2af5d8;
        case 0x2af5f4u: goto label_2af5f4;
        default: break;
    }

    ctx->pc = 0x2af460u;

    // 0x2af460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2af468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2af46c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2af46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af470: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2af470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2af474: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2af478: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2af47c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2af47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af480: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2af480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af484: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2af484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2af488: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2af488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af48c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2AF48Cu;
    SET_GPR_U32(ctx, 31, 0x2AF494u);
    ctx->pc = 0x2AF490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF48Cu;
            // 0x2af490: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF494u; }
        if (ctx->pc != 0x2AF494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF494u; }
        if (ctx->pc != 0x2AF494u) { return; }
    }
    ctx->pc = 0x2AF494u;
label_2af494:
    // 0x2af494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af49c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2af49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2af4a0: 0x2484ca40  addiu       $a0, $a0, -0x35C0
    ctx->pc = 0x2af4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
label_2af4a4:
    // 0x2af4a4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2af4a8: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x2af4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2af4ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af4b0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2af4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2af4b4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2af4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2af4b8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2af4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2af4bc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2af4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2af4c0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2af4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2af4c4: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2af4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2af4c8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2af4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2af4cc: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2af4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x2af4d0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2af4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2af4d4: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x2af4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x2af4d8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2af4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2af4dc: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x2af4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x2af4e0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2af4e4: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x2af4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x2af4e8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2af4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2af4ec: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x2af4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x2af4f0: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x2af4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2af4f4: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AF4F4u;
    {
        const bool branch_taken_0x2af4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF4F4u;
            // 0x2af4f8: 0xad03001c  sw          $v1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4f4) {
            ctx->pc = 0x2AF4A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2af4a4;
        }
    }
    ctx->pc = 0x2AF4FCu;
    // 0x2af4fc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2af4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2af500: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2af500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2af504: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2af504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2af508: 0x24a5ca10  addiu       $a1, $a1, -0x35F0
    ctx->pc = 0x2af508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953488));
    // 0x2af50c: 0xaf828304  sw          $v0, -0x7CFC($gp)
    ctx->pc = 0x2af50cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
    // 0x2af510: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x2af510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x2af514: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x2AF514u;
    SET_GPR_U32(ctx, 31, 0x2AF51Cu);
    ctx->pc = 0x2AF518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF514u;
            // 0x2af518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF51Cu; }
        if (ctx->pc != 0x2AF51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF51Cu; }
        if (ctx->pc != 0x2AF51Cu) { return; }
    }
    ctx->pc = 0x2AF51Cu;
label_2af51c:
    // 0x2af51c: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x2AF51Cu;
    SET_GPR_U32(ctx, 31, 0x2AF524u);
    ctx->pc = 0x2AF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF51Cu;
            // 0x2af520: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF524u; }
        if (ctx->pc != 0x2AF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF524u; }
        if (ctx->pc != 0x2AF524u) { return; }
    }
    ctx->pc = 0x2AF524u;
label_2af524:
    // 0x2af524: 0xc064224  jal         func_190890
    ctx->pc = 0x2AF524u;
    SET_GPR_U32(ctx, 31, 0x2AF52Cu);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF52Cu; }
        if (ctx->pc != 0x2AF52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF52Cu; }
        if (ctx->pc != 0x2AF52Cu) { return; }
    }
    ctx->pc = 0x2AF52Cu;
label_2af52c:
    // 0x2af52c: 0xaf829b04  sw          $v0, -0x64FC($gp)
    ctx->pc = 0x2af52cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941444), GPR_U32(ctx, 2));
    // 0x2af530: 0x8f849b04  lw          $a0, -0x64FC($gp)
    ctx->pc = 0x2af530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941444)));
    // 0x2af534: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2AF534u;
    {
        const bool branch_taken_0x2af534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF534u;
            // 0x2af538: 0xaf809b08  sw          $zero, -0x64F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af534) {
            ctx->pc = 0x2AF608u;
            goto label_2af608;
        }
    }
    ctx->pc = 0x2AF53Cu;
    // 0x2af53c: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x2AF53Cu;
    SET_GPR_U32(ctx, 31, 0x2AF544u);
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF544u; }
        if (ctx->pc != 0x2AF544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF544u; }
        if (ctx->pc != 0x2AF544u) { return; }
    }
    ctx->pc = 0x2AF544u;
label_2af544:
    // 0x2af544: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2af544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2af548: 0xaf829b08  sw          $v0, -0x64F8($gp)
    ctx->pc = 0x2af548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941448), GPR_U32(ctx, 2));
    // 0x2af54c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2AF54Cu;
    SET_GPR_U32(ctx, 31, 0x2AF554u);
    ctx->pc = 0x2AF550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF54Cu;
            // 0x2af550: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF554u; }
        if (ctx->pc != 0x2AF554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF554u; }
        if (ctx->pc != 0x2AF554u) { return; }
    }
    ctx->pc = 0x2AF554u;
label_2af554:
    // 0x2af554: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2af554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2af558: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2af558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2af55c: 0x8c23ca34  lw          $v1, -0x35CC($at)
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953524)));
    // 0x2af560: 0x2484e988  addiu       $a0, $a0, -0x1678
    ctx->pc = 0x2af560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961544));
    // 0x2af564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af568: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2af568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2af56c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2af56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2af570: 0x8c22ca30  lw          $v0, -0x35D0($at)
    ctx->pc = 0x2af570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953520)));
    // 0x2af574: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2af574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af578: 0xc094440  jal         func_251100
    ctx->pc = 0x2AF578u;
    SET_GPR_U32(ctx, 31, 0x2AF580u);
    ctx->pc = 0x2AF57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF578u;
            // 0x2af57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF580u; }
        if (ctx->pc != 0x2AF580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF580u; }
        if (ctx->pc != 0x2AF580u) { return; }
    }
    ctx->pc = 0x2AF580u;
label_2af580:
    // 0x2af580: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2af580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2af584: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF584u;
    {
        const bool branch_taken_0x2af584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF584u;
            // 0x2af588: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af584) {
            ctx->pc = 0x2AF594u;
            goto label_2af594;
        }
    }
    ctx->pc = 0x2AF58Cu;
    // 0x2af58c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2af58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2af590: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2af590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2af594:
    // 0x2af594: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2af594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2af598: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AF598u;
    SET_GPR_U32(ctx, 31, 0x2AF5A0u);
    ctx->pc = 0x2AF59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF598u;
            // 0x2af59c: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5A0u; }
        if (ctx->pc != 0x2AF5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5A0u; }
        if (ctx->pc != 0x2AF5A0u) { return; }
    }
    ctx->pc = 0x2AF5A0u;
label_2af5a0:
    // 0x2af5a0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2af5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2af5a4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2af5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2af5a8: 0x8c26ca44  lw          $a2, -0x35BC($at)
    ctx->pc = 0x2af5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2af5ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2af5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5b0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2af5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2af5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5b8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2AF5B8u;
    SET_GPR_U32(ctx, 31, 0x2AF5C0u);
    ctx->pc = 0x2AF5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF5B8u;
            // 0x2af5bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5C0u; }
        if (ctx->pc != 0x2AF5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5C0u; }
        if (ctx->pc != 0x2AF5C0u) { return; }
    }
    ctx->pc = 0x2AF5C0u;
label_2af5c0:
    // 0x2af5c0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2af5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2af5c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2af5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2af5c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2af5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2af5cc: 0x24a5e998  addiu       $a1, $a1, -0x1668
    ctx->pc = 0x2af5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961560));
    // 0x2af5d0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AF5D0u;
    SET_GPR_U32(ctx, 31, 0x2AF5D8u);
    ctx->pc = 0x2AF5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF5D0u;
            // 0x2af5d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5D8u; }
        if (ctx->pc != 0x2AF5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5D8u; }
        if (ctx->pc != 0x2AF5D8u) { return; }
    }
    ctx->pc = 0x2AF5D8u;
label_2af5d8:
    // 0x2af5d8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2af5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2af5dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2af5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2af5e0: 0xaf829b1c  sw          $v0, -0x64E4($gp)
    ctx->pc = 0x2af5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941468), GPR_U32(ctx, 2));
    // 0x2af5e4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2af5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2af5e8: 0x24a5e9a8  addiu       $a1, $a1, -0x1658
    ctx->pc = 0x2af5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961576));
    // 0x2af5ec: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AF5ECu;
    SET_GPR_U32(ctx, 31, 0x2AF5F4u);
    ctx->pc = 0x2AF5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF5ECu;
            // 0x2af5f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5F4u; }
        if (ctx->pc != 0x2AF5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5F4u; }
        if (ctx->pc != 0x2AF5F4u) { return; }
    }
    ctx->pc = 0x2AF5F4u;
label_2af5f4:
    // 0x2af5f4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2af5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2af5f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af5fc: 0xaf829b24  sw          $v0, -0x64DC($gp)
    ctx->pc = 0x2af5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941476), GPR_U32(ctx, 2));
    // 0x2af600: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2af600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af604: 0xa7809b68  sh          $zero, -0x6498($gp)
    ctx->pc = 0x2af604u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941544), (uint16_t)GPR_U32(ctx, 0));
label_2af608:
    // 0x2af608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2af60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af610: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF610u;
            // 0x2af614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF618u;
}
