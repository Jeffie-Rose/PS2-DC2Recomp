#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapRECT__FP9SPI_STACKi
// Address: 0x2a5730 - 0x2a57e0
void emapRECT__FP9SPI_STACKi_0x2a5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapRECT__FP9SPI_STACKi_0x2a5730");
#endif

    switch (ctx->pc) {
        case 0x2a57a0u: goto label_2a57a0;
        case 0x2a57b4u: goto label_2a57b4;
        default: break;
    }

    ctx->pc = 0x2a5730u;

    // 0x2a5730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a573c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5740: 0x8f869a6c  lw          $a2, -0x6594($gp)
    ctx->pc = 0x2a5740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941292)));
    // 0x2a5744: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5744u;
    {
        const bool branch_taken_0x2a5744 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5744u;
            // 0x2a5748: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5744) {
            ctx->pc = 0x2A5754u;
            goto label_2a5754;
        }
    }
    ctx->pc = 0x2A574Cu;
    // 0x2a574c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A574Cu;
    {
        const bool branch_taken_0x2a574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A574Cu;
            // 0x2a5750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a574c) {
            ctx->pc = 0x2A57CCu;
            goto label_2a57cc;
        }
    }
    ctx->pc = 0x2A5754u;
label_2a5754:
    // 0x2a5754: 0x8f849a74  lw          $a0, -0x658C($gp)
    ctx->pc = 0x2a5754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941300)));
    // 0x2a5758: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5758u;
    {
        const bool branch_taken_0x2a5758 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5758u;
            // 0x2a575c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5758) {
            ctx->pc = 0x2A5774u;
            goto label_2a5774;
        }
    }
    ctx->pc = 0x2A5760u;
    // 0x2a5760: 0x8f829a70  lw          $v0, -0x6590($gp)
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941296)));
    // 0x2a5764: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a5764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a5768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5768u;
    {
        const bool branch_taken_0x2a5768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5768) {
            ctx->pc = 0x2A577Cu;
            goto label_2a577c;
        }
    }
    ctx->pc = 0x2A5770u;
    // 0x2a5770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a5770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5774:
    // 0x2a5774: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A5774u;
    {
        const bool branch_taken_0x2a5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5774u;
            // 0x2a5778: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5774) {
            ctx->pc = 0x2A57D0u;
            goto label_2a57d0;
        }
    }
    ctx->pc = 0x2A577Cu;
label_2a577c:
    // 0x2a577c: 0x8f829a68  lw          $v0, -0x6598($gp)
    ctx->pc = 0x2a577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941288)));
    // 0x2a5780: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2a5780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a5784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a5784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a5788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a5788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a578c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a578cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a5790: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a5794: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2a5798: 0xc051928  jal         func_1464A0
    ctx->pc = 0x2A5798u;
    SET_GPR_U32(ctx, 31, 0x2A57A0u);
    ctx->pc = 0x2A579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5798u;
            // 0x2a579c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57A0u; }
        if (ctx->pc != 0x2A57A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57A0u; }
        if (ctx->pc != 0x2A57A0u) { return; }
    }
    ctx->pc = 0x2A57A0u;
label_2a57a0:
    // 0x2a57a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a57a4: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x2a57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2a57a8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2a57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2a57ac: 0xc051928  jal         func_1464A0
    ctx->pc = 0x2A57ACu;
    SET_GPR_U32(ctx, 31, 0x2A57B4u);
    ctx->pc = 0x2A57B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A57ACu;
            // 0x2a57b0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57B4u; }
        if (ctx->pc != 0x2A57B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57B4u; }
        if (ctx->pc != 0x2A57B4u) { return; }
    }
    ctx->pc = 0x2A57B4u;
label_2a57b4:
    // 0x2a57b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a57b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a57bc: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2a57c0: 0x8f839a74  lw          $v1, -0x658C($gp)
    ctx->pc = 0x2a57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941300)));
    // 0x2a57c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a57c8: 0xaf839a74  sw          $v1, -0x658C($gp)
    ctx->pc = 0x2a57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 3));
label_2a57cc:
    // 0x2a57cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a57ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a57d0:
    // 0x2a57d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a57d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a57d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a57d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a57d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A57D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A57DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A57D8u;
            // 0x2a57dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A57E0u;
}
