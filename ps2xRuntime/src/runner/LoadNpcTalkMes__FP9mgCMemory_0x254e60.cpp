#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadNpcTalkMes__FP9mgCMemory
// Address: 0x254e60 - 0x254f58
void LoadNpcTalkMes__FP9mgCMemory_0x254e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadNpcTalkMes__FP9mgCMemory_0x254e60");
#endif

    switch (ctx->pc) {
        case 0x254e98u: goto label_254e98;
        case 0x254ea0u: goto label_254ea0;
        case 0x254eb8u: goto label_254eb8;
        case 0x254eccu: goto label_254ecc;
        case 0x254ee8u: goto label_254ee8;
        case 0x254efcu: goto label_254efc;
        case 0x254f2cu: goto label_254f2c;
        default: break;
    }

    ctx->pc = 0x254e60u;

    // 0x254e60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x254e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x254e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254e70: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x254e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x254e74: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x254e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x254e78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x254e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x254e7c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x254e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254e80: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254E80u;
    {
        const bool branch_taken_0x254e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x254E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254E80u;
            // 0x254e84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e80) {
            ctx->pc = 0x254E90u;
            goto label_254e90;
        }
    }
    ctx->pc = 0x254E88u;
    // 0x254e88: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x254E88u;
    {
        const bool branch_taken_0x254e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254E88u;
            // 0x254e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e88) {
            ctx->pc = 0x254F44u;
            goto label_254f44;
        }
    }
    ctx->pc = 0x254E90u;
label_254e90:
    // 0x254e90: 0xc064220  jal         func_190880
    ctx->pc = 0x254E90u;
    SET_GPR_U32(ctx, 31, 0x254E98u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E98u; }
        if (ctx->pc != 0x254E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E98u; }
        if (ctx->pc != 0x254E98u) { return; }
    }
    ctx->pc = 0x254E98u;
label_254e98:
    // 0x254e98: 0xc094414  jal         func_251050
    ctx->pc = 0x254E98u;
    SET_GPR_U32(ctx, 31, 0x254EA0u);
    ctx->pc = 0x254E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254E98u;
            // 0x254e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251050u;
    if (runtime->hasFunction(0x251050u)) {
        auto targetFn = runtime->lookupFunction(0x251050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EA0u; }
        if (ctx->pc != 0x254EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowChapter__FP9CSaveData_0x251050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EA0u; }
        if (ctx->pc != 0x254EA0u) { return; }
    }
    ctx->pc = 0x254EA0u;
label_254ea0:
    // 0x254ea0: 0x8f878ad0  lw          $a3, -0x7530($gp)
    ctx->pc = 0x254ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x254ea4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x254ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x254ea8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254eac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254eb0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x254EB0u;
    SET_GPR_U32(ctx, 31, 0x254EB8u);
    ctx->pc = 0x254EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254EB0u;
            // 0x254eb4: 0x24a5c3d0  addiu       $a1, $a1, -0x3C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EB8u; }
        if (ctx->pc != 0x254EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EB8u; }
        if (ctx->pc != 0x254EB8u) { return; }
    }
    ctx->pc = 0x254EB8u;
label_254eb8:
    // 0x254eb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ec0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x254ec4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x254EC4u;
    SET_GPR_U32(ctx, 31, 0x254ECCu);
    ctx->pc = 0x254EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254EC4u;
            // 0x254ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254ECCu; }
        if (ctx->pc != 0x254ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254ECCu; }
        if (ctx->pc != 0x254ECCu) { return; }
    }
    ctx->pc = 0x254ECCu;
label_254ecc:
    // 0x254ecc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x254ECCu;
    {
        const bool branch_taken_0x254ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ecc) {
            ctx->pc = 0x254F0Cu;
            goto label_254f0c;
        }
    }
    ctx->pc = 0x254ED4u;
    // 0x254ed4: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x254ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x254ed8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x254ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x254edc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254ee0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x254EE0u;
    SET_GPR_U32(ctx, 31, 0x254EE8u);
    ctx->pc = 0x254EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254EE0u;
            // 0x254ee4: 0x24a5c3f0  addiu       $a1, $a1, -0x3C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EE8u; }
        if (ctx->pc != 0x254EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EE8u; }
        if (ctx->pc != 0x254EE8u) { return; }
    }
    ctx->pc = 0x254EE8u;
label_254ee8:
    // 0x254ee8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ef0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x254ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x254ef4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x254EF4u;
    SET_GPR_U32(ctx, 31, 0x254EFCu);
    ctx->pc = 0x254EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254EF4u;
            // 0x254ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EFCu; }
        if (ctx->pc != 0x254EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254EFCu; }
        if (ctx->pc != 0x254EFCu) { return; }
    }
    ctx->pc = 0x254EFCu;
label_254efc:
    // 0x254efc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254EFCu;
    {
        const bool branch_taken_0x254efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254EFCu;
            // 0x254f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254efc) {
            ctx->pc = 0x254F0Cu;
            goto label_254f0c;
        }
    }
    ctx->pc = 0x254F04u;
    // 0x254f04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x254F04u;
    {
        const bool branch_taken_0x254f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254F04u;
            // 0x254f08: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f04) {
            ctx->pc = 0x254F48u;
            goto label_254f48;
        }
    }
    ctx->pc = 0x254F0Cu;
label_254f0c:
    // 0x254f0c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x254f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x254f10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254F10u;
    {
        const bool branch_taken_0x254f10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x254F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254F10u;
            // 0x254f14: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f10) {
            ctx->pc = 0x254F20u;
            goto label_254f20;
        }
    }
    ctx->pc = 0x254F18u;
    // 0x254f18: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x254f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x254f1c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x254f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_254f20:
    // 0x254f20: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x254f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254f24: 0xc04e748  jal         func_139D20
    ctx->pc = 0x254F24u;
    SET_GPR_U32(ctx, 31, 0x254F2Cu);
    ctx->pc = 0x254F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254F24u;
            // 0x254f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254F2Cu; }
        if (ctx->pc != 0x254F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254F2Cu; }
        if (ctx->pc != 0x254F2Cu) { return; }
    }
    ctx->pc = 0x254F2Cu;
label_254f2c:
    // 0x254f2c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x254f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x254f30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x254f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x254f34: 0xac31e858  sw          $s1, -0x17A8($at)
    ctx->pc = 0x254f34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961240), GPR_U32(ctx, 17));
    // 0x254f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254f3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x254f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x254f40: 0xac23e85c  sw          $v1, -0x17A4($at)
    ctx->pc = 0x254f40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961244), GPR_U32(ctx, 3));
label_254f44:
    // 0x254f44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_254f48:
    // 0x254f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254f50: 0x3e00008  jr          $ra
    ctx->pc = 0x254F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254F50u;
            // 0x254f54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254F58u;
}
