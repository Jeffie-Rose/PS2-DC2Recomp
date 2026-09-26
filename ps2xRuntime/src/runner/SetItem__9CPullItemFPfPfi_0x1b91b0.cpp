#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetItem__9CPullItemFPfPfi
// Address: 0x1b91b0 - 0x1b9588
void SetItem__9CPullItemFPfPfi_0x1b91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetItem__9CPullItemFPfPfi_0x1b91b0");
#endif

    switch (ctx->pc) {
        case 0x1b91d4u: goto label_1b91d4;
        case 0x1b91e0u: goto label_1b91e0;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b9430u: goto label_1b9430;
        case 0x1b9458u: goto label_1b9458;
        default: break;
    }

    ctx->pc = 0x1b91b0u;

    // 0x1b91b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b91b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b91b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b91bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b91bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b91c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b91c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b91c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b91c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b91c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b91c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b91cc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B91CCu;
    SET_GPR_U32(ctx, 31, 0x1B91D4u);
    ctx->pc = 0x1B91D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91CCu;
            // 0x1b91d0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91D4u; }
        if (ctx->pc != 0x1B91D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91D4u; }
        if (ctx->pc != 0x1B91D4u) { return; }
    }
    ctx->pc = 0x1B91D4u;
label_1b91d4:
    // 0x1b91d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b91d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b91d8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B91D8u;
    SET_GPR_U32(ctx, 31, 0x1B91E0u);
    ctx->pc = 0x1B91DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91D8u;
            // 0x1b91dc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91E0u; }
        if (ctx->pc != 0x1B91E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91E0u; }
        if (ctx->pc != 0x1B91E0u) { return; }
    }
    ctx->pc = 0x1B91E0u;
label_1b91e0:
    // 0x1b91e0: 0xa2300060  sb          $s0, 0x60($s1)
    ctx->pc = 0x1b91e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b91e4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1b91e8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1b91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1b91ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b91ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b91f0: 0xa6200050  sh          $zero, 0x50($s1)
    ctx->pc = 0x1b91f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b91f4: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x1b91f8: 0xa6230040  sh          $v1, 0x40($s1)
    ctx->pc = 0x1b91f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b91fc: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x1b91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x1b9200: 0xa626006a  sh          $a2, 0x6A($s1)
    ctx->pc = 0x1b9200u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b9204: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x1b9204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b9208: 0xa626006c  sh          $a2, 0x6C($s1)
    ctx->pc = 0x1b9208u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b920c: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x1b920cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
    // 0x1b9210: 0xa2200061  sb          $zero, 0x61($s1)
    ctx->pc = 0x1b9210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9214: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x1b9214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
    // 0x1b9218: 0x102000d5  beqz        $at, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1B9218u;
    {
        const bool branch_taken_0x1b9218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9218u;
            // 0x1b921c: 0xa2260074  sb          $a2, 0x74($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9218) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B9220u;
    // 0x1b9220: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b9220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1b9224: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1b9224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b9228: 0x24a56a10  addiu       $a1, $a1, 0x6A10
    ctx->pc = 0x1b9228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27152));
    // 0x1b922c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b9230: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1b9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9234: 0x800008  jr          $a0
    ctx->pc = 0x1B9234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B923Cu: goto label_1b923c;
            case 0x1B92ACu: goto label_1b92ac;
            case 0x1B9320u: goto label_1b9320;
            case 0x1B936Cu: goto label_1b936c;
            case 0x1B93C0u: goto label_1b93c0;
            case 0x1B9478u: goto label_1b9478;
            case 0x1B94CCu: goto label_1b94cc;
            case 0x1B9520u: goto label_1b9520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B923Cu;
label_1b923c:
    // 0x1b923c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9240: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1b9240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b9244: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x1b9244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x1b9248: 0x3c0740e0  lui         $a3, 0x40E0
    ctx->pc = 0x1b9248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16608 << 16));
    // 0x1b924c: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x1b924cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9250: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1b9250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1b9254: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1b9254u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9258: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1b9258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b925c: 0xa6240036  sh          $a0, 0x36($s1)
    ctx->pc = 0x1b925cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9260: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x1b9260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
    // 0x1b9264: 0xa6240034  sh          $a0, 0x34($s1)
    ctx->pc = 0x1b9264u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9268: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x1b9268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x1b926c: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x1b926cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
    // 0x1b9270: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b9270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b9274: 0xae26003c  sw          $a2, 0x3C($s1)
    ctx->pc = 0x1b9274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
    // 0x1b9278: 0xae25005c  sw          $a1, 0x5C($s1)
    ctx->pc = 0x1b9278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 5));
    // 0x1b927c: 0x34666666  ori         $a2, $v1, 0x6666
    ctx->pc = 0x1b927cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b9280: 0xa6200044  sh          $zero, 0x44($s1)
    ctx->pc = 0x1b9280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9284: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b9284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b9288: 0xa6240052  sh          $a0, 0x52($s1)
    ctx->pc = 0x1b9288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b928c: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1b928cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9290: 0xae260054  sw          $a2, 0x54($s1)
    ctx->pc = 0x1b9290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
    // 0x1b9294: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1b9298: 0xae250058  sw          $a1, 0x58($s1)
    ctx->pc = 0x1b9298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 5));
    // 0x1b929c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b92a0: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x1b92a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
    // 0x1b92a4: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1B92A4u;
    {
        const bool branch_taken_0x1b92a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92A4u;
            // 0x1b92a8: 0xa2230061  sb          $v1, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92a4) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B92ACu;
label_1b92ac:
    // 0x1b92ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b92b0: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1b92b4: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x1b92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x1b92b8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b92bc: 0xa6240030  sh          $a0, 0x30($s1)
    ctx->pc = 0x1b92bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b92c0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1b92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1b92c4: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x1b92c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b92c8: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x1b92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x1b92cc: 0xa6260036  sh          $a2, 0x36($s1)
    ctx->pc = 0x1b92ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b92d0: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1b92d4: 0xa6260034  sh          $a2, 0x34($s1)
    ctx->pc = 0x1b92d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b92d8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1b92dc: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x1b92dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x1b92e0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b92e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b92e4: 0xae25003c  sw          $a1, 0x3C($s1)
    ctx->pc = 0x1b92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 5));
    // 0x1b92e8: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x1b92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
    // 0x1b92ec: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x1b92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x1b92f0: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1b92f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b92f4: 0xa6200044  sh          $zero, 0x44($s1)
    ctx->pc = 0x1b92f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b92f8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b92fc: 0xa6260052  sh          $a2, 0x52($s1)
    ctx->pc = 0x1b92fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b9300: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x1b9300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
    // 0x1b9304: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b9304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9308: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x1b9308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x1b930c: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1b930cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1b9310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9314: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x1b9314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
    // 0x1b9318: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1B9318u;
    {
        const bool branch_taken_0x1b9318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9318u;
            // 0x1b931c: 0xa2230061  sb          $v1, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9318) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B9320u;
label_1b9320:
    // 0x1b9320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9324: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b9328: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x1b9328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
    // 0x1b932c: 0x3c0740e0  lui         $a3, 0x40E0
    ctx->pc = 0x1b932cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16608 << 16));
    // 0x1b9330: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x1b9330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b9334: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x1b9334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
    // 0x1b9338: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1b9338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b933c: 0x3c054090  lui         $a1, 0x4090
    ctx->pc = 0x1b933cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16528 << 16));
    // 0x1b9340: 0xa6230036  sh          $v1, 0x36($s1)
    ctx->pc = 0x1b9340u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b9344: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b9344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b9348: 0xa6230034  sh          $v1, 0x34($s1)
    ctx->pc = 0x1b9348u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b934c: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x1b934cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
    // 0x1b9350: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x1b9350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1b9354: 0xae26003c  sw          $a2, 0x3C($s1)
    ctx->pc = 0x1b9354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
    // 0x1b9358: 0xae25005c  sw          $a1, 0x5C($s1)
    ctx->pc = 0x1b9358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 5));
    // 0x1b935c: 0xa6200044  sh          $zero, 0x44($s1)
    ctx->pc = 0x1b935cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9360: 0xa6240052  sh          $a0, 0x52($s1)
    ctx->pc = 0x1b9360u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9364: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1B9364u;
    {
        const bool branch_taken_0x1b9364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9364u;
            // 0x1b9368: 0xa6230042  sh          $v1, 0x42($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9364) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B936Cu;
label_1b936c:
    // 0x1b936c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9370: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b9374: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x1b9374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x1b9378: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b937c: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x1b937cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9380: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1b9380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9384: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x1b9384u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b9388: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1b9388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1b938c: 0xa6240036  sh          $a0, 0x36($s1)
    ctx->pc = 0x1b938cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9390: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1b9390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1b9394: 0xa6240034  sh          $a0, 0x34($s1)
    ctx->pc = 0x1b9394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9398: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1b9398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1b939c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1b939cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1b93a0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B93A0u;
    SET_GPR_U32(ctx, 31, 0x1B93A8u);
    ctx->pc = 0x1B93A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93A0u;
            // 0x1b93a4: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93A8u; }
        if (ctx->pc != 0x1B93A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93A8u; }
        if (ctx->pc != 0x1B93A8u) { return; }
    }
    ctx->pc = 0x1B93A8u;
label_1b93a8:
    // 0x1b93a8: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x1b93a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b93ac: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1b93acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b93b0: 0xa6230052  sh          $v1, 0x52($s1)
    ctx->pc = 0x1b93b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b93b4: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x1b93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1b93b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1B93B8u;
    {
        const bool branch_taken_0x1b93b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93B8u;
            // 0x1b93bc: 0xa6230042  sh          $v1, 0x42($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93b8) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B93C0u;
label_1b93c0:
    // 0x1b93c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b93c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b93c4: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1b93c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1b93c8: 0xae28007c  sw          $t0, 0x7C($s1)
    ctx->pc = 0x1b93c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 8));
    // 0x1b93cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1b93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b93d0: 0xa6280030  sh          $t0, 0x30($s1)
    ctx->pc = 0x1b93d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 8));
    // 0x1b93d4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1b93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1b93d8: 0xa6250032  sh          $a1, 0x32($s1)
    ctx->pc = 0x1b93d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b93dc: 0x3c074090  lui         $a3, 0x4090
    ctx->pc = 0x1b93dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16528 << 16));
    // 0x1b93e0: 0xa6230036  sh          $v1, 0x36($s1)
    ctx->pc = 0x1b93e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b93e4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b93e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b93e8: 0xa6230034  sh          $v1, 0x34($s1)
    ctx->pc = 0x1b93e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b93ec: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1b93ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1b93f0: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x1b93f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x1b93f4: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x1b93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x1b93f8: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x1b93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x1b93fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b93fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9400: 0xae27005c  sw          $a3, 0x5C($s1)
    ctx->pc = 0x1b9400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 7));
    // 0x1b9404: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1b9404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b9408: 0xa6260052  sh          $a2, 0x52($s1)
    ctx->pc = 0x1b9408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b940c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b940cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b9410: 0xa6250042  sh          $a1, 0x42($s1)
    ctx->pc = 0x1b9410u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9414: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b9414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9418: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x1b9418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
    // 0x1b941c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9420: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x1b9420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x1b9424: 0xa2280061  sb          $t0, 0x61($s1)
    ctx->pc = 0x1b9424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b9428: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x1b942c: 0x2484e190  addiu       $a0, $a0, -0x1E70
    ctx->pc = 0x1b942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959504));
label_1b9430:
    // 0x1b9430: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1b9430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b9434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9438: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9438u;
    {
        const bool branch_taken_0x1b9438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9438) {
            ctx->pc = 0x1B9460u;
            goto label_1b9460;
        }
    }
    ctx->pc = 0x1B9440u;
    // 0x1b9440: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1b9444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9448: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b944c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b9450: 0xc0708f0  jal         func_1C23C0
    ctx->pc = 0x1B9450u;
    SET_GPR_U32(ctx, 31, 0x1B9458u);
    ctx->pc = 0x1B9454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9450u;
            // 0x1b9454: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C23C0u;
    if (runtime->hasFunction(0x1C23C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C23C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9458u; }
        if (ctx->pc != 0x1B9458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMode__10CAfterWireFi_0x1c23c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9458u; }
        if (ctx->pc != 0x1B9458u) { return; }
    }
    ctx->pc = 0x1B9458u;
label_1b9458:
    // 0x1b9458: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B9458u;
    {
        const bool branch_taken_0x1b9458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9458u;
            // 0x1b945c: 0xa2300074  sb          $s0, 0x74($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9458) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B9460u;
label_1b9460:
    // 0x1b9460: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b9460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b9464: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1b9464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b9468: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B9468u;
    {
        const bool branch_taken_0x1b9468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9468u;
            // 0x1b946c: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9468) {
            ctx->pc = 0x1B9430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b9430;
        }
    }
    ctx->pc = 0x1B9470u;
    // 0x1b9470: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B9470u;
    {
        const bool branch_taken_0x1b9470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9470u;
            // 0x1b9474: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9470) {
            ctx->pc = 0x1B9574u;
            goto label_1b9574;
        }
    }
    ctx->pc = 0x1B9478u;
label_1b9478:
    // 0x1b9478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b947c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b9480: 0xae25007c  sw          $a1, 0x7C($s1)
    ctx->pc = 0x1b9480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 5));
    // 0x1b9484: 0x3c074100  lui         $a3, 0x4100
    ctx->pc = 0x1b9484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16640 << 16));
    // 0x1b9488: 0xa6240030  sh          $a0, 0x30($s1)
    ctx->pc = 0x1b9488u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b948c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1b948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b9490: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1b9490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9494: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x1b9494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x1b9498: 0xa6250036  sh          $a1, 0x36($s1)
    ctx->pc = 0x1b9498u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b949c: 0x3c064090  lui         $a2, 0x4090
    ctx->pc = 0x1b949cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16528 << 16));
    // 0x1b94a0: 0xa6250034  sh          $a1, 0x34($s1)
    ctx->pc = 0x1b94a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b94a4: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x1b94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x1b94a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b94ac: 0xae27003c  sw          $a3, 0x3C($s1)
    ctx->pc = 0x1b94acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 7));
    // 0x1b94b0: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x1b94b4: 0xae26005c  sw          $a2, 0x5C($s1)
    ctx->pc = 0x1b94b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 6));
    // 0x1b94b8: 0xa6200044  sh          $zero, 0x44($s1)
    ctx->pc = 0x1b94b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b94bc: 0xa6250052  sh          $a1, 0x52($s1)
    ctx->pc = 0x1b94bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b94c0: 0xa6230042  sh          $v1, 0x42($s1)
    ctx->pc = 0x1b94c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b94c4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B94C4u;
    {
        const bool branch_taken_0x1b94c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94C4u;
            // 0x1b94c8: 0xae24004c  sw          $a0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94c4) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B94CCu;
label_1b94cc:
    // 0x1b94cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b94d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b94d4: 0xae25007c  sw          $a1, 0x7C($s1)
    ctx->pc = 0x1b94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 5));
    // 0x1b94d8: 0x3c0740e0  lui         $a3, 0x40E0
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16608 << 16));
    // 0x1b94dc: 0xa6240030  sh          $a0, 0x30($s1)
    ctx->pc = 0x1b94dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b94e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b94e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b94e4: 0xa6250032  sh          $a1, 0x32($s1)
    ctx->pc = 0x1b94e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b94e8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1b94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b94ec: 0xa6240036  sh          $a0, 0x36($s1)
    ctx->pc = 0x1b94ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b94f0: 0x3c064090  lui         $a2, 0x4090
    ctx->pc = 0x1b94f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16528 << 16));
    // 0x1b94f4: 0xa6240034  sh          $a0, 0x34($s1)
    ctx->pc = 0x1b94f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b94f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b94fc: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x1b94fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
    // 0x1b9500: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x1b9500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x1b9504: 0xae27003c  sw          $a3, 0x3C($s1)
    ctx->pc = 0x1b9504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 7));
    // 0x1b9508: 0xae26005c  sw          $a2, 0x5C($s1)
    ctx->pc = 0x1b9508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 6));
    // 0x1b950c: 0xa6200044  sh          $zero, 0x44($s1)
    ctx->pc = 0x1b950cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9510: 0xa6250052  sh          $a1, 0x52($s1)
    ctx->pc = 0x1b9510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9514: 0xa6230042  sh          $v1, 0x42($s1)
    ctx->pc = 0x1b9514u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b9518: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B9518u;
    {
        const bool branch_taken_0x1b9518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9518u;
            // 0x1b951c: 0xae24004c  sw          $a0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9518) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B9520u;
label_1b9520:
    // 0x1b9520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9524: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b9524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b9528: 0xae25007c  sw          $a1, 0x7C($s1)
    ctx->pc = 0x1b9528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 5));
    // 0x1b952c: 0x3c074100  lui         $a3, 0x4100
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16640 << 16));
    // 0x1b9530: 0xa6240030  sh          $a0, 0x30($s1)
    ctx->pc = 0x1b9530u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9534: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b9538: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1b9538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b953c: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x1b953cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x1b9540: 0xa6250036  sh          $a1, 0x36($s1)
    ctx->pc = 0x1b9540u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9544: 0x3c063fc0  lui         $a2, 0x3FC0
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16320 << 16));
    // 0x1b9548: 0xa6250034  sh          $a1, 0x34($s1)
    ctx->pc = 0x1b9548u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b954c: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x1b954cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x1b9550: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b9550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b9554: 0xae27003c  sw          $a3, 0x3C($s1)
    ctx->pc = 0x1b9554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 7));
    // 0x1b9558: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x1b9558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x1b955c: 0xae26005c  sw          $a2, 0x5C($s1)
    ctx->pc = 0x1b955cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 6));
    // 0x1b9560: 0xa6200044  sh          $zero, 0x44($s1)
    ctx->pc = 0x1b9560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9564: 0xa6250052  sh          $a1, 0x52($s1)
    ctx->pc = 0x1b9564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9568: 0xa6230042  sh          $v1, 0x42($s1)
    ctx->pc = 0x1b9568u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b956c: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x1b956cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
label_1b9570:
    // 0x1b9570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9574:
    // 0x1b9574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b957c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b957cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9580: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9580u;
            // 0x1b9584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9588u;
}
