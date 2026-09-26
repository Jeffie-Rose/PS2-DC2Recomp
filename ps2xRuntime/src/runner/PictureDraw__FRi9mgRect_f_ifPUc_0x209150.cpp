#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PictureDraw__FRi9mgRect<f>ifPUc
// Address: 0x209150 - 0x2092c4
void PictureDraw__FRi9mgRect_f_ifPUc_0x209150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PictureDraw__FRi9mgRect_f_ifPUc_0x209150");
#endif

    switch (ctx->pc) {
        case 0x2091b4u: goto label_2091b4;
        case 0x2091c4u: goto label_2091c4;
        case 0x209200u: goto label_209200;
        case 0x20923cu: goto label_20923c;
        case 0x209278u: goto label_209278;
        case 0x2092a0u: goto label_2092a0;
        default: break;
    }

    ctx->pc = 0x209150u;

    // 0x209150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x209150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x209154: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x209154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x209158: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x209158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20915c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x209160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x209160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x209164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x209164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20916c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20916cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x209174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x209174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209178: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x209178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20917c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20917cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209180: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x209180u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x209184: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x209184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x209188: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20918c: 0x4c00044  bltz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x20918Cu;
    {
        const bool branch_taken_0x20918c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x209190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20918Cu;
            // 0x209190: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20918c) {
            ctx->pc = 0x2092A0u;
            goto label_2092a0;
        }
    }
    ctx->pc = 0x209194u;
    // 0x209194: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x209194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x209198: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x209198u;
    {
        const bool branch_taken_0x209198 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x20919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209198u;
            // 0x20919c: 0xc0082a  slt         $at, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209198) {
            ctx->pc = 0x2091D0u;
            goto label_2091d0;
        }
    }
    ctx->pc = 0x2091A0u;
    // 0x2091a0: 0x8f839110  lw          $v1, -0x6EF0($gp)
    ctx->pc = 0x2091a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x2091a4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2091A4u;
    {
        const bool branch_taken_0x2091a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2091a4) {
            ctx->pc = 0x2092A0u;
            goto label_2092a0;
        }
    }
    ctx->pc = 0x2091ACu;
    // 0x2091ac: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2091ACu;
    SET_GPR_U32(ctx, 31, 0x2091B4u);
    ctx->pc = 0x2091B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2091ACu;
            // 0x2091b0: 0x84650000  lh          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2091B4u; }
        if (ctx->pc != 0x2091B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2091B4u; }
        if (ctx->pc != 0x2091B4u) { return; }
    }
    ctx->pc = 0x2091B4u;
label_2091b4:
    // 0x2091b4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2091b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2091b8: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x2091b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2091bc: 0xc08241c  jal         func_209070
    ctx->pc = 0x2091BCu;
    SET_GPR_U32(ctx, 31, 0x2091C4u);
    ctx->pc = 0x2091C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2091BCu;
            // 0x2091c0: 0x92440003  lbu         $a0, 0x3($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209070u;
    if (runtime->hasFunction(0x209070u)) {
        auto targetFn = runtime->lookupFunction(0x209070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2091C4u; }
        if (ctx->pc != 0x2091C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureMemoOne__Fffi_0x209070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2091C4u; }
        if (ctx->pc != 0x2091C4u) { return; }
    }
    ctx->pc = 0x2091C4u;
label_2091c4:
    // 0x2091c4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2091C4u;
    {
        const bool branch_taken_0x2091c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2091C4u;
            // 0x2091c8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091c4) {
            ctx->pc = 0x2092A4u;
            goto label_2092a4;
        }
    }
    ctx->pc = 0x2091CCu;
    // 0x2091cc: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x2091ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2091d0:
    // 0x2091d0: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2091D0u;
    {
        const bool branch_taken_0x2091d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2091D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2091D0u;
            // 0x2091d4: 0x28c30032  slti        $v1, $a2, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091d0) {
            ctx->pc = 0x20920Cu;
            goto label_20920c;
        }
    }
    ctx->pc = 0x2091D8u;
    // 0x2091d8: 0x28c1001e  slti        $at, $a2, 0x1E
    ctx->pc = 0x2091d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2091dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2091DCu;
    {
        const bool branch_taken_0x2091dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2091dc) {
            ctx->pc = 0x209208u;
            goto label_209208;
        }
    }
    ctx->pc = 0x2091E4u;
    // 0x2091e4: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2091e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2091e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2091ec: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x2091ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x2091f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2091f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2091f4: 0x8c5003c8  lw          $s0, 0x3C8($v0)
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x2091f8: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x2091F8u;
    SET_GPR_U32(ctx, 31, 0x209200u);
    ctx->pc = 0x2091FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2091F8u;
            // 0x2091fc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209200u; }
        if (ctx->pc != 0x209200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209200u; }
        if (ctx->pc != 0x209200u) { return; }
    }
    ctx->pc = 0x209200u;
label_209200:
    // 0x209200: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x209200u;
    {
        const bool branch_taken_0x209200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209200u;
            // 0x209204: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209200) {
            ctx->pc = 0x209240u;
            goto label_209240;
        }
    }
    ctx->pc = 0x209208u;
label_209208:
    // 0x209208: 0x28c30032  slti        $v1, $a2, 0x32
    ctx->pc = 0x209208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
label_20920c:
    // 0x20920c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20920Cu;
    {
        const bool branch_taken_0x20920c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20920c) {
            ctx->pc = 0x209240u;
            goto label_209240;
        }
    }
    ctx->pc = 0x209214u;
    // 0x209214: 0x28c10064  slti        $at, $a2, 0x64
    ctx->pc = 0x209214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x209218: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x209218u;
    {
        const bool branch_taken_0x209218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209218) {
            ctx->pc = 0x209240u;
            goto label_209240;
        }
    }
    ctx->pc = 0x209220u;
    // 0x209220: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x209220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x209224: 0x24c5ffce  addiu       $a1, $a2, -0x32
    ctx->pc = 0x209224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967246));
    // 0x209228: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x209228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20922c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209230: 0x8c500440  lw          $s0, 0x440($v0)
    ctx->pc = 0x209230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x209234: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x209234u;
    SET_GPR_U32(ctx, 31, 0x20923Cu);
    ctx->pc = 0x209238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209234u;
            // 0x209238: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20923Cu; }
        if (ctx->pc != 0x20923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20923Cu; }
        if (ctx->pc != 0x20923Cu) { return; }
    }
    ctx->pc = 0x20923Cu;
label_20923c:
    // 0x20923c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20923cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209240:
    // 0x209240: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x209240u;
    {
        const bool branch_taken_0x209240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x209240) {
            ctx->pc = 0x2092A0u;
            goto label_2092a0;
        }
    }
    ctx->pc = 0x209248u;
    // 0x209248: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209248u;
    {
        const bool branch_taken_0x209248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209248u;
            // 0x20924c: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209248) {
            ctx->pc = 0x20925Cu;
            goto label_20925c;
        }
    }
    ctx->pc = 0x209250u;
    // 0x209250: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x209250u;
    {
        const bool branch_taken_0x209250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209250) {
            ctx->pc = 0x2092A0u;
            goto label_2092a0;
        }
    }
    ctx->pc = 0x209258u;
    // 0x209258: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x209258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20925c:
    // 0x20925c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20925Cu;
    {
        const bool branch_taken_0x20925c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20925c) {
            ctx->pc = 0x20926Cu;
            goto label_20926c;
        }
    }
    ctx->pc = 0x209264u;
    // 0x209264: 0x92540003  lbu         $s4, 0x3($s2)
    ctx->pc = 0x209264u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x209268: 0x0  nop
    ctx->pc = 0x209268u;
    // NOP
label_20926c:
    // 0x20926c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x20926cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209270: 0xc08878c  jal         func_221E30
    ctx->pc = 0x209270u;
    SET_GPR_U32(ctx, 31, 0x209278u);
    ctx->pc = 0x209274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209270u;
            // 0x209274: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209278u; }
        if (ctx->pc != 0x209278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209278u; }
        if (ctx->pc != 0x209278u) { return; }
    }
    ctx->pc = 0x209278u;
label_209278:
    // 0x209278: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x209278u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20927c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x20927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209280: 0x92480001  lbu         $t0, 0x1($s2)
    ctx->pc = 0x209280u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x209284: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x209284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x209288: 0x92490002  lbu         $t1, 0x2($s2)
    ctx->pc = 0x209288u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x20928c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209294: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x209294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209298: 0xc08230c  jal         func_208C30
    ctx->pc = 0x209298u;
    SET_GPR_U32(ctx, 31, 0x2092A0u);
    ctx->pc = 0x20929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209298u;
            // 0x20929c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x208C30u;
    if (runtime->hasFunction(0x208C30u)) {
        auto targetFn = runtime->lookupFunction(0x208C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2092A0u; }
        if (ctx->pc != 0x2092A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureDraw__FP10mgCTextureP17USER_PICTURE_INFOfffiiii_0x208c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2092A0u; }
        if (ctx->pc != 0x2092A0u) { return; }
    }
    ctx->pc = 0x2092A0u;
label_2092a0:
    // 0x2092a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2092a4:
    // 0x2092a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2092a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2092a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2092a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2092ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2092acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2092b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2092b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2092b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2092b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2092b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2092b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2092bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2092BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2092C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092BCu;
            // 0x2092c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2092C4u;
}
