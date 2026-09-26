#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRepairData__14CRepairManagerFP9mgCMemoryiPUi
// Address: 0x22db60 - 0x22dc04
void SetRepairData__14CRepairManagerFP9mgCMemoryiPUi_0x22db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRepairData__14CRepairManagerFP9mgCMemoryiPUi_0x22db60");
#endif

    switch (ctx->pc) {
        case 0x22db9cu: goto label_22db9c;
        case 0x22dbb0u: goto label_22dbb0;
        case 0x22dbc8u: goto label_22dbc8;
        case 0x22dbe4u: goto label_22dbe4;
        default: break;
    }

    ctx->pc = 0x22db60u;

    // 0x22db60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22db64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22db68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22db6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22db70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22db70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22db74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22db78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22db78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db7c: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x22db7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x22db80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22db80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db84: 0xac8701ac  sw          $a3, 0x1AC($a0)
    ctx->pc = 0x22db84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 7));
    // 0x22db88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22db88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22db8c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x22db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db90: 0x24a5a700  addiu       $a1, $a1, -0x5900
    ctx->pc = 0x22db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
    // 0x22db94: 0xc052734  jal         func_149CD0
    ctx->pc = 0x22DB94u;
    SET_GPR_U32(ctx, 31, 0x22DB9Cu);
    ctx->pc = 0x22DB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB94u;
            // 0x22db98: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB9Cu; }
        if (ctx->pc != 0x22DB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DB9Cu; }
        if (ctx->pc != 0x22DB9Cu) { return; }
    }
    ctx->pc = 0x22DB9Cu;
label_22db9c:
    // 0x22db9c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x22dba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dba4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22dba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dba8: 0xc0944e8  jal         func_2513A0
    ctx->pc = 0x22DBA8u;
    SET_GPR_U32(ctx, 31, 0x22DBB0u);
    ctx->pc = 0x22DBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBA8u;
            // 0x22dbac: 0x24c6a718  addiu       $a2, $a2, -0x58E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2513A0u;
    if (runtime->hasFunction(0x2513A0u)) {
        auto targetFn = runtime->lookupFunction(0x2513A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBB0u; }
        if (ctx->pc != 0x22DBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEnterIMG__FiPUcPc_0x2513a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBB0u; }
        if (ctx->pc != 0x22DBB0u) { return; }
    }
    ctx->pc = 0x22DBB0u;
label_22dbb0:
    // 0x22dbb0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22dbb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22dbb8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22dbbc: 0x24a5a720  addiu       $a1, $a1, -0x58E0
    ctx->pc = 0x22dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944544));
    // 0x22dbc0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22DBC0u;
    SET_GPR_U32(ctx, 31, 0x22DBC8u);
    ctx->pc = 0x22DBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBC0u;
            // 0x22dbc4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBC8u; }
        if (ctx->pc != 0x22DBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBC8u; }
        if (ctx->pc != 0x22DBC8u) { return; }
    }
    ctx->pc = 0x22DBC8u;
label_22dbc8:
    // 0x22dbc8: 0xae4201a8  sw          $v0, 0x1A8($s2)
    ctx->pc = 0x22dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 2));
    // 0x22dbcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22dbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dbd0: 0xa2460001  sb          $a2, 0x1($s2)
    ctx->pc = 0x22dbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x22dbd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbdc: 0xc08b63c  jal         func_22D8F0
    ctx->pc = 0x22DBDCu;
    SET_GPR_U32(ctx, 31, 0x22DBE4u);
    ctx->pc = 0x22DBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBDCu;
            // 0x22dbe0: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D8F0u;
    if (runtime->hasFunction(0x22D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBE4u; }
        if (ctx->pc != 0x22DBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__14CRepairManagerFP9mgCMemoryi_0x22d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DBE4u; }
        if (ctx->pc != 0x22DBE4u) { return; }
    }
    ctx->pc = 0x22DBE4u;
label_22dbe4:
    // 0x22dbe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dbe8: 0xa24301e8  sb          $v1, 0x1E8($s2)
    ctx->pc = 0x22dbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 488), (uint8_t)GPR_U32(ctx, 3));
    // 0x22dbec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22dbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dbf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22dbf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dbf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22dbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dbf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22dbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22DBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBFCu;
            // 0x22dc00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DC04u;
}
