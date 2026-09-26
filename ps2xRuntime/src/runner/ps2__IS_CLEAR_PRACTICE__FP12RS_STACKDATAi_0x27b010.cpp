#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IS_CLEAR_PRACTICE__FP12RS_STACKDATAi
// Address: 0x27b010 - 0x27b14c
void ps2__IS_CLEAR_PRACTICE__FP12RS_STACKDATAi_0x27b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IS_CLEAR_PRACTICE__FP12RS_STACKDATAi_0x27b010");
#endif

    switch (ctx->pc) {
        case 0x27b064u: goto label_27b064;
        case 0x27b070u: goto label_27b070;
        case 0x27b078u: goto label_27b078;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b124u: goto label_27b124;
        case 0x27b130u: goto label_27b130;
        default: break;
    }

    ctx->pc = 0x27b010u;

    // 0x27b010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27b014: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27b01c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b024: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B024u;
    {
        const bool branch_taken_0x27b024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B024u;
            // 0x27b028: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b024) {
            ctx->pc = 0x27B034u;
            goto label_27b034;
        }
    }
    ctx->pc = 0x27B02Cu;
    // 0x27b02c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x27B02Cu;
    {
        const bool branch_taken_0x27b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B02Cu;
            // 0x27b030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b02c) {
            ctx->pc = 0x27B134u;
            goto label_27b134;
        }
    }
    ctx->pc = 0x27B034u;
label_27b034:
    // 0x27b034: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27b038: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x27b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27b03c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B03Cu;
    {
        const bool branch_taken_0x27b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B03Cu;
            // 0x27b040: 0x24520014  addiu       $s2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b03c) {
            ctx->pc = 0x27B04Cu;
            goto label_27b04c;
        }
    }
    ctx->pc = 0x27B044u;
    // 0x27b044: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x27B044u;
    {
        const bool branch_taken_0x27b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B044u;
            // 0x27b048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b044) {
            ctx->pc = 0x27B134u;
            goto label_27b134;
        }
    }
    ctx->pc = 0x27B04Cu;
label_27b04c:
    // 0x27b04c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B04Cu;
    {
        const bool branch_taken_0x27b04c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B04Cu;
            // 0x27b050: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b04c) {
            ctx->pc = 0x27B05Cu;
            goto label_27b05c;
        }
    }
    ctx->pc = 0x27B054u;
    // 0x27b054: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x27B054u;
    {
        const bool branch_taken_0x27b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B054u;
            // 0x27b058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b054) {
            ctx->pc = 0x27B134u;
            goto label_27b134;
        }
    }
    ctx->pc = 0x27B05Cu;
label_27b05c:
    // 0x27b05c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27B05Cu;
    SET_GPR_U32(ctx, 31, 0x27B064u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B064u; }
        if (ctx->pc != 0x27B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B064u; }
        if (ctx->pc != 0x27B064u) { return; }
    }
    ctx->pc = 0x27B064u;
label_27b064:
    // 0x27b064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b068: 0xc0be69c  jal         func_2F9A70
    ctx->pc = 0x27B068u;
    SET_GPR_U32(ctx, 31, 0x27B070u);
    ctx->pc = 0x27B06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B068u;
            // 0x27b06c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A70u;
    if (runtime->hasFunction(0x2F9A70u)) {
        auto targetFn = runtime->lookupFunction(0x2F9A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B070u; }
        if (ctx->pc != 0x27B070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsClearPractice__16CDngFloorManagerFi_0x2f9a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B070u; }
        if (ctx->pc != 0x27B070u) { return; }
    }
    ctx->pc = 0x27B070u;
label_27b070:
    // 0x27b070: 0xc064220  jal         func_190880
    ctx->pc = 0x27B070u;
    SET_GPR_U32(ctx, 31, 0x27B078u);
    ctx->pc = 0x27B074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B070u;
            // 0x27b074: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B078u; }
        if (ctx->pc != 0x27B078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B078u; }
        if (ctx->pc != 0x27B078u) { return; }
    }
    ctx->pc = 0x27B078u;
label_27b078:
    // 0x27b078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B078u;
    {
        const bool branch_taken_0x27b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B078u;
            // 0x27b07c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b078) {
            ctx->pc = 0x27B088u;
            goto label_27b088;
        }
    }
    ctx->pc = 0x27B080u;
    // 0x27b080: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27B080u;
    {
        const bool branch_taken_0x27b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B080u;
            // 0x27b084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b080) {
            ctx->pc = 0x27B134u;
            goto label_27b134;
        }
    }
    ctx->pc = 0x27B088u;
label_27b088:
    // 0x27b088: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x27b088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x27b08c: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x27b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27b090: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B090u;
    {
        const bool branch_taken_0x27b090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B090u;
            // 0x27b094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b090) {
            ctx->pc = 0x27B0A0u;
            goto label_27b0a0;
        }
    }
    ctx->pc = 0x27B098u;
    // 0x27b098: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27B098u;
    {
        const bool branch_taken_0x27b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B098u;
            // 0x27b09c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b098) {
            ctx->pc = 0x27B138u;
            goto label_27b138;
        }
    }
    ctx->pc = 0x27B0A0u;
label_27b0a0:
    // 0x27b0a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b0a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27b0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b0ac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27b0b0: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x27B0B0u;
    SET_GPR_U32(ctx, 31, 0x27B0B8u);
    ctx->pc = 0x27B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0B0u;
            // 0x27b0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B0B8u; }
        if (ctx->pc != 0x27B0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B0B8u; }
        if (ctx->pc != 0x27B0B8u) { return; }
    }
    ctx->pc = 0x27B0B8u;
label_27b0b8:
    // 0x27b0b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B0B8u;
    {
        const bool branch_taken_0x27b0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b0b8) {
            ctx->pc = 0x27B0C8u;
            goto label_27b0c8;
        }
    }
    ctx->pc = 0x27B0C0u;
    // 0x27b0c0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27B0C0u;
    {
        const bool branch_taken_0x27b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0C0u;
            // 0x27b0c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0c0) {
            ctx->pc = 0x27B134u;
            goto label_27b134;
        }
    }
    ctx->pc = 0x27B0C8u;
label_27b0c8:
    // 0x27b0c8: 0x8047001a  lb          $a3, 0x1A($v0)
    ctx->pc = 0x27b0c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x27b0cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b0d0: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B0D0u;
    {
        const bool branch_taken_0x27b0d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b0d0) {
            ctx->pc = 0x27B0E0u;
            goto label_27b0e0;
        }
    }
    ctx->pc = 0x27B0D8u;
    // 0x27b0d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27B0D8u;
    {
        const bool branch_taken_0x27b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0D8u;
            // 0x27b0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0d8) {
            ctx->pc = 0x27B118u;
            goto label_27b118;
        }
    }
    ctx->pc = 0x27B0E0u;
label_27b0e0:
    // 0x27b0e0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x27b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27b0e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b0e8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B0E8u;
    {
        const bool branch_taken_0x27b0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0E8u;
            // 0x27b0ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0e8) {
            ctx->pc = 0x27B110u;
            goto label_27b110;
        }
    }
    ctx->pc = 0x27B0F0u;
    // 0x27b0f0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B0F0u;
    {
        const bool branch_taken_0x27b0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b0f0) {
            ctx->pc = 0x27B110u;
            goto label_27b110;
        }
    }
    ctx->pc = 0x27B0F8u;
    // 0x27b0f8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B0F8u;
    {
        const bool branch_taken_0x27b0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0F8u;
            // 0x27b0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0f8) {
            ctx->pc = 0x27B110u;
            goto label_27b110;
        }
    }
    ctx->pc = 0x27B100u;
    // 0x27b100: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B100u;
    {
        const bool branch_taken_0x27b100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b100) {
            ctx->pc = 0x27B110u;
            goto label_27b110;
        }
    }
    ctx->pc = 0x27B108u;
    // 0x27b108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B108u;
    {
        const bool branch_taken_0x27b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b108) {
            ctx->pc = 0x27B114u;
            goto label_27b114;
        }
    }
    ctx->pc = 0x27B110u;
label_27b110:
    // 0x27b110: 0x24870005  addiu       $a3, $a0, 0x5
    ctx->pc = 0x27b110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_27b114:
    // 0x27b114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b118:
    // 0x27b118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27b118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b11c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27B11Cu;
    SET_GPR_U32(ctx, 31, 0x27B124u);
    ctx->pc = 0x27B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B11Cu;
            // 0x27b120: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B124u; }
        if (ctx->pc != 0x27B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B124u; }
        if (ctx->pc != 0x27B124u) { return; }
    }
    ctx->pc = 0x27B124u;
label_27b124:
    // 0x27b124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b128: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27B128u;
    SET_GPR_U32(ctx, 31, 0x27B130u);
    ctx->pc = 0x27B12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B128u;
            // 0x27b12c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B130u; }
        if (ctx->pc != 0x27B130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B130u; }
        if (ctx->pc != 0x27B130u) { return; }
    }
    ctx->pc = 0x27B130u;
label_27b130:
    // 0x27b130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b134:
    // 0x27b134: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27b134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27b138:
    // 0x27b138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b13c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b144: 0x3e00008  jr          $ra
    ctx->pc = 0x27B144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B144u;
            // 0x27b148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B14Cu;
}
