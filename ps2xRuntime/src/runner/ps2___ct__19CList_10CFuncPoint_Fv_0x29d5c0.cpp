#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__19CList<10CFuncPoint>Fv
// Address: 0x29d5c0 - 0x29d608
void ps2___ct__19CList_10CFuncPoint_Fv_0x29d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__19CList_10CFuncPoint_Fv_0x29d5c0");
#endif

    switch (ctx->pc) {
        case 0x29d5c0u: goto label_29d5c0;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5c8u: goto label_29d5c8;
        case 0x29d5ccu: goto label_29d5cc;
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d5d8u: goto label_29d5d8;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5e0u: goto label_29d5e0;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d5e8u: goto label_29d5e8;
        case 0x29d5ecu: goto label_29d5ec;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        default: break;
    }

    ctx->pc = 0x29d5c0u;

label_29d5c0:
    // 0x29d5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d5c4:
    // 0x29d5c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29d5c8:
    // 0x29d5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29d5cc:
    // 0x29d5cc: 0x24426220  addiu       $v0, $v0, 0x6220
    ctx->pc = 0x29d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25120));
label_29d5d0:
    // 0x29d5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d5d4:
    // 0x29d5d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d5d8:
    // 0x29d5d8: 0xac8201d0  sw          $v0, 0x1D0($a0)
    ctx->pc = 0x29d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
label_29d5dc:
    // 0x29d5dc: 0xc04d924  jal         func_136490
label_29d5e0:
    if (ctx->pc == 0x29D5E0u) {
        ctx->pc = 0x29D5E0u;
            // 0x29d5e0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x29D5E4u;
        goto label_29d5e4;
    }
    ctx->pc = 0x29D5DCu;
    SET_GPR_U32(ctx, 31, 0x29D5E4u);
    ctx->pc = 0x29D5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D5DCu;
            // 0x29d5e0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D5E4u; }
        if (ctx->pc != 0x29D5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D5E4u; }
        if (ctx->pc != 0x29D5E4u) { return; }
    }
    ctx->pc = 0x29D5E4u;
label_29d5e4:
    // 0x29d5e4: 0x8e1901d0  lw          $t9, 0x1D0($s0)
    ctx->pc = 0x29d5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_29d5e8:
    // 0x29d5e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29d5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29d5ec:
    // 0x29d5ec: 0x320f809  jalr        $t9
label_29d5f0:
    if (ctx->pc == 0x29D5F0u) {
        ctx->pc = 0x29D5F0u;
            // 0x29d5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D5F4u;
        goto label_29d5f4;
    }
    ctx->pc = 0x29D5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D5F4u);
        ctx->pc = 0x29D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D5ECu;
            // 0x29d5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29D5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29D5F4u; }
            if (ctx->pc != 0x29D5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x29D5F4u;
label_29d5f4:
    // 0x29d5f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29d5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d5f8:
    // 0x29d5f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d5fc:
    // 0x29d5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d600:
    // 0x29d600: 0x3e00008  jr          $ra
label_29d604:
    if (ctx->pc == 0x29D604u) {
        ctx->pc = 0x29D604u;
            // 0x29d604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29D608u;
        goto label_fallthrough_0x29d600;
    }
    ctx->pc = 0x29D600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D600u;
            // 0x29d604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29d600:
    ctx->pc = 0x29D608u;
}
