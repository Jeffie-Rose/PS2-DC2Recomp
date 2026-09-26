#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGaijiImg__Fv
// Address: 0x2d86f0 - 0x2d875c
void LoadGaijiImg__Fv_0x2d86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGaijiImg__Fv_0x2d86f0");
#endif

    switch (ctx->pc) {
        case 0x2d872cu: goto label_2d872c;
        case 0x2d874cu: goto label_2d874c;
        default: break;
    }

    ctx->pc = 0x2d86f0u;

    // 0x2d86f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d86f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d86f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d86fc: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2d86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2d8700: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8700u;
    {
        const bool branch_taken_0x2d8700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8700) {
            ctx->pc = 0x2D8734u;
            goto label_2d8734;
        }
    }
    ctx->pc = 0x2D8708u;
    // 0x2d8708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8708u;
    {
        const bool branch_taken_0x2d8708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D870Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8708u;
            // 0x2d870c: 0x3c0501f1  lui         $a1, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8708) {
            ctx->pc = 0x2D8718u;
            goto label_2d8718;
        }
    }
    ctx->pc = 0x2D8710u;
    // 0x2d8710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8710u;
    {
        const bool branch_taken_0x2d8710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8710) {
            ctx->pc = 0x2D8734u;
            goto label_2d8734;
        }
    }
    ctx->pc = 0x2D8718u;
label_2d8718:
    // 0x2d8718: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d871c: 0x24a568b0  addiu       $a1, $a1, 0x68B0
    ctx->pc = 0x2d871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26800));
    // 0x2d8720: 0x248409e0  addiu       $a0, $a0, 0x9E0
    ctx->pc = 0x2d8720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2528));
    // 0x2d8724: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D8724u;
    SET_GPR_U32(ctx, 31, 0x2D872Cu);
    ctx->pc = 0x2D8728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8724u;
            // 0x2d8728: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D872Cu; }
        if (ctx->pc != 0x2D872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D872Cu; }
        if (ctx->pc != 0x2D872Cu) { return; }
    }
    ctx->pc = 0x2D872Cu;
label_2d872c:
    // 0x2d872c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D872Cu;
    {
        const bool branch_taken_0x2d872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D872Cu;
            // 0x2d8730: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d872c) {
            ctx->pc = 0x2D8750u;
            goto label_2d8750;
        }
    }
    ctx->pc = 0x2D8734u;
label_2d8734:
    // 0x2d8734: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2d8734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2d8738: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d873c: 0x24a568b0  addiu       $a1, $a1, 0x68B0
    ctx->pc = 0x2d873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26800));
    // 0x2d8740: 0x24840a00  addiu       $a0, $a0, 0xA00
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2560));
    // 0x2d8744: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D8744u;
    SET_GPR_U32(ctx, 31, 0x2D874Cu);
    ctx->pc = 0x2D8748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8744u;
            // 0x2d8748: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D874Cu; }
        if (ctx->pc != 0x2D874Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D874Cu; }
        if (ctx->pc != 0x2D874Cu) { return; }
    }
    ctx->pc = 0x2D874Cu;
label_2d874c:
    // 0x2d874c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2d874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2d8750:
    // 0x2d8750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8754: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8754u;
            // 0x2d8758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D875Cu;
}
