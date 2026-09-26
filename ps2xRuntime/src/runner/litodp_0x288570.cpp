#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: litodp
// Address: 0x288570 - 0x288628
void litodp_0x288570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x288570");
#endif

    switch (ctx->pc) {
        case 0x2885f0u: goto label_2885f0;
        case 0x28861cu: goto label_28861c;
        default: break;
    }

    ctx->pc = 0x288570u;

    // 0x288570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288574: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288578: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x28857c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x288580: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x288580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x288584: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288584u;
    {
        const bool branch_taken_0x288584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288584u;
            // 0x288588: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288584) {
            ctx->pc = 0x288598u;
            goto label_288598;
        }
    }
    ctx->pc = 0x28858Cu;
    // 0x28858c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288590: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x288590u;
    {
        const bool branch_taken_0x288590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288590u;
            // 0x288594: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288590) {
            ctx->pc = 0x288614u;
            goto label_288614;
        }
    }
    ctx->pc = 0x288598u;
label_288598:
    // 0x288598: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x28859c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28859Cu;
    {
        const bool branch_taken_0x28859c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28859Cu;
            // 0x2885a0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28859c) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x2885A4u;
    // 0x2885a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2885a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2885a8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2885A8u;
    {
        const bool branch_taken_0x2885a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2885ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2885A8u;
            // 0x2885ac: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885a8) {
            ctx->pc = 0x2885C0u;
            goto label_2885c0;
        }
    }
    ctx->pc = 0x2885B0u;
    // 0x2885b0: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x2885b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x2885b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2885b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2885b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2885B8u;
    {
        const bool branch_taken_0x2885b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2885B8u;
            // 0x2885bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885b8) {
            ctx->pc = 0x288620u;
            goto label_288620;
        }
    }
    ctx->pc = 0x2885C0u;
label_2885c0:
    // 0x2885c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2885C0u;
    {
        const bool branch_taken_0x2885c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2885C0u;
            // 0x2885c4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885c0) {
            ctx->pc = 0x2885CCu;
            goto label_2885cc;
        }
    }
    ctx->pc = 0x2885C8u;
label_2885c8:
    // 0x2885c8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2885c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2885cc:
    // 0x2885cc: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x2885ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2885d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2885d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2885d4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2885d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2885d8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2885d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2885dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2885DCu;
    {
        const bool branch_taken_0x2885dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2885DCu;
            // 0x2885e0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885dc) {
            ctx->pc = 0x288614u;
            goto label_288614;
        }
    }
    ctx->pc = 0x2885E4u;
    // 0x2885e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2885e8: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2885e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2885ec: 0x0  nop
    ctx->pc = 0x2885ecu;
    // NOP
label_2885f0:
    // 0x2885f0: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x2885f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x2885f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2885f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2885f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2885f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885fc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2885fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288600: 0x0  nop
    ctx->pc = 0x288600u;
    // NOP
    // 0x288604: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x288604u;
    {
        const bool branch_taken_0x288604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288604) {
            ctx->pc = 0x2885F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2885f0;
        }
    }
    ctx->pc = 0x28860Cu;
    // 0x28860c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x28860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x288610: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x288610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_288614:
    // 0x288614: 0xc0a1eca  jal         func_287B28
    ctx->pc = 0x288614u;
    SET_GPR_U32(ctx, 31, 0x28861Cu);
    ctx->pc = 0x288618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288614u;
            // 0x288618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287B28u;
    if (runtime->hasFunction(0x287B28u)) {
        auto targetFn = runtime->lookupFunction(0x287B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28861Cu; }
        if (ctx->pc != 0x28861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x287b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28861Cu; }
        if (ctx->pc != 0x28861Cu) { return; }
    }
    ctx->pc = 0x28861Cu;
label_28861c:
    // 0x28861c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28861cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_288620:
    // 0x288620: 0x3e00008  jr          $ra
    ctx->pc = 0x288620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288620u;
            // 0x288624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288628u;
}
