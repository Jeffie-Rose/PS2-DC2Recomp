#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgExitSubGame__Fv
// Address: 0x304240 - 0x3042bc
void sgExitSubGame__Fv_0x304240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgExitSubGame__Fv_0x304240");
#endif

    switch (ctx->pc) {
        case 0x304254u: goto label_304254;
        case 0x3042a0u: goto label_3042a0;
        default: break;
    }

    ctx->pc = 0x304240u;

    // 0x304240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30424c: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x30424Cu;
    SET_GPR_U32(ctx, 31, 0x304254u);
    ctx->pc = 0x304250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30424Cu;
            // 0x304250: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304254u; }
        if (ctx->pc != 0x304254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304254u; }
        if (ctx->pc != 0x304254u) { return; }
    }
    ctx->pc = 0x304254u;
label_304254:
    // 0x304254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304254u;
    {
        const bool branch_taken_0x304254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304254u;
            // 0x304258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304254) {
            ctx->pc = 0x304264u;
            goto label_304264;
        }
    }
    ctx->pc = 0x30425Cu;
    // 0x30425c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30425Cu;
    {
        const bool branch_taken_0x30425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30425Cu;
            // 0x304260: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30425c) {
            ctx->pc = 0x3042B0u;
            goto label_3042b0;
        }
    }
    ctx->pc = 0x304264u;
label_304264:
    // 0x304264: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x304264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x304268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30426c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30426Cu;
    {
        const bool branch_taken_0x30426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30426Cu;
            // 0x304270: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30426c) {
            ctx->pc = 0x3042A8u;
            goto label_3042a8;
        }
    }
    ctx->pc = 0x304274u;
    // 0x304274: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x304274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304278: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x304278u;
    {
        const bool branch_taken_0x304278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304278u;
            // 0x30427c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304278) {
            ctx->pc = 0x3042A4u;
            goto label_3042a4;
        }
    }
    ctx->pc = 0x304280u;
    // 0x304280: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304280u;
    {
        const bool branch_taken_0x304280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304280u;
            // 0x304284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304280) {
            ctx->pc = 0x3042A4u;
            goto label_3042a4;
        }
    }
    ctx->pc = 0x304288u;
    // 0x304288: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304288u;
    {
        const bool branch_taken_0x304288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304288u;
            // 0x30428c: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304288) {
            ctx->pc = 0x304298u;
            goto label_304298;
        }
    }
    ctx->pc = 0x304290u;
    // 0x304290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x304290u;
    {
        const bool branch_taken_0x304290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304290) {
            ctx->pc = 0x3042A4u;
            goto label_3042a4;
        }
    }
    ctx->pc = 0x304298u;
label_304298:
    // 0x304298: 0xc0bf714  jal         func_2FDC50
    ctx->pc = 0x304298u;
    SET_GPR_U32(ctx, 31, 0x3042A0u);
    ctx->pc = 0x30429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304298u;
            // 0x30429c: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC50u;
    if (runtime->hasFunction(0x2FDC50u)) {
        auto targetFn = runtime->lookupFunction(0x2FDC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042A0u; }
        if (ctx->pc != 0x3042A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitFishing__FP11SubGameInfo_0x2fdc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042A0u; }
        if (ctx->pc != 0x3042A0u) { return; }
    }
    ctx->pc = 0x3042A0u;
label_3042a0:
    // 0x3042a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3042a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3042a4:
    // 0x3042a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3042a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3042a8:
    // 0x3042a8: 0xaf80a104  sw          $zero, -0x5EFC($gp)
    ctx->pc = 0x3042a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 0));
    // 0x3042ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3042acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3042b0:
    // 0x3042b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3042b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3042b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3042B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3042B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042B4u;
            // 0x3042b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3042BCu;
}
