#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iRotateThreadReadyQueue
// Address: 0x111168 - 0x1111e4
void iRotateThreadReadyQueue_0x111168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iRotateThreadReadyQueue_0x111168");
#endif

    switch (ctx->pc) {
        case 0x1111d0u: goto label_1111d0;
        default: break;
    }

    ctx->pc = 0x111168u;

    // 0x111168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11116c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111174: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x111174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x111178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111178u;
    {
        const bool branch_taken_0x111178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11117Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111178u;
            // 0x11117c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111178) {
            ctx->pc = 0x111190u;
            goto label_111190;
        }
    }
    ctx->pc = 0x111180u;
    // 0x111180: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x111180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x111184: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x111184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x111188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111188u;
    {
        const bool branch_taken_0x111188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111188u;
            // 0x11118c: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111188) {
            ctx->pc = 0x111198u;
            goto label_111198;
        }
    }
    ctx->pc = 0x111190u;
label_111190:
    // 0x111190: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x111190u;
    {
        const bool branch_taken_0x111190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111190u;
            // 0x111194: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111190) {
            ctx->pc = 0x1111D4u;
            goto label_1111d4;
        }
    }
    ctx->pc = 0x111198u;
label_111198:
    // 0x111198: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x111198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x11119c: 0x24639248  addiu       $v1, $v1, -0x6DB8
    ctx->pc = 0x11119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939208));
    // 0x1111a0: 0x8ca49240  lw          $a0, -0x6DC0($a1)
    ctx->pc = 0x1111a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939200)));
    // 0x1111a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1111a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1111a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1111ac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1111acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1111b0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1111b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1111b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1111b8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1111bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1111bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1111c0: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1111c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1111c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1111c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111c8: 0xc044044  jal         func_110110
    ctx->pc = 0x1111C8u;
    SET_GPR_U32(ctx, 31, 0x1111D0u);
    ctx->pc = 0x1111CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1111C8u;
            // 0x1111cc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110110u;
    if (runtime->hasFunction(0x110110u)) {
        auto targetFn = runtime->lookupFunction(0x110110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1111D0u; }
        if (ctx->pc != 0x1111D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x110110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1111D0u; }
        if (ctx->pc != 0x1111D0u) { return; }
    }
    ctx->pc = 0x1111D0u;
label_1111d0:
    // 0x1111d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1111d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1111d4:
    // 0x1111d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1111d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1111d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1111d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1111dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1111DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1111E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111DCu;
            // 0x1111e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1111E4u;
}
