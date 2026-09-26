#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pad_button_read__FP10PAD_STATUSii
// Address: 0x14a3d0 - 0x14a488
void pad_button_read__FP10PAD_STATUSii_0x14a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pad_button_read__FP10PAD_STATUSii_0x14a3d0");
#endif

    switch (ctx->pc) {
        case 0x14a40cu: goto label_14a40c;
        default: break;
    }

    ctx->pc = 0x14a3d0u;

    // 0x14a3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14a3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14a3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a3e0: 0x838288c4  lb          $v0, -0x773C($gp)
    ctx->pc = 0x14a3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936772)));
    // 0x14a3e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A3E4u;
    {
        const bool branch_taken_0x14a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3E4u;
            // 0x14a3e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3e4) {
            ctx->pc = 0x14A3F8u;
            goto label_14a3f8;
        }
    }
    ctx->pc = 0x14A3ECu;
    // 0x14a3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a3f0: 0xa78088c0  sh          $zero, -0x7740($gp)
    ctx->pc = 0x14a3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936768), (uint16_t)GPR_U32(ctx, 0));
    // 0x14a3f4: 0xa38288c4  sb          $v0, -0x773C($gp)
    ctx->pc = 0x14a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936772), (uint8_t)GPR_U32(ctx, 2));
label_14a3f8:
    // 0x14a3f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14a3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a400: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a404: 0xc0485b6  jal         func_1216D8
    ctx->pc = 0x14A404u;
    SET_GPR_U32(ctx, 31, 0x14A40Cu);
    ctx->pc = 0x14A408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A404u;
            // 0x14a408: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1216D8u;
    if (runtime->hasFunction(0x1216D8u)) {
        auto targetFn = runtime->lookupFunction(0x1216D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A40Cu; }
        if (ctx->pc != 0x14A40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1216d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A40Cu; }
        if (ctx->pc != 0x14A40Cu) { return; }
    }
    ctx->pc = 0x14A40Cu;
label_14a40c:
    // 0x14a40c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A40Cu;
    {
        const bool branch_taken_0x14a40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A40Cu;
            // 0x14a410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a40c) {
            ctx->pc = 0x14A41Cu;
            goto label_14a41c;
        }
    }
    ctx->pc = 0x14A414u;
    // 0x14a414: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14A414u;
    {
        const bool branch_taken_0x14a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A414u;
            // 0x14a418: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a414) {
            ctx->pc = 0x14A478u;
            goto label_14a478;
        }
    }
    ctx->pc = 0x14A41Cu;
label_14a41c:
    // 0x14a41c: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x14a41cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a420: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A420u;
    {
        const bool branch_taken_0x14a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A420u;
            // 0x14a424: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a420) {
            ctx->pc = 0x14A474u;
            goto label_14a474;
        }
    }
    ctx->pc = 0x14A428u;
    // 0x14a428: 0x93a30032  lbu         $v1, 0x32($sp)
    ctx->pc = 0x14a428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x14a42c: 0x93a20033  lbu         $v0, 0x33($sp)
    ctx->pc = 0x14a42cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 51)));
    // 0x14a430: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14a434: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14a438: 0x3843ffff  xori        $v1, $v0, 0xFFFF
    ctx->pc = 0x14a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x14a43c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x14a43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14a440: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a444: 0x93a20034  lbu         $v0, 0x34($sp)
    ctx->pc = 0x14a444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x14a448: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x14a448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x14a44c: 0x93a20035  lbu         $v0, 0x35($sp)
    ctx->pc = 0x14a44cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 53)));
    // 0x14a450: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14a450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14a454: 0x93a20036  lbu         $v0, 0x36($sp)
    ctx->pc = 0x14a454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 54)));
    // 0x14a458: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x14a45c: 0x93a20037  lbu         $v0, 0x37($sp)
    ctx->pc = 0x14a45cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 55)));
    // 0x14a460: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14a460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14a464: 0x93a20031  lbu         $v0, 0x31($sp)
    ctx->pc = 0x14a464u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x14a468: 0xa78388c0  sh          $v1, -0x7740($gp)
    ctx->pc = 0x14a468u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936768), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a46c: 0x28903  sra         $s1, $v0, 4
    ctx->pc = 0x14a46cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
    // 0x14a470: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14a470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a474:
    // 0x14a474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14a474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14a478:
    // 0x14a478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a480: 0x3e00008  jr          $ra
    ctx->pc = 0x14A480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A480u;
            // 0x14a484: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A488u;
}
