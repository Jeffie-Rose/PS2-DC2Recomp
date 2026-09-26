#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapInfo__8CMapInfoFPciP9mgCMemory
// Address: 0x165ae0 - 0x165c94
void LoadMapInfo__8CMapInfoFPciP9mgCMemory_0x165ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapInfo__8CMapInfoFPciP9mgCMemory_0x165ae0");
#endif

    switch (ctx->pc) {
        case 0x165b28u: goto label_165b28;
        case 0x165b38u: goto label_165b38;
        case 0x165b48u: goto label_165b48;
        case 0x165b5cu: goto label_165b5c;
        case 0x165b8cu: goto label_165b8c;
        case 0x165bc4u: goto label_165bc4;
        case 0x165bd8u: goto label_165bd8;
        case 0x165c1cu: goto label_165c1c;
        case 0x165c3cu: goto label_165c3c;
        case 0x165c58u: goto label_165c58;
        case 0x165c6cu: goto label_165c6c;
        case 0x165c74u: goto label_165c74;
        default: break;
    }

    ctx->pc = 0x165ae0u;

    // 0x165ae0: 0x27bdf0d0  addiu       $sp, $sp, -0xF30
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963408));
    // 0x165ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x165ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x165ae8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x165aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x165af0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x165af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165af4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165af8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x165af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165b00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x165b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165b08: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x165b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x165b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x165b10: 0xaf918960  sw          $s1, -0x76A0($gp)
    ctx->pc = 0x165b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 17));
    // 0x165b14: 0xaf94895c  sw          $s4, -0x76A4($gp)
    ctx->pc = 0x165b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936924), GPR_U32(ctx, 20));
    // 0x165b18: 0xaf808964  sw          $zero, -0x769C($gp)
    ctx->pc = 0x165b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), GPR_U32(ctx, 0));
    // 0x165b1c: 0xaf808968  sw          $zero, -0x7698($gp)
    ctx->pc = 0x165b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 0));
    // 0x165b20: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x165B20u;
    SET_GPR_U32(ctx, 31, 0x165B28u);
    ctx->pc = 0x165B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B20u;
            // 0x165b24: 0xaf80896c  sw          $zero, -0x7694($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B28u; }
        if (ctx->pc != 0x165B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B28u; }
        if (ctx->pc != 0x165B28u) { return; }
    }
    ctx->pc = 0x165B28u;
label_165b28:
    // 0x165b28: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x165b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x165b2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x165b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x165b30: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x165B30u;
    SET_GPR_U32(ctx, 31, 0x165B38u);
    ctx->pc = 0x165B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B30u;
            // 0x165b34: 0x24a54a80  addiu       $a1, $a1, 0x4A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B38u; }
        if (ctx->pc != 0x165B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B38u; }
        if (ctx->pc != 0x165B38u) { return; }
    }
    ctx->pc = 0x165B38u;
label_165b38:
    // 0x165b38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x165b3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x165b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b40: 0xc051a60  jal         func_146980
    ctx->pc = 0x165B40u;
    SET_GPR_U32(ctx, 31, 0x165B48u);
    ctx->pc = 0x165B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165B40u;
            // 0x165b44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B48u; }
        if (ctx->pc != 0x165B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B48u; }
        if (ctx->pc != 0x165B48u) { return; }
    }
    ctx->pc = 0x165B48u;
label_165b48:
    // 0x165b48: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x165b4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x165b4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b50: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x165b50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x165b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165B54u;
    {
        const bool branch_taken_0x165b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B54u;
            // 0x165b58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b54) {
            ctx->pc = 0x165B68u;
            goto label_165b68;
        }
    }
    ctx->pc = 0x165B5Cu;
label_165b5c:
    // 0x165b5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165b60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x165b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x165b64: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x165b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_165b68:
    // 0x165b68: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x165b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x165b6c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x165b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165b70: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165B70u;
    {
        const bool branch_taken_0x165b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B70u;
            // 0x165b74: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b70) {
            ctx->pc = 0x165B5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165b5c;
        }
    }
    ctx->pc = 0x165B78u;
    // 0x165b78: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x165b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x165b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b80: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x165b80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x165b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165B84u;
    {
        const bool branch_taken_0x165b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B84u;
            // 0x165b88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b84) {
            ctx->pc = 0x165B98u;
            goto label_165b98;
        }
    }
    ctx->pc = 0x165B8Cu;
label_165b8c:
    // 0x165b8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x165b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x165b90: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x165b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x165b94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x165b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_165b98:
    // 0x165b98: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x165b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x165b9c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x165b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165ba0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165BA0u;
    {
        const bool branch_taken_0x165ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165BA0u;
            // 0x165ba4: 0x2831021  addu        $v0, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ba0) {
            ctx->pc = 0x165B8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165b8c;
        }
    }
    ctx->pc = 0x165BA8u;
    // 0x165ba8: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x165ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x165bac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165BACu;
    {
        const bool branch_taken_0x165bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165BACu;
            // 0x165bb0: 0x122902  srl         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bac) {
            ctx->pc = 0x165BBCu;
            goto label_165bbc;
        }
    }
    ctx->pc = 0x165BB4u;
    // 0x165bb4: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x165bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x165bb8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x165bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165bbc:
    // 0x165bbc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x165BBCu;
    SET_GPR_U32(ctx, 31, 0x165BC4u);
    ctx->pc = 0x165BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165BBCu;
            // 0x165bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BC4u; }
        if (ctx->pc != 0x165BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BC4u; }
        if (ctx->pc != 0x165BC4u) { return; }
    }
    ctx->pc = 0x165BC4u;
label_165bc4:
    // 0x165bc4: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x165bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x165bc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x165bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bcc: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x165bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x165bd0: 0xc049c18  jal         func_127060
    ctx->pc = 0x165BD0u;
    SET_GPR_U32(ctx, 31, 0x165BD8u);
    ctx->pc = 0x165BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165BD0u;
            // 0x165bd4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BD8u; }
        if (ctx->pc != 0x165BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BD8u; }
        if (ctx->pc != 0x165BD8u) { return; }
    }
    ctx->pc = 0x165BD8u;
label_165bd8:
    // 0x165bd8: 0xae92008c  sw          $s2, 0x8C($s4)
    ctx->pc = 0x165bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 18));
    // 0x165bdc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x165be0: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x165be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x165be4: 0x8e90009c  lw          $s0, 0x9C($s4)
    ctx->pc = 0x165be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x165be8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x165bec: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x165becu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x165bf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165bf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x165bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x165bf8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165bfc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x165bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x165c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165C00u;
    {
        const bool branch_taken_0x165c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C00u;
            // 0x165c04: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c00) {
            ctx->pc = 0x165C10u;
            goto label_165c10;
        }
    }
    ctx->pc = 0x165C08u;
    // 0x165c08: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x165c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x165c0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165c10:
    // 0x165c10: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x165c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x165c14: 0xc04e748  jal         func_139D20
    ctx->pc = 0x165C14u;
    SET_GPR_U32(ctx, 31, 0x165C1Cu);
    ctx->pc = 0x165C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C14u;
            // 0x165c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C1Cu; }
        if (ctx->pc != 0x165C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C1Cu; }
        if (ctx->pc != 0x165C1Cu) { return; }
    }
    ctx->pc = 0x165C1Cu;
label_165c1c:
    // 0x165c1c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x165c20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x165c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c24: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x165c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x165c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165c2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x165c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x165c30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165c34: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x165C34u;
    SET_GPR_U32(ctx, 31, 0x165C3Cu);
    ctx->pc = 0x165C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C34u;
            // 0x165c38: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C3Cu; }
        if (ctx->pc != 0x165C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C3Cu; }
        if (ctx->pc != 0x165C3Cu) { return; }
    }
    ctx->pc = 0x165C3Cu;
label_165c3c:
    // 0x165c3c: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x165c40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x165c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c48: 0x24a55ca0  addiu       $a1, $a1, 0x5CA0
    ctx->pc = 0x165c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23712));
    // 0x165c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c50: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x165C50u;
    SET_GPR_U32(ctx, 31, 0x165C58u);
    ctx->pc = 0x165C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C50u;
            // 0x165c54: 0x240701d0  addiu       $a3, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C58u; }
        if (ctx->pc != 0x165C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C58u; }
        if (ctx->pc != 0x165C58u) { return; }
    }
    ctx->pc = 0x165C58u;
label_165c58:
    // 0x165c58: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x165c58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x165c5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x165c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x165c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c64: 0xc051a60  jal         func_146980
    ctx->pc = 0x165C64u;
    SET_GPR_U32(ctx, 31, 0x165C6Cu);
    ctx->pc = 0x165C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C64u;
            // 0x165c68: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C6Cu; }
        if (ctx->pc != 0x165C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C6Cu; }
        if (ctx->pc != 0x165C6Cu) { return; }
    }
    ctx->pc = 0x165C6Cu;
label_165c6c:
    // 0x165c6c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x165C6Cu;
    SET_GPR_U32(ctx, 31, 0x165C74u);
    ctx->pc = 0x165C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165C6Cu;
            // 0x165c70: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C74u; }
        if (ctx->pc != 0x165C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165C74u; }
        if (ctx->pc != 0x165C74u) { return; }
    }
    ctx->pc = 0x165C74u;
label_165c74:
    // 0x165c74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x165c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165c78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165c7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x165C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C8Cu;
            // 0x165c90: 0x27bd0f30  addiu       $sp, $sp, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165C94u;
}
