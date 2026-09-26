#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSelectKey__12CMenuKeyFuncFv
// Address: 0x23e030 - 0x23e0f4
void CheckSelectKey__12CMenuKeyFuncFv_0x23e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSelectKey__12CMenuKeyFuncFv_0x23e030");
#endif

    switch (ctx->pc) {
        case 0x23e050u: goto label_23e050;
        case 0x23e074u: goto label_23e074;
        case 0x23e098u: goto label_23e098;
        case 0x23e0bcu: goto label_23e0bc;
        default: break;
    }

    ctx->pc = 0x23e030u;

    // 0x23e030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e034: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x23e038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e044: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e048: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E048u;
    SET_GPR_U32(ctx, 31, 0x23E050u);
    ctx->pc = 0x23E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E048u;
            // 0x23e04c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E050u; }
        if (ctx->pc != 0x23E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E050u; }
        if (ctx->pc != 0x23E050u) { return; }
    }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E050u;
    {
        const bool branch_taken_0x23e050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E050u;
            // 0x23e054: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e050) {
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23E058u;
    // 0x23e058: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e05c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23e060: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E060u;
            // 0x23e064: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E088u;
            goto label_23e088;
        }
    }
    ctx->pc = 0x23E068u;
label_23e068:
    // 0x23e068: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23e06c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E06Cu;
    SET_GPR_U32(ctx, 31, 0x23E074u);
    ctx->pc = 0x23E070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E06Cu;
            // 0x23e070: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E074u; }
        if (ctx->pc != 0x23E074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E074u; }
        if (ctx->pc != 0x23E074u) { return; }
    }
    ctx->pc = 0x23E074u;
label_23e074:
    // 0x23e074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E074u;
    {
        const bool branch_taken_0x23e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e074) {
            ctx->pc = 0x23E088u;
            goto label_23e088;
        }
    }
    ctx->pc = 0x23E07Cu;
    // 0x23e07c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e080: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23e080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23e084: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23e088:
    // 0x23e088: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e08c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23e08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23e090: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E090u;
    SET_GPR_U32(ctx, 31, 0x23E098u);
    ctx->pc = 0x23E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E090u;
            // 0x23e094: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E098u; }
        if (ctx->pc != 0x23E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E098u; }
        if (ctx->pc != 0x23E098u) { return; }
    }
    ctx->pc = 0x23E098u;
label_23e098:
    // 0x23e098: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E098u;
    {
        const bool branch_taken_0x23e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E098u;
            // 0x23e09c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e098) {
            ctx->pc = 0x23E0B0u;
            goto label_23e0b0;
        }
    }
    ctx->pc = 0x23E0A0u;
    // 0x23e0a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e0a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x23e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x23e0a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23E0A8u;
    {
        const bool branch_taken_0x23e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0A8u;
            // 0x23e0ac: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0a8) {
            ctx->pc = 0x23E0D0u;
            goto label_23e0d0;
        }
    }
    ctx->pc = 0x23E0B0u;
label_23e0b0:
    // 0x23e0b0: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x23e0b4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E0B4u;
    SET_GPR_U32(ctx, 31, 0x23E0BCu);
    ctx->pc = 0x23E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0B4u;
            // 0x23e0b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0BCu; }
        if (ctx->pc != 0x23E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0BCu; }
        if (ctx->pc != 0x23E0BCu) { return; }
    }
    ctx->pc = 0x23E0BCu;
label_23e0bc:
    // 0x23e0bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E0BCu;
    {
        const bool branch_taken_0x23e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e0bc) {
            ctx->pc = 0x23E0D0u;
            goto label_23e0d0;
        }
    }
    ctx->pc = 0x23E0C4u;
    // 0x23e0c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e0c8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x23e0cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23e0d0:
    // 0x23e0d0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x23e0d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23e0d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E0D4u;
    {
        const bool branch_taken_0x23e0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e0d4) {
            ctx->pc = 0x23E0E0u;
            goto label_23e0e0;
        }
    }
    ctx->pc = 0x23E0DCu;
    // 0x23e0dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_23e0e0:
    // 0x23e0e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e0e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23E0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0ECu;
            // 0x23e0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E0F4u;
}
