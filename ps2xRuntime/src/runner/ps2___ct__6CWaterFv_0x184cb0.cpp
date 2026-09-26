#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__6CWaterFv
// Address: 0x184cb0 - 0x184d38
void ps2___ct__6CWaterFv_0x184cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__6CWaterFv_0x184cb0");
#endif

    switch (ctx->pc) {
        case 0x184cb0u: goto label_184cb0;
        case 0x184cb4u: goto label_184cb4;
        case 0x184cb8u: goto label_184cb8;
        case 0x184cbcu: goto label_184cbc;
        case 0x184cc0u: goto label_184cc0;
        case 0x184cc4u: goto label_184cc4;
        case 0x184cc8u: goto label_184cc8;
        case 0x184cccu: goto label_184ccc;
        case 0x184cd0u: goto label_184cd0;
        case 0x184cd4u: goto label_184cd4;
        case 0x184cd8u: goto label_184cd8;
        case 0x184cdcu: goto label_184cdc;
        case 0x184ce0u: goto label_184ce0;
        case 0x184ce4u: goto label_184ce4;
        case 0x184ce8u: goto label_184ce8;
        case 0x184cecu: goto label_184cec;
        case 0x184cf0u: goto label_184cf0;
        case 0x184cf4u: goto label_184cf4;
        case 0x184cf8u: goto label_184cf8;
        case 0x184cfcu: goto label_184cfc;
        case 0x184d00u: goto label_184d00;
        case 0x184d04u: goto label_184d04;
        case 0x184d08u: goto label_184d08;
        case 0x184d0cu: goto label_184d0c;
        case 0x184d10u: goto label_184d10;
        case 0x184d14u: goto label_184d14;
        case 0x184d18u: goto label_184d18;
        case 0x184d1cu: goto label_184d1c;
        case 0x184d20u: goto label_184d20;
        case 0x184d24u: goto label_184d24;
        case 0x184d28u: goto label_184d28;
        case 0x184d2cu: goto label_184d2c;
        case 0x184d30u: goto label_184d30;
        case 0x184d34u: goto label_184d34;
        default: break;
    }

    ctx->pc = 0x184cb0u;

label_184cb0:
    // 0x184cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_184cb4:
    // 0x184cb4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x184cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_184cb8:
    // 0x184cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_184cbc:
    // 0x184cbc: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x184cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_184cc0:
    // 0x184cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184cc4:
    // 0x184cc4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x184cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_184cc8:
    // 0x184cc8: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x184cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_184ccc:
    // 0x184ccc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x184cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_184cd0:
    // 0x184cd0: 0x320f809  jalr        $t9
label_184cd4:
    if (ctx->pc == 0x184CD4u) {
        ctx->pc = 0x184CD4u;
            // 0x184cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184CD8u;
        goto label_184cd8;
    }
    ctx->pc = 0x184CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x184CD8u);
        ctx->pc = 0x184CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CD0u;
            // 0x184cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184CD8u; }
            if (ctx->pc != 0x184CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x184CD8u;
label_184cd8:
    // 0x184cd8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x184cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_184cdc:
    // 0x184cdc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x184cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_184ce0:
    // 0x184ce0: 0x24425990  addiu       $v0, $v0, 0x5990
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22928));
label_184ce4:
    // 0x184ce4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x184ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_184ce8:
    // 0x184ce8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x184ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_184cec:
    // 0x184cec: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x184cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_184cf0:
    // 0x184cf0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x184cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_184cf4:
    // 0x184cf4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x184cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_184cf8:
    // 0x184cf8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x184cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_184cfc:
    // 0x184cfc: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x184cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
label_184d00:
    // 0x184d00: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x184d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_184d04:
    // 0x184d04: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x184d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_184d08:
    // 0x184d08: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x184d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
label_184d0c:
    // 0x184d0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184d10:
    // 0x184d10: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x184d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_184d14:
    // 0x184d14: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x184d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_184d18:
    // 0x184d18: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x184d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
label_184d1c:
    // 0x184d1c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x184d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_184d20:
    // 0x184d20: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x184d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_184d24:
    // 0x184d24: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x184d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_184d28:
    // 0x184d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184d2c:
    // 0x184d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184d30:
    // 0x184d30: 0x3e00008  jr          $ra
label_184d34:
    if (ctx->pc == 0x184D34u) {
        ctx->pc = 0x184D34u;
            // 0x184d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x184D38u;
        goto label_fallthrough_0x184d30;
    }
    ctx->pc = 0x184D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D30u;
            // 0x184d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x184d30:
    ctx->pc = 0x184D38u;
}
