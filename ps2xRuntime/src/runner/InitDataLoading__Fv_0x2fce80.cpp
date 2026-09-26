#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitDataLoading__Fv
// Address: 0x2fce80 - 0x2fcf88
void InitDataLoading__Fv_0x2fce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDataLoading__Fv_0x2fce80");
#endif

    switch (ctx->pc) {
        case 0x2fce98u: goto label_2fce98;
        case 0x2fceb4u: goto label_2fceb4;
        case 0x2fcec8u: goto label_2fcec8;
        case 0x2fced4u: goto label_2fced4;
        case 0x2fcee0u: goto label_2fcee0;
        case 0x2fcf00u: goto label_2fcf00;
        case 0x2fcf0cu: goto label_2fcf0c;
        case 0x2fcf1cu: goto label_2fcf1c;
        case 0x2fcf28u: goto label_2fcf28;
        default: break;
    }

    ctx->pc = 0x2fce80u;

    // 0x2fce80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fce84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fce88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fce8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fce90: 0xc0c0fd0  jal         func_303F40
    ctx->pc = 0x2FCE90u;
    SET_GPR_U32(ctx, 31, 0x2FCE98u);
    ctx->pc = 0x2FCE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE90u;
            // 0x2fce94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE98u; }
        if (ctx->pc != 0x2FCE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE98u; }
        if (ctx->pc != 0x2FCE98u) { return; }
    }
    ctx->pc = 0x2FCE98u;
label_2fce98:
    // 0x2fce98: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2fce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2fce9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fce9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcea0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCEA0u;
    {
        const bool branch_taken_0x2fcea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEA0u;
            // 0x2fcea4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcea0) {
            ctx->pc = 0x2FCEBCu;
            goto label_2fcebc;
        }
    }
    ctx->pc = 0x2FCEA8u;
    // 0x2fcea8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2fcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2fceac: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2FCEACu;
    SET_GPR_U32(ctx, 31, 0x2FCEB4u);
    ctx->pc = 0x2FCEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEACu;
            // 0x2fceb0: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEB4u; }
        if (ctx->pc != 0x2FCEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEB4u; }
        if (ctx->pc != 0x2FCEB4u) { return; }
    }
    ctx->pc = 0x2FCEB4u;
label_2fceb4:
    // 0x2fceb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FCEB4u;
    {
        const bool branch_taken_0x2fceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEB4u;
            // 0x2fceb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fceb4) {
            ctx->pc = 0x2FCED8u;
            goto label_2fced8;
        }
    }
    ctx->pc = 0x2FCEBCu;
label_2fcebc:
    // 0x2fcebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcec0: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x2FCEC0u;
    SET_GPR_U32(ctx, 31, 0x2FCEC8u);
    ctx->pc = 0x2FCEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEC0u;
            // 0x2fcec4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEC8u; }
        if (ctx->pc != 0x2FCEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEC8u; }
        if (ctx->pc != 0x2FCEC8u) { return; }
    }
    ctx->pc = 0x2FCEC8u;
label_2fcec8:
    // 0x2fcec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcecc: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2FCECCu;
    SET_GPR_U32(ctx, 31, 0x2FCED4u);
    ctx->pc = 0x2FCED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCECCu;
            // 0x2fced0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCED4u; }
        if (ctx->pc != 0x2FCED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCED4u; }
        if (ctx->pc != 0x2FCED4u) { return; }
    }
    ctx->pc = 0x2FCED4u;
label_2fced4:
    // 0x2fced4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fced8:
    // 0x2fced8: 0xc0a9b30  jal         func_2A6CC0
    ctx->pc = 0x2FCED8u;
    SET_GPR_U32(ctx, 31, 0x2FCEE0u);
    ctx->pc = 0x2FCEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCED8u;
            // 0x2fcedc: 0x24050205  addiu       $a1, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEE0u; }
        if (ctx->pc != 0x2FCEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEE0u; }
        if (ctx->pc != 0x2FCEE0u) { return; }
    }
    ctx->pc = 0x2FCEE0u;
label_2fcee0:
    // 0x2fcee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fcee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcee4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2fcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2fcee8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FCEE8u;
    {
        const bool branch_taken_0x2fcee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEE8u;
            // 0x2fceec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcee8) {
            ctx->pc = 0x2FCF20u;
            goto label_2fcf20;
        }
    }
    ctx->pc = 0x2FCEF0u;
    // 0x2fcef0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2fcef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2fcef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcef8: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x2FCEF8u;
    SET_GPR_U32(ctx, 31, 0x2FCF00u);
    ctx->pc = 0x2FCEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEF8u;
            // 0x2fcefc: 0x24a59df0  addiu       $a1, $a1, -0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF00u; }
        if (ctx->pc != 0x2FCF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF00u; }
        if (ctx->pc != 0x2FCF00u) { return; }
    }
    ctx->pc = 0x2FCF00u;
label_2fcf00:
    // 0x2fcf00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fcf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf04: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x2FCF04u;
    SET_GPR_U32(ctx, 31, 0x2FCF0Cu);
    ctx->pc = 0x2FCF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF04u;
            // 0x2fcf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF0Cu; }
        if (ctx->pc != 0x2FCF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF0Cu; }
        if (ctx->pc != 0x2FCF0Cu) { return; }
    }
    ctx->pc = 0x2FCF0Cu;
label_2fcf0c:
    // 0x2fcf0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCF0Cu;
    {
        const bool branch_taken_0x2fcf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF0Cu;
            // 0x2fcf10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf0c) {
            ctx->pc = 0x2FCF1Cu;
            goto label_2fcf1c;
        }
    }
    ctx->pc = 0x2FCF14u;
    // 0x2fcf14: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2FCF14u;
    SET_GPR_U32(ctx, 31, 0x2FCF1Cu);
    ctx->pc = 0x2FCF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF14u;
            // 0x2fcf18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF1Cu; }
        if (ctx->pc != 0x2FCF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF1Cu; }
        if (ctx->pc != 0x2FCF1Cu) { return; }
    }
    ctx->pc = 0x2FCF1Cu;
label_2fcf1c:
    // 0x2fcf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcf20:
    // 0x2fcf20: 0xc0a1150  jal         func_284540
    ctx->pc = 0x2FCF20u;
    SET_GPR_U32(ctx, 31, 0x2FCF28u);
    ctx->pc = 0x2FCF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF20u;
            // 0x2fcf24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF28u; }
        if (ctx->pc != 0x2FCF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF28u; }
        if (ctx->pc != 0x2FCF28u) { return; }
    }
    ctx->pc = 0x2FCF28u;
label_2fcf28:
    // 0x2fcf28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fcf2c: 0xaf829f70  sw          $v0, -0x6090($gp)
    ctx->pc = 0x2fcf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942576), GPR_U32(ctx, 2));
    // 0x2fcf30: 0xaf809fe0  sw          $zero, -0x6020($gp)
    ctx->pc = 0x2fcf30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942688), GPR_U32(ctx, 0));
    // 0x2fcf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcf38: 0xaf839fe4  sw          $v1, -0x601C($gp)
    ctx->pc = 0x2fcf38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942692), GPR_U32(ctx, 3));
    // 0x2fcf3c: 0xaf839fd4  sw          $v1, -0x602C($gp)
    ctx->pc = 0x2fcf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942676), GPR_U32(ctx, 3));
    // 0x2fcf40: 0xaf809fd0  sw          $zero, -0x6030($gp)
    ctx->pc = 0x2fcf40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), GPR_U32(ctx, 0));
    // 0x2fcf44: 0xaf809fd8  sw          $zero, -0x6028($gp)
    ctx->pc = 0x2fcf44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942680), GPR_U32(ctx, 0));
    // 0x2fcf48: 0xaf809fdc  sw          $zero, -0x6024($gp)
    ctx->pc = 0x2fcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), GPR_U32(ctx, 0));
    // 0x2fcf4c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fcf50: 0xaf839ff4  sw          $v1, -0x600C($gp)
    ctx->pc = 0x2fcf50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942708), GPR_U32(ctx, 3));
    // 0x2fcf54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2fcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fcf58: 0xaf839ff8  sw          $v1, -0x6008($gp)
    ctx->pc = 0x2fcf58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942712), GPR_U32(ctx, 3));
    // 0x2fcf5c: 0xaf80a05c  sw          $zero, -0x5FA4($gp)
    ctx->pc = 0x2fcf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942812), GPR_U32(ctx, 0));
    // 0x2fcf60: 0xaf809fcc  sw          $zero, -0x6034($gp)
    ctx->pc = 0x2fcf60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942668), GPR_U32(ctx, 0));
    // 0x2fcf64: 0xaf809fc8  sw          $zero, -0x6038($gp)
    ctx->pc = 0x2fcf64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942664), GPR_U32(ctx, 0));
    // 0x2fcf68: 0xaf80a064  sw          $zero, -0x5F9C($gp)
    ctx->pc = 0x2fcf68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942820), GPR_U32(ctx, 0));
    // 0x2fcf6c: 0xaf80a060  sw          $zero, -0x5FA0($gp)
    ctx->pc = 0x2fcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942816), GPR_U32(ctx, 0));
    // 0x2fcf70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fcf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fcf74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fcf74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcf78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fcf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcf7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fcf7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcf80: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF80u;
            // 0x2fcf84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCF88u;
}
