#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPauseData__Fv
// Address: 0x309b50 - 0x309bc8
void InitPauseData__Fv_0x309b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPauseData__Fv_0x309b50");
#endif

    switch (ctx->pc) {
        case 0x309b78u: goto label_309b78;
        case 0x309bacu: goto label_309bac;
        default: break;
    }

    ctx->pc = 0x309b50u;

    // 0x309b50: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x309b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x309b54: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x309b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x309b58: 0x3421ffe0  ori         $at, $at, 0xFFE0
    ctx->pc = 0x309b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65504);
    // 0x309b5c: 0x24842478  addiu       $a0, $a0, 0x2478
    ctx->pc = 0x309b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9336));
    // 0x309b60: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x309b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x309b64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309b6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x309b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x309b70: 0xc0524dc  jal         func_149370
    ctx->pc = 0x309B70u;
    SET_GPR_U32(ctx, 31, 0x309B78u);
    ctx->pc = 0x309B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309B70u;
            // 0x309b74: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B78u; }
        if (ctx->pc != 0x309B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B78u; }
        if (ctx->pc != 0x309B78u) { return; }
    }
    ctx->pc = 0x309B78u;
label_309b78:
    // 0x309b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309B78u;
    {
        const bool branch_taken_0x309b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B78u;
            // 0x309b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b78) {
            ctx->pc = 0x309B88u;
            goto label_309b88;
        }
    }
    ctx->pc = 0x309B80u;
    // 0x309b80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x309B80u;
    {
        const bool branch_taken_0x309b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B80u;
            // 0x309b84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b80) {
            ctx->pc = 0x309BB8u;
            goto label_309bb8;
        }
    }
    ctx->pc = 0x309B88u;
label_309b88:
    // 0x309b88: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x309b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x309b8c: 0x28c22800  slti        $v0, $a2, 0x2800
    ctx->pc = 0x309b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10240) ? 1 : 0);
    // 0x309b90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309B90u;
    {
        const bool branch_taken_0x309b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B90u;
            // 0x309b94: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b90) {
            ctx->pc = 0x309BA0u;
            goto label_309ba0;
        }
    }
    ctx->pc = 0x309B98u;
    // 0x309b98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x309B98u;
    {
        const bool branch_taken_0x309b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B98u;
            // 0x309b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b98) {
            ctx->pc = 0x309BB4u;
            goto label_309bb4;
        }
    }
    ctx->pc = 0x309BA0u;
label_309ba0:
    // 0x309ba0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x309ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x309ba4: 0xc049c18  jal         func_127060
    ctx->pc = 0x309BA4u;
    SET_GPR_U32(ctx, 31, 0x309BACu);
    ctx->pc = 0x309BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309BA4u;
            // 0x309ba8: 0x2484b4c0  addiu       $a0, $a0, -0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309BACu; }
        if (ctx->pc != 0x309BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309BACu; }
        if (ctx->pc != 0x309BACu) { return; }
    }
    ctx->pc = 0x309BACu;
label_309bac:
    // 0x309bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309bb0: 0xaf82a1a4  sw          $v0, -0x5E5C($gp)
    ctx->pc = 0x309bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943140), GPR_U32(ctx, 2));
label_309bb4:
    // 0x309bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_309bb8:
    // 0x309bb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x309bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x309bbc: 0x34210020  ori         $at, $at, 0x20
    ctx->pc = 0x309bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32);
    // 0x309bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x309BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309BC0u;
            // 0x309bc4: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309BC8u;
}
