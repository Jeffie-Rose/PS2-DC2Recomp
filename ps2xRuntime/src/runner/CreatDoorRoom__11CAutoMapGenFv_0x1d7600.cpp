#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatDoorRoom__11CAutoMapGenFv
// Address: 0x1d7600 - 0x1d78c8
void CreatDoorRoom__11CAutoMapGenFv_0x1d7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatDoorRoom__11CAutoMapGenFv_0x1d7600");
#endif

    switch (ctx->pc) {
        case 0x1d7618u: goto label_1d7618;
        case 0x1d765cu: goto label_1d765c;
        case 0x1d7694u: goto label_1d7694;
        case 0x1d76b4u: goto label_1d76b4;
        case 0x1d77b4u: goto label_1d77b4;
        case 0x1d77e0u: goto label_1d77e0;
        case 0x1d77f4u: goto label_1d77f4;
        default: break;
    }

    ctx->pc = 0x1d7600u;

    // 0x1d7600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d760c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d760cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7610: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D7610u;
    SET_GPR_U32(ctx, 31, 0x1D7618u);
    ctx->pc = 0x1D7614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7610u;
            // 0x1d7614: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7618u; }
        if (ctx->pc != 0x1D7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7618u; }
        if (ctx->pc != 0x1D7618u) { return; }
    }
    ctx->pc = 0x1D7618u;
label_1d7618:
    // 0x1d7618: 0x28430032  slti        $v1, $v0, 0x32
    ctx->pc = 0x1d7618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1d761c: 0x146000a6  bnez        $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1D761Cu;
    {
        const bool branch_taken_0x1d761c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D761Cu;
            // 0x1d7620: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d761c) {
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D7624u;
    // 0x1d7624: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7628: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d7628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d762c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d762cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7630: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1d7630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1d7634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7638: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1d7638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1d763c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d763cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7640: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1d7640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1d7644: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1d7644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7648: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1d7648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1d764c: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1d764cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1d7650: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1d7650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1d7654: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D7654u;
    {
        const bool branch_taken_0x1d7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7654u;
            // 0x1d7658: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7654) {
            ctx->pc = 0x1D7790u;
            goto label_1d7790;
        }
    }
    ctx->pc = 0x1D765Cu;
label_1d765c:
    // 0x1d765c: 0x8d2501d4  lw          $a1, 0x1D4($t1)
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x1d7660: 0x14a00049  bnez        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D7660u;
    {
        const bool branch_taken_0x1d7660 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7660) {
            ctx->pc = 0x1D7788u;
            goto label_1d7788;
        }
    }
    ctx->pc = 0x1D7668u;
    // 0x1d7668: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d7668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d766c: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x1d766cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1d7670: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7670u;
    {
        const bool branch_taken_0x1d7670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7670) {
            ctx->pc = 0x1D7680u;
            goto label_1d7680;
        }
    }
    ctx->pc = 0x1D7678u;
    // 0x1d7678: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D7678u;
    {
        const bool branch_taken_0x1d7678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7678) {
            ctx->pc = 0x1D7788u;
            goto label_1d7788;
        }
    }
    ctx->pc = 0x1D7680u;
label_1d7680:
    // 0x1d7680: 0x8d2b01dc  lw          $t3, 0x1DC($t1)
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 476)));
    // 0x1d7684: 0x8d2601e4  lw          $a2, 0x1E4($t1)
    ctx->pc = 0x1d7684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 484)));
    // 0x1d7688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d768c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1D768Cu;
    {
        const bool branch_taken_0x1d768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D768Cu;
            // 0x1d7690: 0x1666821  addu        $t5, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d768c) {
            ctx->pc = 0x1D7768u;
            goto label_1d7768;
        }
    }
    ctx->pc = 0x1D7694u;
label_1d7694:
    // 0x1d7694: 0x0  nop
    ctx->pc = 0x1d7694u;
    // NOP
    // 0x1d7698: 0x8d2a01d8  lw          $t2, 0x1D8($t1)
    ctx->pc = 0x1d7698u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 472)));
    // 0x1d769c: 0x8d2601e0  lw          $a2, 0x1E0($t1)
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 480)));
    // 0x1d76a0: 0xa70c0  sll         $t6, $t2, 3
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d76a4: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x1d76a8: 0x1467821  addu        $t7, $t2, $a2
    ctx->pc = 0x1d76a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1d76ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D76ACu;
    {
        const bool branch_taken_0x1d76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76ACu;
            // 0x1d76b0: 0xe3080  sll         $a2, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76ac) {
            ctx->pc = 0x1D7758u;
            goto label_1d7758;
        }
    }
    ctx->pc = 0x1D76B4u;
label_1d76b4:
    // 0x1d76b4: 0x0  nop
    ctx->pc = 0x1d76b4u;
    // NOP
    // 0x1d76b8: 0x861801b8  lh          $t8, 0x1B8($s0)
    ctx->pc = 0x1d76b8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d76bc: 0x8e0e01cc  lw          $t6, 0x1CC($s0)
    ctx->pc = 0x1d76bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d76c0: 0x178c818  mult        $t9, $t3, $t8
    ctx->pc = 0x1d76c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x1d76c4: 0x19c0c0  sll         $t8, $t9, 3
    ctx->pc = 0x1d76c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1d76c8: 0x319c023  subu        $t8, $t8, $t9
    ctx->pc = 0x1d76c8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x1d76cc: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x1d76d0: 0x1d87021  addu        $t6, $t6, $t8
    ctx->pc = 0x1d76d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x1d76d4: 0x1c6c821  addu        $t9, $t6, $a2
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1d76d8: 0x87380004  lh          $t8, 0x4($t9)
    ctx->pc = 0x1d76d8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x1d76dc: 0x2b0e00e8  slti        $t6, $t8, 0xE8
    ctx->pc = 0x1d76dcu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)232) ? 1 : 0);
    // 0x1d76e0: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D76E0u;
    {
        const bool branch_taken_0x1d76e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D76E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76E0u;
            // 0x1d76e4: 0x2b0100f0  slti        $at, $t8, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76e0) {
            ctx->pc = 0x1D76F8u;
            goto label_1d76f8;
        }
    }
    ctx->pc = 0x1D76E8u;
    // 0x1d76e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D76E8u;
    {
        const bool branch_taken_0x1d76e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d76e8) {
            ctx->pc = 0x1D76F8u;
            goto label_1d76f8;
        }
    }
    ctx->pc = 0x1D76F0u;
    // 0x1d76f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D76F0u;
    {
        const bool branch_taken_0x1d76f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76F0u;
            // 0x1d76f4: 0x24a503e7  addiu       $a1, $a1, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76f0) {
            ctx->pc = 0x1D7750u;
            goto label_1d7750;
        }
    }
    ctx->pc = 0x1D76F8u;
label_1d76f8:
    // 0x1d76f8: 0x8f2e0000  lw          $t6, 0x0($t9)
    ctx->pc = 0x1d76f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1d76fc: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x1d76fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1d7700: 0x11c00013  beqz        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7700u;
    {
        const bool branch_taken_0x1d7700 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7700) {
            ctx->pc = 0x1D7750u;
            goto label_1d7750;
        }
    }
    ctx->pc = 0x1D7708u;
    // 0x1d7708: 0x9338000a  lbu         $t8, 0xA($t9)
    ctx->pc = 0x1d7708u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 10)));
    // 0x1d770c: 0x330e0001  andi        $t6, $t8, 0x1
    ctx->pc = 0x1d770cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x1d7710: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7710u;
    {
        const bool branch_taken_0x1d7710 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7710) {
            ctx->pc = 0x1D771Cu;
            goto label_1d771c;
        }
    }
    ctx->pc = 0x1D7718u;
    // 0x1d7718: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d771c:
    // 0x1d771c: 0x0  nop
    ctx->pc = 0x1d771cu;
    // NOP
    // 0x1d7720: 0x330e0002  andi        $t6, $t8, 0x2
    ctx->pc = 0x1d7720u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2);
    // 0x1d7724: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7724u;
    {
        const bool branch_taken_0x1d7724 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7724) {
            ctx->pc = 0x1D7730u;
            goto label_1d7730;
        }
    }
    ctx->pc = 0x1D772Cu;
    // 0x1d772c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d7730:
    // 0x1d7730: 0x330e0004  andi        $t6, $t8, 0x4
    ctx->pc = 0x1d7730u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x1d7734: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7734u;
    {
        const bool branch_taken_0x1d7734 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7734) {
            ctx->pc = 0x1D7740u;
            goto label_1d7740;
        }
    }
    ctx->pc = 0x1D773Cu;
    // 0x1d773c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d7740:
    // 0x1d7740: 0x330e0008  andi        $t6, $t8, 0x8
    ctx->pc = 0x1d7740u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)8);
    // 0x1d7744: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7744u;
    {
        const bool branch_taken_0x1d7744 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7744) {
            ctx->pc = 0x1D7750u;
            goto label_1d7750;
        }
    }
    ctx->pc = 0x1D774Cu;
    // 0x1d774c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d7750:
    // 0x1d7750: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x1d7750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x1d7754: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d7754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d7758:
    // 0x1d7758: 0x14f702a  slt         $t6, $t2, $t7
    ctx->pc = 0x1d7758u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1d775c: 0x15c0ffd5  bnez        $t6, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1D775Cu;
    {
        const bool branch_taken_0x1d775c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d775c) {
            ctx->pc = 0x1D76B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d76b4;
        }
    }
    ctx->pc = 0x1D7764u;
    // 0x1d7764: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1d7764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1d7768:
    // 0x1d7768: 0x16d302a  slt         $a2, $t3, $t5
    ctx->pc = 0x1d7768u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1d776c: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1D776Cu;
    {
        const bool branch_taken_0x1d776c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d776c) {
            ctx->pc = 0x1D7694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7694;
        }
    }
    ctx->pc = 0x1D7774u;
    // 0x1d7774: 0x14ac0004  bne         $a1, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7774u;
    {
        const bool branch_taken_0x1d7774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        ctx->pc = 0x1D7778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7774u;
            // 0x1d7778: 0x11d2821  addu        $a1, $t0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7774) {
            ctx->pc = 0x1D7788u;
            goto label_1d7788;
        }
    }
    ctx->pc = 0x1D777Cu;
    // 0x1d777c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7780: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x1d7780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x1d7784: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1d7788:
    // 0x1d7788: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x1d7788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x1d778c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d7790:
    // 0x1d7790: 0x8e050274  lw          $a1, 0x274($s0)
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1d7794: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x1d7794u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d7798: 0x14a0ffb0  bnez        $a1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1D7798u;
    {
        const bool branch_taken_0x1d7798 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7798u;
            // 0x1d779c: 0x2074821  addu        $t1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7798) {
            ctx->pc = 0x1D765Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d765c;
        }
    }
    ctx->pc = 0x1D77A0u;
    // 0x1d77a0: 0x18800045  blez        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D77A0u;
    {
        const bool branch_taken_0x1d77a0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1d77a0) {
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D77A8u;
    // 0x1d77a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d77ac: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D77ACu;
    SET_GPR_U32(ctx, 31, 0x1D77B4u);
    ctx->pc = 0x1D77B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77ACu;
            // 0x1d77b0: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77B4u; }
        if (ctx->pc != 0x1D77B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77B4u; }
        if (ctx->pc != 0x1D77B4u) { return; }
    }
    ctx->pc = 0x1D77B4u;
label_1d77b4:
    // 0x1d77b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d77b8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d77bc: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x1d77bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d77c0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d77c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d77c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d77cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d77d0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1d77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d77d4: 0x248301d4  addiu       $v1, $a0, 0x1D4
    ctx->pc = 0x1d77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 468));
    // 0x1d77d8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D77D8u;
    {
        const bool branch_taken_0x1d77d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77D8u;
            // 0x1d77dc: 0x8c8401dc  lw          $a0, 0x1DC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77d8) {
            ctx->pc = 0x1D789Cu;
            goto label_1d789c;
        }
    }
    ctx->pc = 0x1D77E0u;
label_1d77e0:
    // 0x1d77e0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d77e4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1d77e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d77e8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d77ec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D77ECu;
    {
        const bool branch_taken_0x1d77ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77ECu;
            // 0x1d77f0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77ec) {
            ctx->pc = 0x1D7880u;
            goto label_1d7880;
        }
    }
    ctx->pc = 0x1D77F4u;
label_1d77f4:
    // 0x1d77f4: 0x0  nop
    ctx->pc = 0x1d77f4u;
    // NOP
    // 0x1d77f8: 0x860901b8  lh          $t1, 0x1B8($s0)
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d77fc: 0x8e0801cc  lw          $t0, 0x1CC($s0)
    ctx->pc = 0x1d77fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d7800: 0x895018  mult        $t2, $a0, $t1
    ctx->pc = 0x1d7800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d7804: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d7804u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d7808: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1d7808u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d780c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d7810: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d7814: 0x1065021  addu        $t2, $t0, $a2
    ctx->pc = 0x1d7814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d7818: 0x85490004  lh          $t1, 0x4($t2)
    ctx->pc = 0x1d7818u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1d781c: 0x292800e8  slti        $t0, $t1, 0xE8
    ctx->pc = 0x1d781cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)232) ? 1 : 0);
    // 0x1d7820: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7820u;
    {
        const bool branch_taken_0x1d7820 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7820u;
            // 0x1d7824: 0x292100f0  slti        $at, $t1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7820) {
            ctx->pc = 0x1D7830u;
            goto label_1d7830;
        }
    }
    ctx->pc = 0x1D7828u;
    // 0x1d7828: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7828u;
    {
        const bool branch_taken_0x1d7828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7828) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D7830u;
label_1d7830:
    // 0x1d7830: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x1d7830u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d7834: 0x31280008  andi        $t0, $t1, 0x8
    ctx->pc = 0x1d7834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x1d7838: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D7838u;
    {
        const bool branch_taken_0x1d7838 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7838u;
            // 0x1d783c: 0x35280010  ori         $t0, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7838) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D7840u;
    // 0x1d7840: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1d7840u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1d7844: 0x860901b8  lh          $t1, 0x1B8($s0)
    ctx->pc = 0x1d7844u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d7848: 0x8e0801cc  lw          $t0, 0x1CC($s0)
    ctx->pc = 0x1d7848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d784c: 0x895018  mult        $t2, $a0, $t1
    ctx->pc = 0x1d784cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d7850: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d7850u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d7854: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d7858: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d785c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1d785cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d7860: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x1d7860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d7864: 0x85280004  lh          $t0, 0x4($t1)
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1d7868: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d786c: 0xa5280004  sh          $t0, 0x4($t1)
    ctx->pc = 0x1d786cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x1d7870: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d7874: 0xae080278  sw          $t0, 0x278($s0)
    ctx->pc = 0x1d7874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 8));
label_1d7878:
    // 0x1d7878: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x1d787c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d7880:
    // 0x1d7880: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d7884: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1d7884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d7888: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1d7888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d788c: 0xa8402a  slt         $t0, $a1, $t0
    ctx->pc = 0x1d788cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d7890: 0x1500ffd8  bnez        $t0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D7890u;
    {
        const bool branch_taken_0x1d7890 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7890) {
            ctx->pc = 0x1D77F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D7898u;
    // 0x1d7898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d789c:
    // 0x1d789c: 0x0  nop
    ctx->pc = 0x1d789cu;
    // NOP
    // 0x1d78a0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1d78a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d78a4: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1d78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d78a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1d78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d78ac: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x1d78acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d78b0: 0x14a0ffcb  bnez        $a1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1D78B0u;
    {
        const bool branch_taken_0x1d78b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d78b0) {
            ctx->pc = 0x1D77E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d77e0;
        }
    }
    ctx->pc = 0x1D78B8u;
label_1d78b8:
    // 0x1d78b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d78b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d78bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d78bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78C0u;
            // 0x1d78c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D78C8u;
}
