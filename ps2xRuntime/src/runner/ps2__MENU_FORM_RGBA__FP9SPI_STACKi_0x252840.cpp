#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_RGBA__FP9SPI_STACKi
// Address: 0x252840 - 0x252978
void ps2__MENU_FORM_RGBA__FP9SPI_STACKi_0x252840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_RGBA__FP9SPI_STACKi_0x252840");
#endif

    switch (ctx->pc) {
        case 0x252880u: goto label_252880;
        case 0x25288cu: goto label_25288c;
        case 0x2528e0u: goto label_2528e0;
        case 0x2528f0u: goto label_2528f0;
        case 0x252938u: goto label_252938;
        case 0x252948u: goto label_252948;
        default: break;
    }

    ctx->pc = 0x252840u;

    // 0x252840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25284c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x252850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25285c: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252860: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252860u;
    {
        const bool branch_taken_0x252860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252860u;
            // 0x252864: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252860) {
            ctx->pc = 0x252870u;
            goto label_252870;
        }
    }
    ctx->pc = 0x252868u;
    // 0x252868: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x252868u;
    {
        const bool branch_taken_0x252868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252868u;
            // 0x25286c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252868) {
            ctx->pc = 0x25295Cu;
            goto label_25295c;
        }
    }
    ctx->pc = 0x252870u;
label_252870:
    // 0x252870: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x252870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x252874: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x252874u;
    {
        const bool branch_taken_0x252874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252874u;
            // 0x252878: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252874) {
            ctx->pc = 0x2528A4u;
            goto label_2528a4;
        }
    }
    ctx->pc = 0x25287Cu;
    // 0x25287c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25287cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252880:
    // 0x252880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x252880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252884: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252884u;
    SET_GPR_U32(ctx, 31, 0x25288Cu);
    ctx->pc = 0x252888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252884u;
            // 0x252888: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25288Cu; }
        if (ctx->pc != 0x25288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25288Cu; }
        if (ctx->pc != 0x25288Cu) { return; }
    }
    ctx->pc = 0x25288Cu;
label_25288c:
    // 0x25288c: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x25288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x252890: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x252890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x252894: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x252894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x252898: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x252898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x25289c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25289Cu;
    {
        const bool branch_taken_0x25289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2528A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25289Cu;
            // 0x2528a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25289c) {
            ctx->pc = 0x252880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252880;
        }
    }
    ctx->pc = 0x2528A4u;
label_2528a4:
    // 0x2528a4: 0x0  nop
    ctx->pc = 0x2528a4u;
    // NOP
    // 0x2528a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2528a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2528ac: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2528ACu;
    {
        const bool branch_taken_0x2528ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2528ac) {
            ctx->pc = 0x252900u;
            goto label_252900;
        }
    }
    ctx->pc = 0x2528B4u;
    // 0x2528b4: 0x8f9197bc  lw          $s1, -0x6844($gp)
    ctx->pc = 0x2528b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2528b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2528b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2528bc: 0x83a30050  lb          $v1, 0x50($sp)
    ctx->pc = 0x2528bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2528c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2528c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528c4: 0xa2230055  sb          $v1, 0x55($s1)
    ctx->pc = 0x2528c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x2528c8: 0x83a30054  lb          $v1, 0x54($sp)
    ctx->pc = 0x2528c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2528cc: 0xa2230056  sb          $v1, 0x56($s1)
    ctx->pc = 0x2528ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2528d0: 0x83a30058  lb          $v1, 0x58($sp)
    ctx->pc = 0x2528d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2528d4: 0xa2230057  sb          $v1, 0x57($s1)
    ctx->pc = 0x2528d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x2528d8: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x2528d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x2528dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2528dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2528e0:
    // 0x2528e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2528e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2528e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528e8: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2528E8u;
    SET_GPR_U32(ctx, 31, 0x2528F0u);
    ctx->pc = 0x2528ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2528E8u;
            // 0x2528ec: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2528F0u; }
        if (ctx->pc != 0x2528F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2528F0u; }
        if (ctx->pc != 0x2528F0u) { return; }
    }
    ctx->pc = 0x2528F0u;
label_2528f0:
    // 0x2528f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2528f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2528f4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2528f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2528f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2528F8u;
    {
        const bool branch_taken_0x2528f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2528FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2528F8u;
            // 0x2528fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528f8) {
            ctx->pc = 0x2528E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2528e0;
        }
    }
    ctx->pc = 0x252900u;
label_252900:
    // 0x252900: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x252900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252904: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x252904u;
    {
        const bool branch_taken_0x252904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x252904) {
            ctx->pc = 0x252958u;
            goto label_252958;
        }
    }
    ctx->pc = 0x25290Cu;
    // 0x25290c: 0x8f9197bc  lw          $s1, -0x6844($gp)
    ctx->pc = 0x25290cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x252910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252914: 0x83a20050  lb          $v0, 0x50($sp)
    ctx->pc = 0x252914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252918: 0xa2220055  sb          $v0, 0x55($s1)
    ctx->pc = 0x252918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x25291c: 0x83a20054  lb          $v0, 0x54($sp)
    ctx->pc = 0x25291cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x252920: 0xa2220056  sb          $v0, 0x56($s1)
    ctx->pc = 0x252920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x252924: 0x83a20058  lb          $v0, 0x58($sp)
    ctx->pc = 0x252924u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x252928: 0xa2220057  sb          $v0, 0x57($s1)
    ctx->pc = 0x252928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x25292c: 0x83a2005c  lb          $v0, 0x5C($sp)
    ctx->pc = 0x25292cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x252930: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x252930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x252934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252938:
    // 0x252938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25293c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25293cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252940: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x252940u;
    SET_GPR_U32(ctx, 31, 0x252948u);
    ctx->pc = 0x252944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252940u;
            // 0x252944: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252948u; }
        if (ctx->pc != 0x252948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252948u; }
        if (ctx->pc != 0x252948u) { return; }
    }
    ctx->pc = 0x252948u;
label_252948:
    // 0x252948: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x252948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25294c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x25294cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x252950: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x252950u;
    {
        const bool branch_taken_0x252950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252950u;
            // 0x252954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252950) {
            ctx->pc = 0x252938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252938;
        }
    }
    ctx->pc = 0x252958u;
label_252958:
    // 0x252958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25295c:
    // 0x25295c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x252960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25296c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25296cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252970: 0x3e00008  jr          $ra
    ctx->pc = 0x252970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252970u;
            // 0x252974: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252978u;
}
