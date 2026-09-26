#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStepLocal__13CMenuItemInfoFiii
// Address: 0x24e180 - 0x24e3b0
void KeyStepLocal__13CMenuItemInfoFiii_0x24e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStepLocal__13CMenuItemInfoFiii_0x24e180");
#endif

    switch (ctx->pc) {
        case 0x24e1bcu: goto label_24e1bc;
        case 0x24e200u: goto label_24e200;
        case 0x24e284u: goto label_24e284;
        case 0x24e2d8u: goto label_24e2d8;
        case 0x24e2fcu: goto label_24e2fc;
        case 0x24e304u: goto label_24e304;
        case 0x24e33cu: goto label_24e33c;
        case 0x24e36cu: goto label_24e36c;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e390u: goto label_24e390;
        default: break;
    }

    ctx->pc = 0x24e180u;

    // 0x24e180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24e184: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24e184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24e188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24e18c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24e190: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24e190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24e198: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24e198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24e1a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x24e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x24e1a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24e1a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24e1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1ac: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x24e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x24e1b0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x24e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x24e1b4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x24E1B4u;
    SET_GPR_U32(ctx, 31, 0x24E1BCu);
    ctx->pc = 0x24E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E1B4u;
            // 0x24e1b8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E1BCu; }
        if (ctx->pc != 0x24E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E1BCu; }
        if (ctx->pc != 0x24E1BCu) { return; }
    }
    ctx->pc = 0x24E1BCu;
label_24e1bc:
    // 0x24e1bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E1BCu;
    {
        const bool branch_taken_0x24e1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e1bc) {
            ctx->pc = 0x24E20Cu;
            goto label_24e20c;
        }
    }
    ctx->pc = 0x24E1C4u;
    // 0x24e1c4: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x24e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x24e1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e1cc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24E1CCu;
    {
        const bool branch_taken_0x24e1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E1CCu;
            // 0x24e1d0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1cc) {
            ctx->pc = 0x24E20Cu;
            goto label_24e20c;
        }
    }
    ctx->pc = 0x24E1D4u;
    // 0x24e1d4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24e1d8: 0x8c23dc18  lw          $v1, -0x23E8($at)
    ctx->pc = 0x24e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958104)));
    // 0x24e1dc: 0x2484e2e0  addiu       $a0, $a0, -0x1D20
    ctx->pc = 0x24e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
    // 0x24e1e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24e1e4: 0x8c25dc14  lw          $a1, -0x23EC($at)
    ctx->pc = 0x24e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958100)));
    // 0x24e1e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24e1ec: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x24e1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24e1f0: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x24e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
    // 0x24e1f4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x24e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x24e1f8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x24E1F8u;
    SET_GPR_U32(ctx, 31, 0x24E200u);
    ctx->pc = 0x24E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E1F8u;
            // 0x24e1fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E200u; }
        if (ctx->pc != 0x24E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E200u; }
        if (ctx->pc != 0x24E200u) { return; }
    }
    ctx->pc = 0x24E200u;
label_24e200:
    // 0x24e200: 0xaf8096ec  sw          $zero, -0x6914($gp)
    ctx->pc = 0x24e200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940396), GPR_U32(ctx, 0));
    // 0x24e204: 0xaf8096f0  sw          $zero, -0x6910($gp)
    ctx->pc = 0x24e204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940400), GPR_U32(ctx, 0));
    // 0x24e208: 0xa38096cc  sb          $zero, -0x6934($gp)
    ctx->pc = 0x24e208u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940364), (uint8_t)GPR_U32(ctx, 0));
label_24e20c:
    // 0x24e20c: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x24e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x24e210: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E210u;
    {
        const bool branch_taken_0x24e210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E210u;
            // 0x24e214: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e210) {
            ctx->pc = 0x24E254u;
            goto label_24e254;
        }
    }
    ctx->pc = 0x24E218u;
    // 0x24e218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E218u;
    {
        const bool branch_taken_0x24e218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E218u;
            // 0x24e21c: 0x32620040  andi        $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e218) {
            ctx->pc = 0x24E228u;
            goto label_24e228;
        }
    }
    ctx->pc = 0x24E220u;
    // 0x24e220: 0x3a730010  xori        $s3, $s3, 0x10
    ctx->pc = 0x24e220u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)16);
    // 0x24e224: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x24e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_24e228:
    // 0x24e228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E228u;
    {
        const bool branch_taken_0x24e228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E228u;
            // 0x24e22c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e228) {
            ctx->pc = 0x24E238u;
            goto label_24e238;
        }
    }
    ctx->pc = 0x24E230u;
    // 0x24e230: 0x3a730040  xori        $s3, $s3, 0x40
    ctx->pc = 0x24e230u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)64);
    // 0x24e234: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x24e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_24e238:
    // 0x24e238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E238u;
    {
        const bool branch_taken_0x24e238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E238u;
            // 0x24e23c: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e238) {
            ctx->pc = 0x24E248u;
            goto label_24e248;
        }
    }
    ctx->pc = 0x24E240u;
    // 0x24e240: 0x3a730020  xori        $s3, $s3, 0x20
    ctx->pc = 0x24e240u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)32);
    // 0x24e244: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x24e244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_24e248:
    // 0x24e248: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E248u;
    {
        const bool branch_taken_0x24e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e248) {
            ctx->pc = 0x24E254u;
            goto label_24e254;
        }
    }
    ctx->pc = 0x24E250u;
    // 0x24e250: 0x3a730080  xori        $s3, $s3, 0x80
    ctx->pc = 0x24e250u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)128);
label_24e254:
    // 0x24e254: 0x8f829510  lw          $v0, -0x6AF0($gp)
    ctx->pc = 0x24e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
    // 0x24e258: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x24e258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e25c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E25Cu;
    {
        const bool branch_taken_0x24e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e25c) {
            ctx->pc = 0x24E26Cu;
            goto label_24e26c;
        }
    }
    ctx->pc = 0x24E264u;
    // 0x24e264: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24e264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e268: 0x3a7300f0  xori        $s3, $s3, 0xF0
    ctx->pc = 0x24e268u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)240);
label_24e26c:
    // 0x24e26c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x24e26cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e270: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E270u;
    {
        const bool branch_taken_0x24e270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E270u;
            // 0x24e274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e270) {
            ctx->pc = 0x24E290u;
            goto label_24e290;
        }
    }
    ctx->pc = 0x24E278u;
    // 0x24e278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e27c: 0xc093548  jal         func_24D520
    ctx->pc = 0x24E27Cu;
    SET_GPR_U32(ctx, 31, 0x24E284u);
    ctx->pc = 0x24E280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E27Cu;
            // 0x24e280: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D520u;
    if (runtime->hasFunction(0x24D520u)) {
        auto targetFn = runtime->lookupFunction(0x24D520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E284u; }
        if (ctx->pc != 0x24E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LRCheck__13CMenuItemInfoFi_0x24d520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E284u; }
        if (ctx->pc != 0x24E284u) { return; }
    }
    ctx->pc = 0x24E284u;
label_24e284:
    // 0x24e284: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E284u;
    {
        const bool branch_taken_0x24e284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E284u;
            // 0x24e288: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e284) {
            ctx->pc = 0x24E290u;
            goto label_24e290;
        }
    }
    ctx->pc = 0x24E28Cu;
    // 0x24e28c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x24e28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24e290:
    // 0x24e290: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24e290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e298: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E298u;
    {
        const bool branch_taken_0x24e298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e298) {
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24E2A0u;
    // 0x24e2a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e2a4:
    // 0x24e2a4: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x24e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x24e2a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E2A8u;
    {
        const bool branch_taken_0x24e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2a8) {
            ctx->pc = 0x24E2C4u;
            goto label_24e2c4;
        }
    }
    ctx->pc = 0x24E2B0u;
    // 0x24e2b0: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x24e2b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x24e2b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e2b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E2B8u;
    {
        const bool branch_taken_0x24e2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e2b8) {
            ctx->pc = 0x24E2C4u;
            goto label_24e2c4;
        }
    }
    ctx->pc = 0x24E2C0u;
    // 0x24e2c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24e2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e2c4:
    // 0x24e2c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E2C4u;
    {
        const bool branch_taken_0x24e2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2c4) {
            ctx->pc = 0x24E2DCu;
            goto label_24e2dc;
        }
    }
    ctx->pc = 0x24E2CCu;
    // 0x24e2cc: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24e2d0: 0xc08fb9c  jal         func_23EE70
    ctx->pc = 0x24E2D0u;
    SET_GPR_U32(ctx, 31, 0x24E2D8u);
    ctx->pc = 0x24E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E2D0u;
            // 0x24e2d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EE70u;
    if (runtime->hasFunction(0x23EE70u)) {
        auto targetFn = runtime->lookupFunction(0x23EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E2D8u; }
        if (ctx->pc != 0x24E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoveSelect__12CMenuKeyFuncFi_0x23ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E2D8u; }
        if (ctx->pc != 0x24E2D8u) { return; }
    }
    ctx->pc = 0x24E2D8u;
label_24e2d8:
    // 0x24e2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e2dc:
    // 0x24e2dc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24e2e0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E2E0u;
    {
        const bool branch_taken_0x24e2e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x24E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E2E0u;
            // 0x24e2e4: 0x8c510070  lw          $s1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2e0) {
            ctx->pc = 0x24E2F4u;
            goto label_24e2f4;
        }
    }
    ctx->pc = 0x24E2E8u;
    // 0x24e2e8: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x24e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x24e2ec: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E2ECu;
    {
        const bool branch_taken_0x24e2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x24e2ec) {
            ctx->pc = 0x24E2FCu;
            goto label_24e2fc;
        }
    }
    ctx->pc = 0x24E2F4u;
label_24e2f4:
    // 0x24e2f4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x24E2F4u;
    SET_GPR_U32(ctx, 31, 0x24E2FCu);
    ctx->pc = 0x24E2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E2F4u;
            // 0x24e2f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E2FCu; }
        if (ctx->pc != 0x24E2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E2FCu; }
        if (ctx->pc != 0x24E2FCu) { return; }
    }
    ctx->pc = 0x24E2FCu;
label_24e2fc:
    // 0x24e2fc: 0xc08f91c  jal         func_23E470
    ctx->pc = 0x24E2FCu;
    SET_GPR_U32(ctx, 31, 0x24E304u);
    ctx->pc = 0x24E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E2FCu;
            // 0x24e300: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E304u; }
        if (ctx->pc != 0x24E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKeyInput__12CMenuKeyFuncFv_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E304u; }
        if (ctx->pc != 0x24E304u) { return; }
    }
    ctx->pc = 0x24E304u;
label_24e304:
    // 0x24e304: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E304u;
    {
        const bool branch_taken_0x24e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e304) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E30Cu;
    // 0x24e30c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x24e30cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x24e310: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e314: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E314u;
    {
        const bool branch_taken_0x24e314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e314) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E31Cu;
    // 0x24e31c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24e320: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x24e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x24e324: 0xa7829588  sh          $v0, -0x6A78($gp)
    ctx->pc = 0x24e324u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e328: 0xa791958c  sh          $s1, -0x6A74($gp)
    ctx->pc = 0x24e328u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 17));
label_24e32c:
    // 0x24e32c: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24E32Cu;
    {
        const bool branch_taken_0x24e32c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x24E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E32Cu;
            // 0x24e330: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e32c) {
            ctx->pc = 0x24E374u;
            goto label_24e374;
        }
    }
    ctx->pc = 0x24E334u;
    // 0x24e334: 0xc093058  jal         func_24C160
    ctx->pc = 0x24E334u;
    SET_GPR_U32(ctx, 31, 0x24E33Cu);
    ctx->pc = 0x24E338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E334u;
            // 0x24e338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C160u;
    if (runtime->hasFunction(0x24C160u)) {
        auto targetFn = runtime->lookupFunction(0x24C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E33Cu; }
        if (ctx->pc != 0x24E33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemSelectDiffer__Fi_0x24c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E33Cu; }
        if (ctx->pc != 0x24E33Cu) { return; }
    }
    ctx->pc = 0x24E33Cu;
label_24e33c:
    // 0x24e33c: 0x86830198  lh          $v1, 0x198($s4)
    ctx->pc = 0x24e33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 408)));
    // 0x24e340: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E340u;
    {
        const bool branch_taken_0x24e340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e340) {
            ctx->pc = 0x24E390u;
            goto label_24e390;
        }
    }
    ctx->pc = 0x24E348u;
    // 0x24e348: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x24e348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
    // 0x24e34c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E34Cu;
    {
        const bool branch_taken_0x24e34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e34c) {
            ctx->pc = 0x24E390u;
            goto label_24e390;
        }
    }
    ctx->pc = 0x24E354u;
    // 0x24e354: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E354u;
    {
        const bool branch_taken_0x24e354 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E354u;
            // 0x24e358: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e354) {
            ctx->pc = 0x24E364u;
            goto label_24e364;
        }
    }
    ctx->pc = 0x24E35Cu;
    // 0x24e35c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x24E35Cu;
    {
        const bool branch_taken_0x24e35c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e35c) {
            ctx->pc = 0x24E390u;
            goto label_24e390;
        }
    }
    ctx->pc = 0x24E364u;
label_24e364:
    // 0x24e364: 0xc08a240  jal         func_228900
    ctx->pc = 0x24E364u;
    SET_GPR_U32(ctx, 31, 0x24E36Cu);
    ctx->pc = 0x24E368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E364u;
            // 0x24e368: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E36Cu; }
        if (ctx->pc != 0x24E36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E36Cu; }
        if (ctx->pc != 0x24E36Cu) { return; }
    }
    ctx->pc = 0x24E36Cu;
label_24e36c:
    // 0x24e36c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24E36Cu;
    {
        const bool branch_taken_0x24e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E36Cu;
            // 0x24e370: 0xa6800198  sh          $zero, 0x198($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 408), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e36c) {
            ctx->pc = 0x24E390u;
            goto label_24e390;
        }
    }
    ctx->pc = 0x24E374u;
label_24e374:
    // 0x24e374: 0xc0abf10  jal         func_2AFC40
    ctx->pc = 0x24E374u;
    SET_GPR_U32(ctx, 31, 0x24E37Cu);
    ctx->pc = 0x24E378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E374u;
            // 0x24e378: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC40u;
    if (runtime->hasFunction(0x2AFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E37Cu; }
        if (ctx->pc != 0x24E37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E37Cu; }
        if (ctx->pc != 0x24E37Cu) { return; }
    }
    ctx->pc = 0x24E37Cu;
label_24e37c:
    // 0x24e37c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E37Cu;
    {
        const bool branch_taken_0x24e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E37Cu;
            // 0x24e380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e37c) {
            ctx->pc = 0x24E390u;
            goto label_24e390;
        }
    }
    ctx->pc = 0x24E384u;
    // 0x24e384: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e388: 0xc0920b0  jal         func_2482C0
    ctx->pc = 0x24E388u;
    SET_GPR_U32(ctx, 31, 0x24E390u);
    ctx->pc = 0x24E38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E388u;
            // 0x24e38c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2482C0u;
    if (runtime->hasFunction(0x2482C0u)) {
        auto targetFn = runtime->lookupFunction(0x2482C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E390u; }
        if (ctx->pc != 0x24E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PushKey__13CMenuItemInfoFii_0x2482c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E390u; }
        if (ctx->pc != 0x24E390u) { return; }
    }
    ctx->pc = 0x24E390u;
label_24e390:
    // 0x24e390: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e394: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24e394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24e398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e39c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24e39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24e3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24e3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24E3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E3A8u;
            // 0x24e3ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24E3B0u;
}
