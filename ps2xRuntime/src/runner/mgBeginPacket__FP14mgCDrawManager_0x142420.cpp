#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgBeginPacket__FP14mgCDrawManager
// Address: 0x142420 - 0x1424f4
void mgBeginPacket__FP14mgCDrawManager_0x142420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgBeginPacket__FP14mgCDrawManager_0x142420");
#endif

    switch (ctx->pc) {
        case 0x142460u: goto label_142460;
        case 0x1424e4u: goto label_1424e4;
        default: break;
    }

    ctx->pc = 0x142420u;

    // 0x142420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14242c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14242cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142430: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142430u;
    {
        const bool branch_taken_0x142430 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x142430) {
            ctx->pc = 0x142440u;
            goto label_142440;
        }
    }
    ctx->pc = 0x142438u;
    // 0x142438: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x142438u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x14243c: 0x261020e0  addiu       $s0, $s0, 0x20E0
    ctx->pc = 0x14243cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8416));
label_142440:
    // 0x142440: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x142444: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x142448: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x14244c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14244cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x142450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142454: 0xaf828774  sw          $v0, -0x788C($gp)
    ctx->pc = 0x142454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 2));
    // 0x142458: 0xc041aca  jal         func_106B28
    ctx->pc = 0x142458u;
    SET_GPR_U32(ctx, 31, 0x142460u);
    ctx->pc = 0x14245Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142458u;
            // 0x14245c: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B28u;
    if (runtime->hasFunction(0x106B28u)) {
        auto targetFn = runtime->lookupFunction(0x106B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142460u; }
        if (ctx->pc != 0x142460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReset_0x106b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142460u; }
        if (ctx->pc != 0x142460u) { return; }
    }
    ctx->pc = 0x142460u;
label_142460:
    // 0x142460: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x142460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x142464: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x142464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x142468: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x14246c: 0x24e723d0  addiu       $a3, $a3, 0x23D0
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9168));
    // 0x142470: 0x24c62430  addiu       $a2, $a2, 0x2430
    ctx->pc = 0x142470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9264));
    // 0x142474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14247c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x142480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x142484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x142488: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x142488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14248c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x14248cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x142490: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x142490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x142494: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x142494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x142498: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x142498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14249c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1424a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1424a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1424a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1424a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1424a8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1424a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1424ac: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1424acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1424b0: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x1424b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x1424b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1424b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1424b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1424bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1424bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1424c0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1424c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1424c4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1424c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1424c8: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x1424c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x1424cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1424ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1424d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1424d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1424d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1424d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1424dc: 0xc04d468  jal         func_1351A0
    ctx->pc = 0x1424DCu;
    SET_GPR_U32(ctx, 31, 0x1424E4u);
    ctx->pc = 0x1424E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1424DCu;
            // 0x1424e0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1351A0u;
    if (runtime->hasFunction(0x1351A0u)) {
        auto targetFn = runtime->lookupFunction(0x1351A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424E4u; }
        if (ctx->pc != 0x1424E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSortTable__14mgCDrawManagerFi_0x1351a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424E4u; }
        if (ctx->pc != 0x1424E4u) { return; }
    }
    ctx->pc = 0x1424E4u;
label_1424e4:
    // 0x1424e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1424e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1424e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1424e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1424ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1424ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1424F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1424ECu;
            // 0x1424f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1424F4u;
}
