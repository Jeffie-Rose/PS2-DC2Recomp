#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_CHR_ROT__FP12RS_STACKDATAi
// Address: 0x2e72f0 - 0x2e73e4
void ps2__SCN_GET_CHR_ROT__FP12RS_STACKDATAi_0x2e72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_CHR_ROT__FP12RS_STACKDATAi_0x2e72f0");
#endif

    switch (ctx->pc) {
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        default: break;
    }

    ctx->pc = 0x2e72f0u;

label_2e72f0:
    // 0x2e72f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e72f4:
    // 0x2e72f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e72f8:
    // 0x2e72f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e72fc:
    // 0x2e72fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e72fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e7300:
    // 0x2e7300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e7304:
    // 0x2e7304: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e7304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e7308:
    // 0x2e7308: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2e730c:
    if (ctx->pc == 0x2E730Cu) {
        ctx->pc = 0x2E730Cu;
            // 0x2e730c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7310u;
        goto label_2e7310;
    }
    ctx->pc = 0x2E7308u;
    {
        const bool branch_taken_0x2e7308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7308u;
            // 0x2e730c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7308) {
            ctx->pc = 0x2E7324u;
            goto label_2e7324;
        }
    }
    ctx->pc = 0x2E7310u;
label_2e7310:
    // 0x2e7310: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e7314:
    // 0x2e7314: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_2e7318:
    if (ctx->pc == 0x2E7318u) {
        ctx->pc = 0x2E7318u;
            // 0x2e7318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E731Cu;
        goto label_2e731c;
    }
    ctx->pc = 0x2E7314u;
    {
        const bool branch_taken_0x2e7314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7314u;
            // 0x2e7318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7314) {
            ctx->pc = 0x2E7328u;
            goto label_2e7328;
        }
    }
    ctx->pc = 0x2E731Cu;
label_2e731c:
    // 0x2e731c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2e7320:
    if (ctx->pc == 0x2E7320u) {
        ctx->pc = 0x2E7320u;
            // 0x2e7320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7324u;
        goto label_2e7324;
    }
    ctx->pc = 0x2E731Cu;
    {
        const bool branch_taken_0x2e731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E731Cu;
            // 0x2e7320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e731c) {
            ctx->pc = 0x2E73D0u;
            goto label_2e73d0;
        }
    }
    ctx->pc = 0x2E7324u;
label_2e7324:
    // 0x2e7324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7328:
    // 0x2e7328: 0xc0b8ca0  jal         func_2E3280
label_2e732c:
    if (ctx->pc == 0x2E732Cu) {
        ctx->pc = 0x2E732Cu;
            // 0x2e732c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E7330u;
        goto label_2e7330;
    }
    ctx->pc = 0x2E7328u;
    SET_GPR_U32(ctx, 31, 0x2E7330u);
    ctx->pc = 0x2E732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7328u;
            // 0x2e732c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7330u; }
        if (ctx->pc != 0x2E7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7330u; }
        if (ctx->pc != 0x2E7330u) { return; }
    }
    ctx->pc = 0x2E7330u;
label_2e7330:
    // 0x2e7330: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e7330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
label_2e7334:
    // 0x2e7334: 0xc0a0ed8  jal         func_283B60
label_2e7338:
    if (ctx->pc == 0x2E7338u) {
        ctx->pc = 0x2E7338u;
            // 0x2e7338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E733Cu;
        goto label_2e733c;
    }
    ctx->pc = 0x2E7334u;
    SET_GPR_U32(ctx, 31, 0x2E733Cu);
    ctx->pc = 0x2E7338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7334u;
            // 0x2e7338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E733Cu; }
        if (ctx->pc != 0x2E733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E733Cu; }
        if (ctx->pc != 0x2E733Cu) { return; }
    }
    ctx->pc = 0x2E733Cu;
label_2e733c:
    // 0x2e733c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e7340:
    if (ctx->pc == 0x2E7340u) {
        ctx->pc = 0x2E7344u;
        goto label_2e7344;
    }
    ctx->pc = 0x2E733Cu;
    {
        const bool branch_taken_0x2e733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e733c) {
            ctx->pc = 0x2E734Cu;
            goto label_2e734c;
        }
    }
    ctx->pc = 0x2E7344u;
label_2e7344:
    // 0x2e7344: 0x10000022  b           . + 4 + (0x22 << 2)
label_2e7348:
    if (ctx->pc == 0x2E7348u) {
        ctx->pc = 0x2E7348u;
            // 0x2e7348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E734Cu;
        goto label_2e734c;
    }
    ctx->pc = 0x2E7344u;
    {
        const bool branch_taken_0x2e7344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7344u;
            // 0x2e7348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7344) {
            ctx->pc = 0x2E73D0u;
            goto label_2e73d0;
        }
    }
    ctx->pc = 0x2E734Cu;
label_2e734c:
    // 0x2e734c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2e734cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7350:
    // 0x2e7350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e7350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7354:
    // 0x2e7354: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2e7354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2e7358:
    // 0x2e7358: 0x320f809  jalr        $t9
label_2e735c:
    if (ctx->pc == 0x2E735Cu) {
        ctx->pc = 0x2E735Cu;
            // 0x2e735c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E7360u;
        goto label_2e7360;
    }
    ctx->pc = 0x2E7358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E7360u);
        ctx->pc = 0x2E735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7358u;
            // 0x2e735c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E7360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E7360u; }
            if (ctx->pc != 0x2E7360u) { return; }
        }
        }
    }
    ctx->pc = 0x2E7360u;
label_2e7360:
    // 0x2e7360: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e7360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e7364:
    // 0x2e7364: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_2e7368:
    if (ctx->pc == 0x2E7368u) {
        ctx->pc = 0x2E7368u;
            // 0x2e7368: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2E736Cu;
        goto label_2e736c;
    }
    ctx->pc = 0x2E7364u;
    {
        const bool branch_taken_0x2e7364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7364u;
            // 0x2e7368: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7364) {
            ctx->pc = 0x2E7390u;
            goto label_2e7390;
        }
    }
    ctx->pc = 0x2E736Cu;
label_2e736c:
    // 0x2e736c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2e7370:
    if (ctx->pc == 0x2E7370u) {
        ctx->pc = 0x2E7374u;
        goto label_2e7374;
    }
    ctx->pc = 0x2E736Cu;
    {
        const bool branch_taken_0x2e736c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e736c) {
            ctx->pc = 0x2E737Cu;
            goto label_2e737c;
        }
    }
    ctx->pc = 0x2E7374u;
label_2e7374:
    // 0x2e7374: 0x10000013  b           . + 4 + (0x13 << 2)
label_2e7378:
    if (ctx->pc == 0x2E7378u) {
        ctx->pc = 0x2E7378u;
            // 0x2e7378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E737Cu;
        goto label_2e737c;
    }
    ctx->pc = 0x2E7374u;
    {
        const bool branch_taken_0x2e7374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7374u;
            // 0x2e7378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7374) {
            ctx->pc = 0x2E73C4u;
            goto label_2e73c4;
        }
    }
    ctx->pc = 0x2E737Cu;
label_2e737c:
    // 0x2e737c: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2e737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7380:
    // 0x2e7380: 0xc0b8cdc  jal         func_2E3370
label_2e7384:
    if (ctx->pc == 0x2E7384u) {
        ctx->pc = 0x2E7384u;
            // 0x2e7384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7388u;
        goto label_2e7388;
    }
    ctx->pc = 0x2E7380u;
    SET_GPR_U32(ctx, 31, 0x2E7388u);
    ctx->pc = 0x2E7384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7380u;
            // 0x2e7384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7388u; }
        if (ctx->pc != 0x2E7388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7388u; }
        if (ctx->pc != 0x2E7388u) { return; }
    }
    ctx->pc = 0x2E7388u;
label_2e7388:
    // 0x2e7388: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e738c:
    if (ctx->pc == 0x2E738Cu) {
        ctx->pc = 0x2E738Cu;
            // 0x2e738c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E7390u;
        goto label_2e7390;
    }
    ctx->pc = 0x2E7388u;
    {
        const bool branch_taken_0x2e7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7388u;
            // 0x2e738c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7388) {
            ctx->pc = 0x2E73D0u;
            goto label_2e73d0;
        }
    }
    ctx->pc = 0x2E7390u;
label_2e7390:
    // 0x2e7390: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2e7390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7394:
    // 0x2e7394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7398:
    // 0x2e7398: 0xc0b8cdc  jal         func_2E3370
label_2e739c:
    if (ctx->pc == 0x2E739Cu) {
        ctx->pc = 0x2E739Cu;
            // 0x2e739c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E73A0u;
        goto label_2e73a0;
    }
    ctx->pc = 0x2E7398u;
    SET_GPR_U32(ctx, 31, 0x2E73A0u);
    ctx->pc = 0x2E739Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7398u;
            // 0x2e739c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E73A0u; }
        if (ctx->pc != 0x2E73A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E73A0u; }
        if (ctx->pc != 0x2E73A0u) { return; }
    }
    ctx->pc = 0x2E73A0u;
label_2e73a0:
    // 0x2e73a0: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2e73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e73a4:
    // 0x2e73a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e73a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e73a8:
    // 0x2e73a8: 0xc0b8cdc  jal         func_2E3370
label_2e73ac:
    if (ctx->pc == 0x2E73ACu) {
        ctx->pc = 0x2E73ACu;
            // 0x2e73ac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E73B0u;
        goto label_2e73b0;
    }
    ctx->pc = 0x2E73A8u;
    SET_GPR_U32(ctx, 31, 0x2E73B0u);
    ctx->pc = 0x2E73ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E73A8u;
            // 0x2e73ac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E73B0u; }
        if (ctx->pc != 0x2E73B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E73B0u; }
        if (ctx->pc != 0x2E73B0u) { return; }
    }
    ctx->pc = 0x2E73B0u;
label_2e73b0:
    // 0x2e73b0: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x2e73b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e73b4:
    // 0x2e73b4: 0xc0b8cdc  jal         func_2E3370
label_2e73b8:
    if (ctx->pc == 0x2E73B8u) {
        ctx->pc = 0x2E73B8u;
            // 0x2e73b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E73BCu;
        goto label_2e73bc;
    }
    ctx->pc = 0x2E73B4u;
    SET_GPR_U32(ctx, 31, 0x2E73BCu);
    ctx->pc = 0x2E73B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E73B4u;
            // 0x2e73b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E73BCu; }
        if (ctx->pc != 0x2E73BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E73BCu; }
        if (ctx->pc != 0x2E73BCu) { return; }
    }
    ctx->pc = 0x2E73BCu;
label_2e73bc:
    // 0x2e73bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e73c0:
    if (ctx->pc == 0x2E73C0u) {
        ctx->pc = 0x2E73C4u;
        goto label_2e73c4;
    }
    ctx->pc = 0x2E73BCu;
    {
        const bool branch_taken_0x2e73bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e73bc) {
            ctx->pc = 0x2E73CCu;
            goto label_2e73cc;
        }
    }
    ctx->pc = 0x2E73C4u;
label_2e73c4:
    // 0x2e73c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e73c8:
    if (ctx->pc == 0x2E73C8u) {
        ctx->pc = 0x2E73C8u;
            // 0x2e73c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2E73CCu;
        goto label_2e73cc;
    }
    ctx->pc = 0x2E73C4u;
    {
        const bool branch_taken_0x2e73c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E73C4u;
            // 0x2e73c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73c4) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E73CCu;
label_2e73cc:
    // 0x2e73cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e73d0:
    // 0x2e73d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e73d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e73d4:
    // 0x2e73d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e73d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e73d8:
    // 0x2e73d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e73d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e73dc:
    // 0x2e73dc: 0x3e00008  jr          $ra
label_2e73e0:
    if (ctx->pc == 0x2E73E0u) {
        ctx->pc = 0x2E73E0u;
            // 0x2e73e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E73E4u;
        goto label_fallthrough_0x2e73dc;
    }
    ctx->pc = 0x2E73DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E73E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E73DCu;
            // 0x2e73e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e73dc:
    ctx->pc = 0x2E73E4u;
}
