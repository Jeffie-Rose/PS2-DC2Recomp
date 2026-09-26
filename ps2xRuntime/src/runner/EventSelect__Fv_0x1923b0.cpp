#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventSelect__Fv
// Address: 0x1923b0 - 0x192c2c
void EventSelect__Fv_0x1923b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventSelect__Fv_0x1923b0");
#endif

    switch (ctx->pc) {
        case 0x1923d8u: goto label_1923d8;
        case 0x192424u: goto label_192424;
        case 0x192470u: goto label_192470;
        case 0x1924d8u: goto label_1924d8;
        case 0x1924f8u: goto label_1924f8;
        case 0x19253cu: goto label_19253c;
        case 0x192570u: goto label_192570;
        case 0x1926e0u: goto label_1926e0;
        case 0x1926ecu: goto label_1926ec;
        case 0x192714u: goto label_192714;
        case 0x192774u: goto label_192774;
        case 0x1927acu: goto label_1927ac;
        case 0x1927d0u: goto label_1927d0;
        case 0x1927ecu: goto label_1927ec;
        case 0x192800u: goto label_192800;
        case 0x192838u: goto label_192838;
        case 0x192878u: goto label_192878;
        case 0x19288cu: goto label_19288c;
        case 0x1928a4u: goto label_1928a4;
        case 0x1928b4u: goto label_1928b4;
        case 0x1928d4u: goto label_1928d4;
        case 0x1928ecu: goto label_1928ec;
        case 0x192a4cu: goto label_192a4c;
        case 0x192a64u: goto label_192a64;
        case 0x192ad0u: goto label_192ad0;
        case 0x192ae4u: goto label_192ae4;
        case 0x192b30u: goto label_192b30;
        case 0x192b58u: goto label_192b58;
        case 0x192b68u: goto label_192b68;
        case 0x192b8cu: goto label_192b8c;
        case 0x192b98u: goto label_192b98;
        case 0x192bb4u: goto label_192bb4;
        case 0x192bbcu: goto label_192bbc;
        case 0x192bc4u: goto label_192bc4;
        case 0x192bd4u: goto label_192bd4;
        case 0x192be8u: goto label_192be8;
        case 0x192bf0u: goto label_192bf0;
        case 0x192c04u: goto label_192c04;
        case 0x192c10u: goto label_192c10;
        default: break;
    }

    ctx->pc = 0x1923b0u;

    // 0x1923b0: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
    // 0x1923b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1923b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1923b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1923b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1923bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1923bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1923c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1923c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1923c4: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x1923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1923c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1923C8u;
    {
        const bool branch_taken_0x1923c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1923c8) {
            ctx->pc = 0x192410u;
            goto label_192410;
        }
    }
    ctx->pc = 0x1923D0u;
    // 0x1923d0: 0xc0b4e48  jal         func_2D3920
    ctx->pc = 0x1923D0u;
    SET_GPR_U32(ctx, 31, 0x1923D8u);
    ctx->pc = 0x2D3920u;
    if (runtime->hasFunction(0x2D3920u)) {
        auto targetFn = runtime->lookupFunction(0x2D3920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923D8u; }
        if (ctx->pc != 0x1923D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventViewLoop__Fv_0x2d3920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923D8u; }
        if (ctx->pc != 0x1923D8u) { return; }
    }
    ctx->pc = 0x1923D8u;
label_1923d8:
    // 0x1923d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1923D8u;
    {
        const bool branch_taken_0x1923d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1923DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923D8u;
            // 0x1923dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923d8) {
            ctx->pc = 0x1923E8u;
            goto label_1923e8;
        }
    }
    ctx->pc = 0x1923E0u;
    // 0x1923e0: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x1923E0u;
    {
        const bool branch_taken_0x1923e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923E0u;
            // 0x1923e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923e0) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x1923E8u;
label_1923e8:
    // 0x1923e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1923E8u;
    {
        const bool branch_taken_0x1923e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1923e8) {
            ctx->pc = 0x1923F8u;
            goto label_1923f8;
        }
    }
    ctx->pc = 0x1923F0u;
    // 0x1923f0: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x1923F0u;
    {
        const bool branch_taken_0x1923f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923F0u;
            // 0x1923f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923f0) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x1923F8u;
label_1923f8:
    // 0x1923f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1923f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1923fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1923FCu;
    {
        const bool branch_taken_0x1923fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x192400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923FCu;
            // 0x192400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923fc) {
            ctx->pc = 0x192408u;
            goto label_192408;
        }
    }
    ctx->pc = 0x192404u;
    // 0x192404: 0xaf808b2c  sw          $zero, -0x74D4($gp)
    ctx->pc = 0x192404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 0));
label_192408:
    // 0x192408: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x192408u;
    {
        const bool branch_taken_0x192408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192408u;
            // 0x19240c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192408) {
            ctx->pc = 0x192C18u;
            goto label_192c18;
        }
    }
    ctx->pc = 0x192410u;
label_192410:
    // 0x192410: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x192414: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x192414u;
    {
        const bool branch_taken_0x192414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192414) {
            ctx->pc = 0x19245Cu;
            goto label_19245c;
        }
    }
    ctx->pc = 0x19241Cu;
    // 0x19241c: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x19241Cu;
    SET_GPR_U32(ctx, 31, 0x192424u);
    ctx->pc = 0x31AC50u;
    if (runtime->hasFunction(0x31AC50u)) {
        auto targetFn = runtime->lookupFunction(0x31AC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192424u; }
        if (ctx->pc != 0x192424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FutureMapSelect__Fv_0x31ac50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192424u; }
        if (ctx->pc != 0x192424u) { return; }
    }
    ctx->pc = 0x192424u;
label_192424:
    // 0x192424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192424u;
            // 0x192428: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192424) {
            ctx->pc = 0x192434u;
            goto label_192434;
        }
    }
    ctx->pc = 0x19242Cu;
    // 0x19242c: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x19242Cu;
    {
        const bool branch_taken_0x19242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19242Cu;
            // 0x192430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19242c) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192434u;
label_192434:
    // 0x192434: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192434u;
    {
        const bool branch_taken_0x192434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x192434) {
            ctx->pc = 0x192444u;
            goto label_192444;
        }
    }
    ctx->pc = 0x19243Cu;
    // 0x19243c: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x19243Cu;
    {
        const bool branch_taken_0x19243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19243Cu;
            // 0x192440: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19243c) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192444u;
label_192444:
    // 0x192444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x192444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192448: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192448u;
    {
        const bool branch_taken_0x192448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192448u;
            // 0x19244c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192448) {
            ctx->pc = 0x192454u;
            goto label_192454;
        }
    }
    ctx->pc = 0x192450u;
    // 0x192450: 0xaf808b30  sw          $zero, -0x74D0($gp)
    ctx->pc = 0x192450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 0));
label_192454:
    // 0x192454: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x192454u;
    {
        const bool branch_taken_0x192454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192454) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x19245Cu;
label_19245c:
    // 0x19245c: 0x8f828b34  lw          $v0, -0x74CC($gp)
    ctx->pc = 0x19245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x192460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192460u;
    {
        const bool branch_taken_0x192460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192460u;
            // 0x192464: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192460) {
            ctx->pc = 0x192488u;
            goto label_192488;
        }
    }
    ctx->pc = 0x192468u;
    // 0x192468: 0xc0c6c44  jal         func_31B110
    ctx->pc = 0x192468u;
    SET_GPR_U32(ctx, 31, 0x192470u);
    ctx->pc = 0x31B110u;
    if (runtime->hasFunction(0x31B110u)) {
        auto targetFn = runtime->lookupFunction(0x31B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192470u; }
        if (ctx->pc != 0x192470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HDDMenuLoop__Fv_0x31b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192470u; }
        if (ctx->pc != 0x192470u) { return; }
    }
    ctx->pc = 0x192470u;
label_192470:
    // 0x192470: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192470u;
    {
        const bool branch_taken_0x192470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192470) {
            ctx->pc = 0x192480u;
            goto label_192480;
        }
    }
    ctx->pc = 0x192478u;
    // 0x192478: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x192478u;
    {
        const bool branch_taken_0x192478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192478u;
            // 0x19247c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192478) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192480u;
label_192480:
    // 0x192480: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x192480u;
    {
        const bool branch_taken_0x192480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192480u;
            // 0x192484: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192480) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192488u;
label_192488:
    // 0x192488: 0x27a30510  addiu       $v1, $sp, 0x510
    ctx->pc = 0x192488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x19248c: 0x24845540  addiu       $a0, $a0, 0x5540
    ctx->pc = 0x19248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21824));
    // 0x192490: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x192490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192494: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x192494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192498: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x192498u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19249c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x19249cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1924a0: 0x83828b3c  lb          $v0, -0x74C4($gp)
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937404)));
    // 0x1924a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924A4u;
    {
        const bool branch_taken_0x1924a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1924A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924A4u;
            // 0x1924a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924a4) {
            ctx->pc = 0x1924B8u;
            goto label_1924b8;
        }
    }
    ctx->pc = 0x1924ACu;
    // 0x1924ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1924b0: 0xaf808b38  sw          $zero, -0x74C8($gp)
    ctx->pc = 0x1924b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 0));
    // 0x1924b4: 0xa3828b3c  sb          $v0, -0x74C4($gp)
    ctx->pc = 0x1924b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937404), (uint8_t)GPR_U32(ctx, 2));
label_1924b8:
    // 0x1924b8: 0xdf828080  ld          $v0, -0x7F80($gp)
    ctx->pc = 0x1924b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934656)));
    // 0x1924bc: 0x27a30520  addiu       $v1, $sp, 0x520
    ctx->pc = 0x1924bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x1924c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1924c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1924c4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1924c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1924c8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1924c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1924cc: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1924ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1924d0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1924D0u;
    SET_GPR_U32(ctx, 31, 0x1924D8u);
    ctx->pc = 0x1924D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1924D0u;
            // 0x1924d4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924D8u; }
        if (ctx->pc != 0x1924D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924D8u; }
        if (ctx->pc != 0x1924D8u) { return; }
    }
    ctx->pc = 0x1924D8u;
label_1924d8:
    // 0x1924d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924D8u;
    {
        const bool branch_taken_0x1924d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924D8u;
            // 0x1924dc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924d8) {
            ctx->pc = 0x1924ECu;
            goto label_1924ec;
        }
    }
    ctx->pc = 0x1924E0u;
    // 0x1924e0: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x1924e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x1924e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1924e8: 0xaf828b38  sw          $v0, -0x74C8($gp)
    ctx->pc = 0x1924e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 2));
label_1924ec:
    // 0x1924ec: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1924ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1924f0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1924F0u;
    SET_GPR_U32(ctx, 31, 0x1924F8u);
    ctx->pc = 0x1924F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1924F0u;
            // 0x1924f4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924F8u; }
        if (ctx->pc != 0x1924F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924F8u; }
        if (ctx->pc != 0x1924F8u) { return; }
    }
    ctx->pc = 0x1924F8u;
label_1924f8:
    // 0x1924f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924F8u;
    {
        const bool branch_taken_0x1924f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924f8) {
            ctx->pc = 0x19250Cu;
            goto label_19250c;
        }
    }
    ctx->pc = 0x192500u;
    // 0x192500: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x192504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x192508: 0xaf828b38  sw          $v0, -0x74C8($gp)
    ctx->pc = 0x192508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 2));
label_19250c:
    // 0x19250c: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x19250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x192510: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192510u;
    {
        const bool branch_taken_0x192510 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x192514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192510u;
            // 0x192514: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192510) {
            ctx->pc = 0x19251Cu;
            goto label_19251c;
        }
    }
    ctx->pc = 0x192518u;
    // 0x192518: 0xaf828b38  sw          $v0, -0x74C8($gp)
    ctx->pc = 0x192518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 2));
label_19251c:
    // 0x19251c: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x19251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x192520: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x192520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x192524: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192524u;
    {
        const bool branch_taken_0x192524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192524u;
            // 0x192528: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192524) {
            ctx->pc = 0x192530u;
            goto label_192530;
        }
    }
    ctx->pc = 0x19252Cu;
    // 0x19252c: 0xaf808b38  sw          $zero, -0x74C8($gp)
    ctx->pc = 0x19252cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 0));
label_192530:
    // 0x192530: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x192530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x192534: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x192534u;
    SET_GPR_U32(ctx, 31, 0x19253Cu);
    ctx->pc = 0x192538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192534u;
            // 0x192538: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19253Cu; }
        if (ctx->pc != 0x19253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19253Cu; }
        if (ctx->pc != 0x19253Cu) { return; }
    }
    ctx->pc = 0x19253Cu;
label_19253c:
    // 0x19253c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19253Cu;
    {
        const bool branch_taken_0x19253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19253Cu;
            // 0x192540: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19253c) {
            ctx->pc = 0x192564u;
            goto label_192564;
        }
    }
    ctx->pc = 0x192544u;
    // 0x192544: 0x8f838b38  lw          $v1, -0x74C8($gp)
    ctx->pc = 0x192544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x192548: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19254c: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x19254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192554: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x192554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192558: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19255c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192560: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x192560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_192564:
    // 0x192564: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x192564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192568: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x192568u;
    SET_GPR_U32(ctx, 31, 0x192570u);
    ctx->pc = 0x19256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192568u;
            // 0x19256c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192570u; }
        if (ctx->pc != 0x192570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192570u; }
        if (ctx->pc != 0x192570u) { return; }
    }
    ctx->pc = 0x192570u;
label_192570:
    // 0x192570: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192570u;
    {
        const bool branch_taken_0x192570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192570) {
            ctx->pc = 0x192598u;
            goto label_192598;
        }
    }
    ctx->pc = 0x192578u;
    // 0x192578: 0x8f838b38  lw          $v1, -0x74C8($gp)
    ctx->pc = 0x192578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x19257c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19257cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192580: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192588: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19258c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192590: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x192590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x192594: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x192594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_192598:
    // 0x192598: 0x8f838b38  lw          $v1, -0x74C8($gp)
    ctx->pc = 0x192598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x19259c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1925a0: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1925A0u;
    {
        const bool branch_taken_0x1925a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1925A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925A0u;
            // 0x1925a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925a0) {
            ctx->pc = 0x19268Cu;
            goto label_19268c;
        }
    }
    ctx->pc = 0x1925A8u;
    // 0x1925a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1925a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1925ac: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1925ACu;
    {
        const bool branch_taken_0x1925ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1925B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925ACu;
            // 0x1925b0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925ac) {
            ctx->pc = 0x192654u;
            goto label_192654;
        }
    }
    ctx->pc = 0x1925B4u;
    // 0x1925b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1925b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1925b8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1925B8u;
    {
        const bool branch_taken_0x1925b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1925BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925B8u;
            // 0x1925bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925b8) {
            ctx->pc = 0x19261Cu;
            goto label_19261c;
        }
    }
    ctx->pc = 0x1925C0u;
    // 0x1925c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1925c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1925C4u;
    {
        const bool branch_taken_0x1925c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1925c4) {
            ctx->pc = 0x1925E0u;
            goto label_1925e0;
        }
    }
    ctx->pc = 0x1925CCu;
    // 0x1925cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1925ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1925D0u;
    {
        const bool branch_taken_0x1925d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1925d0) {
            ctx->pc = 0x1925E0u;
            goto label_1925e0;
        }
    }
    ctx->pc = 0x1925D8u;
    // 0x1925d8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1925D8u;
    {
        const bool branch_taken_0x1925d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1925d8) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x1925E0u;
label_1925e0:
    // 0x1925e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1925e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1925e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1925e8: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x1925e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x1925ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1925ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1925f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1925f4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1925F4u;
    {
        const bool branch_taken_0x1925f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1925f4) {
            ctx->pc = 0x192600u;
            goto label_192600;
        }
    }
    ctx->pc = 0x1925FCu;
    // 0x1925fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1925fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_192600:
    // 0x192600: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192604: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x192604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x192608: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x192608u;
    {
        const bool branch_taken_0x192608 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x192608) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x192610u;
    // 0x192610: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x192614: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x192614u;
    {
        const bool branch_taken_0x192614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192614u;
            // 0x192618: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192614) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x19261Cu;
label_19261c:
    // 0x19261c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192620: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192624: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192628: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19262c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19262Cu;
    {
        const bool branch_taken_0x19262c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19262c) {
            ctx->pc = 0x192638u;
            goto label_192638;
        }
    }
    ctx->pc = 0x192634u;
    // 0x192634: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x192634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_192638:
    // 0x192638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19263c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x19263cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x192640: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x192640u;
    {
        const bool branch_taken_0x192640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x192640) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x192648u;
    // 0x192648: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19264c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19264Cu;
    {
        const bool branch_taken_0x19264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19264Cu;
            // 0x192650: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19264c) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x192654u;
label_192654:
    // 0x192654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192658: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x19265c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192664: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192664u;
    {
        const bool branch_taken_0x192664 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x192664) {
            ctx->pc = 0x192670u;
            goto label_192670;
        }
    }
    ctx->pc = 0x19266Cu;
    // 0x19266c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19266cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_192670:
    // 0x192670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192674: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x192674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x192678: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x192678u;
    {
        const bool branch_taken_0x192678 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x192678) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x192680u;
    // 0x192680: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192684: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x192684u;
    {
        const bool branch_taken_0x192684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192684u;
            // 0x192688: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192684) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x19268Cu;
label_19268c:
    // 0x19268c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192690: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192694: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x192694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19269c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19269Cu;
    {
        const bool branch_taken_0x19269c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19269c) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x1926A4u;
    // 0x1926a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1926a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1926a8:
    // 0x1926a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1926a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1926ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1926acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1926b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1926B0u;
    {
        const bool branch_taken_0x1926b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1926b0) {
            ctx->pc = 0x1926C0u;
            goto label_1926c0;
        }
    }
    ctx->pc = 0x1926B8u;
    // 0x1926b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1926b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1926bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1926bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1926c0:
    // 0x1926c0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1926c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1926c4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1926c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x1926c8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1926c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1926cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1926ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926d0: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0
    ctx->pc = 0x1926d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
    // 0x1926d4: 0x24c64fc8  addiu       $a2, $a2, 0x4FC8
    ctx->pc = 0x1926d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20424));
    // 0x1926d8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1926D8u;
    SET_GPR_U32(ctx, 31, 0x1926E0u);
    ctx->pc = 0x1926DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926D8u;
            // 0x1926dc: 0x24e74d48  addiu       $a3, $a3, 0x4D48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926E0u; }
        if (ctx->pc != 0x1926E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926E0u; }
        if (ctx->pc != 0x1926E0u) { return; }
    }
    ctx->pc = 0x1926E0u;
label_1926e0:
    // 0x1926e0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1926e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1926e4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1926E4u;
    {
        const bool branch_taken_0x1926e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1926E4u;
            // 0x1926e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926e4) {
            ctx->pc = 0x19280Cu;
            goto label_19280c;
        }
    }
    ctx->pc = 0x1926ECu;
label_1926ec:
    // 0x1926ec: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x1926ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x1926f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1926f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1926f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1926f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926f8: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x1926f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1926fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1926fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x192700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192704: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x192708: 0x8c460520  lw          $a2, 0x520($v0)
    ctx->pc = 0x192708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x19270c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x19270Cu;
    SET_GPR_U32(ctx, 31, 0x192714u);
    ctx->pc = 0x192710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19270Cu;
            // 0x192710: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192714u; }
        if (ctx->pc != 0x192714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192714u; }
        if (ctx->pc != 0x192714u) { return; }
    }
    ctx->pc = 0x192714u;
label_192714:
    // 0x192714: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192718: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x192718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19271c: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x19271Cu;
    {
        const bool branch_taken_0x19271c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x192720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19271Cu;
            // 0x192720: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19271c) {
            ctx->pc = 0x1927B4u;
            goto label_1927b4;
        }
    }
    ctx->pc = 0x192724u;
    // 0x192724: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x192724u;
    {
        const bool branch_taken_0x192724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x192728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192724u;
            // 0x192728: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192724) {
            ctx->pc = 0x19277Cu;
            goto label_19277c;
        }
    }
    ctx->pc = 0x19272Cu;
    // 0x19272c: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19272Cu;
    {
        const bool branch_taken_0x19272c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x192730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19272Cu;
            // 0x192730: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19272c) {
            ctx->pc = 0x19277Cu;
            goto label_19277c;
        }
    }
    ctx->pc = 0x192734u;
    // 0x192734: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192734u;
    {
        const bool branch_taken_0x192734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x192738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192734u;
            // 0x192738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192734) {
            ctx->pc = 0x19274Cu;
            goto label_19274c;
        }
    }
    ctx->pc = 0x19273Cu;
    // 0x19273c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19273Cu;
    {
        const bool branch_taken_0x19273c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19273c) {
            ctx->pc = 0x19274Cu;
            goto label_19274c;
        }
    }
    ctx->pc = 0x192744u;
    // 0x192744: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x192744u;
    {
        const bool branch_taken_0x192744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192744) {
            ctx->pc = 0x1927F0u;
            goto label_1927f0;
        }
    }
    ctx->pc = 0x19274Cu;
label_19274c:
    // 0x19274c: 0x0  nop
    ctx->pc = 0x19274cu;
    // NOP
    // 0x192750: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192754: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192758: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19275c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x192760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192764: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x192764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192768: 0x24a54fe0  addiu       $a1, $a1, 0x4FE0
    ctx->pc = 0x192768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20448));
    // 0x19276c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x19276Cu;
    SET_GPR_U32(ctx, 31, 0x192774u);
    ctx->pc = 0x192770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19276Cu;
            // 0x192770: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192774u; }
        if (ctx->pc != 0x192774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192774u; }
        if (ctx->pc != 0x192774u) { return; }
    }
    ctx->pc = 0x192774u;
label_192774:
    // 0x192774: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x192774u;
    {
        const bool branch_taken_0x192774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192774u;
            // 0x192778: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192774) {
            ctx->pc = 0x1927F0u;
            goto label_1927f0;
        }
    }
    ctx->pc = 0x19277Cu;
label_19277c:
    // 0x19277c: 0x0  nop
    ctx->pc = 0x19277cu;
    // NOP
    // 0x192780: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192784: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192788: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19278c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x192790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x192794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19279c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1927a0: 0x8c460510  lw          $a2, 0x510($v0)
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x1927a4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1927A4u;
    SET_GPR_U32(ctx, 31, 0x1927ACu);
    ctx->pc = 0x1927A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927A4u;
            // 0x1927a8: 0x24a54fe8  addiu       $a1, $a1, 0x4FE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927ACu; }
        if (ctx->pc != 0x1927ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927ACu; }
        if (ctx->pc != 0x1927ACu) { return; }
    }
    ctx->pc = 0x1927ACu;
label_1927ac:
    // 0x1927ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1927ACu;
    {
        const bool branch_taken_0x1927ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1927ACu;
            // 0x1927b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927ac) {
            ctx->pc = 0x1927F0u;
            goto label_1927f0;
        }
    }
    ctx->pc = 0x1927B4u;
label_1927b4:
    // 0x1927b4: 0x0  nop
    ctx->pc = 0x1927b4u;
    // NOP
    // 0x1927b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1927b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1927bc: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x1927bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x1927c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1927c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1927c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1927c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1927c8: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x1927C8u;
    SET_GPR_U32(ctx, 31, 0x1927D0u);
    ctx->pc = 0x1927CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927C8u;
            // 0x1927cc: 0x27a50528  addiu       $a1, $sp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927D0u; }
        if (ctx->pc != 0x1927D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927D0u; }
        if (ctx->pc != 0x1927D0u) { return; }
    }
    ctx->pc = 0x1927D0u;
label_1927d0:
    // 0x1927d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1927D0u;
    {
        const bool branch_taken_0x1927d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927d0) {
            ctx->pc = 0x1927F0u;
            goto label_1927f0;
        }
    }
    ctx->pc = 0x1927D8u;
    // 0x1927d8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x1927dc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1927dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1927e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1927e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927e4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x1927E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927E4u;
            // 0x1927e8: 0x24a54fe8  addiu       $a1, $a1, 0x4FE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927ECu; }
        if (ctx->pc != 0x1927ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927ECu; }
        if (ctx->pc != 0x1927ECu) { return; }
    }
    ctx->pc = 0x1927ECu;
label_1927ec:
    // 0x1927ec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1927ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1927f0:
    // 0x1927f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1927f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927f8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1927F8u;
    SET_GPR_U32(ctx, 31, 0x192800u);
    ctx->pc = 0x1927FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927F8u;
            // 0x1927fc: 0x24a54db8  addiu       $a1, $a1, 0x4DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192800u; }
        if (ctx->pc != 0x192800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192800u; }
        if (ctx->pc != 0x192800u) { return; }
    }
    ctx->pc = 0x192800u;
label_192800:
    // 0x192800: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192804: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x192804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x192808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19280c:
    // 0x19280c: 0x0  nop
    ctx->pc = 0x19280cu;
    // NOP
    // 0x192810: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192814: 0x24425550  addiu       $v0, $v0, 0x5550
    ctx->pc = 0x192814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x192818: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19281c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x19281cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192820: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x192820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192824: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x192824u;
    {
        const bool branch_taken_0x192824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192824u;
            // 0x192828: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192824) {
            ctx->pc = 0x1926ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1926ec;
        }
    }
    ctx->pc = 0x19282Cu;
    // 0x19282c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19282cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192830: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192830u;
    SET_GPR_U32(ctx, 31, 0x192838u);
    ctx->pc = 0x192834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192830u;
            // 0x192834: 0x24a54db8  addiu       $a1, $a1, 0x4DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192838u; }
        if (ctx->pc != 0x192838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192838u; }
        if (ctx->pc != 0x192838u) { return; }
    }
    ctx->pc = 0x192838u;
label_192838:
    // 0x192838: 0x8f838b38  lw          $v1, -0x74C8($gp)
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x19283c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x19283cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192840: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x192840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192844: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x192844u;
    {
        const bool branch_taken_0x192844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192844u;
            // 0x192848: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192844) {
            ctx->pc = 0x192880u;
            goto label_192880;
        }
    }
    ctx->pc = 0x19284Cu;
    // 0x19284c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192850: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192850u;
    {
        const bool branch_taken_0x192850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192850u;
            // 0x192854: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192850) {
            ctx->pc = 0x19286Cu;
            goto label_19286c;
        }
    }
    ctx->pc = 0x192858u;
    // 0x192858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19285c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19285Cu;
    {
        const bool branch_taken_0x19285c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19285Cu;
            // 0x192860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19285c) {
            ctx->pc = 0x192870u;
            goto label_192870;
        }
    }
    ctx->pc = 0x192864u;
    // 0x192864: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192864u;
    {
        const bool branch_taken_0x192864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192864) {
            ctx->pc = 0x19288Cu;
            goto label_19288c;
        }
    }
    ctx->pc = 0x19286Cu;
label_19286c:
    // 0x19286c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19286cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192870:
    // 0x192870: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192870u;
    SET_GPR_U32(ctx, 31, 0x192878u);
    ctx->pc = 0x192874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192870u;
            // 0x192874: 0x24a54ff0  addiu       $a1, $a1, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192878u; }
        if (ctx->pc != 0x192878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192878u; }
        if (ctx->pc != 0x192878u) { return; }
    }
    ctx->pc = 0x192878u;
label_192878:
    // 0x192878: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x192878u;
    {
        const bool branch_taken_0x192878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192878) {
            ctx->pc = 0x19288Cu;
            goto label_19288c;
        }
    }
    ctx->pc = 0x192880u;
label_192880:
    // 0x192880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192884: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192884u;
    SET_GPR_U32(ctx, 31, 0x19288Cu);
    ctx->pc = 0x192888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192884u;
            // 0x192888: 0x24a55010  addiu       $a1, $a1, 0x5010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19288Cu; }
        if (ctx->pc != 0x19288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19288Cu; }
        if (ctx->pc != 0x19288Cu) { return; }
    }
    ctx->pc = 0x19288Cu;
label_19288c:
    // 0x19288c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x192890: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x192894: 0x24848090  addiu       $a0, $a0, -0x7F70
    ctx->pc = 0x192894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
    // 0x192898: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x192898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19289c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x19289Cu;
    SET_GPR_U32(ctx, 31, 0x1928A4u);
    ctx->pc = 0x1928A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19289Cu;
            // 0x1928a0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928A4u; }
        if (ctx->pc != 0x1928A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928A4u; }
        if (ctx->pc != 0x1928A4u) { return; }
    }
    ctx->pc = 0x1928A4u;
label_1928a4:
    // 0x1928a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1928a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1928a8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1928a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1928ac: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1928ACu;
    SET_GPR_U32(ctx, 31, 0x1928B4u);
    ctx->pc = 0x1928B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928ACu;
            // 0x1928b0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B4u; }
        if (ctx->pc != 0x1928B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B4u; }
        if (ctx->pc != 0x1928B4u) { return; }
    }
    ctx->pc = 0x1928B4u;
label_1928b4:
    // 0x1928b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1928B4u;
    {
        const bool branch_taken_0x1928b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928B4u;
            // 0x1928b8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928b4) {
            ctx->pc = 0x1928C8u;
            goto label_1928c8;
        }
    }
    ctx->pc = 0x1928BCu;
    // 0x1928bc: 0xaf808b10  sw          $zero, -0x74F0($gp)
    ctx->pc = 0x1928bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 0));
    // 0x1928c0: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1928C0u;
    {
        const bool branch_taken_0x1928c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928C0u;
            // 0x1928c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928c0) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x1928C8u;
label_1928c8:
    // 0x1928c8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1928c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1928cc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1928CCu;
    SET_GPR_U32(ctx, 31, 0x1928D4u);
    ctx->pc = 0x1928D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928CCu;
            // 0x1928d0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928D4u; }
        if (ctx->pc != 0x1928D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928D4u; }
        if (ctx->pc != 0x1928D4u) { return; }
    }
    ctx->pc = 0x1928D4u;
label_1928d4:
    // 0x1928d4: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1928D4u;
    {
        const bool branch_taken_0x1928d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928D4u;
            // 0x1928d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928d4) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x1928DCu;
    // 0x1928dc: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x1928dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x1928e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1928e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928e4: 0xc049c86  jal         func_127218
    ctx->pc = 0x1928E4u;
    SET_GPR_U32(ctx, 31, 0x1928ECu);
    ctx->pc = 0x1928E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928E4u;
            // 0x1928e8: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928ECu; }
        if (ctx->pc != 0x1928ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928ECu; }
        if (ctx->pc != 0x1928ECu) { return; }
    }
    ctx->pc = 0x1928ECu;
label_1928ec:
    // 0x1928ec: 0x3c0201e6  lui         $v0, 0x1E6
    ctx->pc = 0x1928ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)486 << 16));
    // 0x1928f0: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x1928f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x1928f4: 0x24427270  addiu       $v0, $v0, 0x7270
    ctx->pc = 0x1928f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    // 0x1928f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1928f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1928fc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1928fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192900: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x192900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192904: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x192904u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x192908: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x192908u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19290c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x19290cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x192910: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x192910u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x192914: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x192914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x192918: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x192918u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x19291c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x19291cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x192920: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x192920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x192924: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x192924u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x192928: 0x1020009d  beqz        $at, . + 4 + (0x9D << 2)
    ctx->pc = 0x192928u;
    {
        const bool branch_taken_0x192928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192928u;
            // 0x19292c: 0xafa7052c  sw          $a3, 0x52C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1324), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192928) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192930u;
    // 0x192930: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x192934: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x192934u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192938: 0x246350a0  addiu       $v1, $v1, 0x50A0
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20640));
    // 0x19293c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x192940: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192944: 0x600008  jr          $v1
    ctx->pc = 0x192944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19294Cu: goto label_19294c;
            case 0x192960u: goto label_192960;
            case 0x192A6Cu: goto label_192a6c;
            case 0x192AD8u: goto label_192ad8;
            case 0x192AF0u: goto label_192af0;
            case 0x192AF4u: goto label_192af4;
            case 0x192B04u: goto label_192b04;
            case 0x192B10u: goto label_192b10;
            case 0x192B38u: goto label_192b38;
            case 0x192B60u: goto label_192b60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19294Cu;
label_19294c:
    // 0x19294c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192950: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x192950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
    // 0x192954: 0xafa2052c  sw          $v0, 0x52C($sp)
    ctx->pc = 0x192954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1324), GPR_U32(ctx, 2));
    // 0x192958: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x192958u;
    {
        const bool branch_taken_0x192958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192958u;
            // 0x19295c: 0xa3a00490  sb          $zero, 0x490($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192958) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192960u;
label_192960:
    // 0x192960: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x192960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x192964: 0x24635510  addiu       $v1, $v1, 0x5510
    ctx->pc = 0x192964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21776));
    // 0x192968: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x192968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19296c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192970: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x192970u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x192974: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x192974u;
    {
        const bool branch_taken_0x192974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192974u;
            // 0x192978: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192974) {
            ctx->pc = 0x192A24u;
            goto label_192a24;
        }
    }
    ctx->pc = 0x19297Cu;
    // 0x19297c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x19297cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192980: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x192980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192984: 0x24a55080  addiu       $a1, $a1, 0x5080
    ctx->pc = 0x192984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20608));
    // 0x192988: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19298c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x19298cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192990: 0x800008  jr          $a0
    ctx->pc = 0x192990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192998u: goto label_192998;
            case 0x1929ACu: goto label_1929ac;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929D4u: goto label_1929d4;
            case 0x1929E8u: goto label_1929e8;
            case 0x1929FCu: goto label_1929fc;
            case 0x192A10u: goto label_192a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192998u;
label_192998:
    // 0x192998: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x192998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19299c: 0xafa70484  sw          $a3, 0x484($sp)
    ctx->pc = 0x19299cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 7));
    // 0x1929a0: 0xafa4052c  sw          $a0, 0x52C($sp)
    ctx->pc = 0x1929a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1324), GPR_U32(ctx, 4));
    // 0x1929a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1929A4u;
    {
        const bool branch_taken_0x1929a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929A4u;
            // 0x1929a8: 0xafa00440  sw          $zero, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929a4) {
            ctx->pc = 0x192A20u;
            goto label_192a20;
        }
    }
    ctx->pc = 0x1929ACu;
label_1929ac:
    // 0x1929ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1929acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1929b0: 0x240401f6  addiu       $a0, $zero, 0x1F6
    ctx->pc = 0x1929b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x1929b4: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x1929b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x1929b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1929B8u;
    {
        const bool branch_taken_0x1929b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929B8u;
            // 0x1929bc: 0xafa40488  sw          $a0, 0x488($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929b8) {
            ctx->pc = 0x192A20u;
            goto label_192a20;
        }
    }
    ctx->pc = 0x1929C0u;
label_1929c0:
    // 0x1929c0: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1929c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1929c4: 0x240401f6  addiu       $a0, $zero, 0x1F6
    ctx->pc = 0x1929c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x1929c8: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x1929c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x1929cc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1929CCu;
    {
        const bool branch_taken_0x1929cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929CCu;
            // 0x1929d0: 0xafa40488  sw          $a0, 0x488($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929cc) {
            ctx->pc = 0x192A20u;
            goto label_192a20;
        }
    }
    ctx->pc = 0x1929D4u;
label_1929d4:
    // 0x1929d4: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1929d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1929d8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1929d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1929dc: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x1929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x1929e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1929E0u;
    {
        const bool branch_taken_0x1929e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929E0u;
            // 0x1929e4: 0xafa40488  sw          $a0, 0x488($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929e0) {
            ctx->pc = 0x192A20u;
            goto label_192a20;
        }
    }
    ctx->pc = 0x1929E8u;
label_1929e8:
    // 0x1929e8: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1929e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1929ec: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1929ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1929f0: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x1929f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x1929f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1929F4u;
    {
        const bool branch_taken_0x1929f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929F4u;
            // 0x1929f8: 0xafa40488  sw          $a0, 0x488($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929f4) {
            ctx->pc = 0x192A20u;
            goto label_192a20;
        }
    }
    ctx->pc = 0x1929FCu;
label_1929fc:
    // 0x1929fc: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x1929fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x192a00: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x192a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x192a04: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x192a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x192a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x192A08u;
    {
        const bool branch_taken_0x192a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A08u;
            // 0x192a0c: 0xafa40488  sw          $a0, 0x488($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a08) {
            ctx->pc = 0x192A20u;
            goto label_192a20;
        }
    }
    ctx->pc = 0x192A10u;
label_192a10:
    // 0x192a10: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x192a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x192a14: 0x240401f6  addiu       $a0, $zero, 0x1F6
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x192a18: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x192a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x192a1c: 0xafa40488  sw          $a0, 0x488($sp)
    ctx->pc = 0x192a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 4));
label_192a20:
    // 0x192a20: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x192a20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_192a24:
    // 0x192a24: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192A24u;
    {
        const bool branch_taken_0x192a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x192A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A24u;
            // 0x192a28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a24) {
            ctx->pc = 0x192A30u;
            goto label_192a30;
        }
    }
    ctx->pc = 0x192A2Cu;
    // 0x192a2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x192a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192a30:
    // 0x192a30: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192A30u;
    {
        const bool branch_taken_0x192a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A30u;
            // 0x192a34: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a30) {
            ctx->pc = 0x192A54u;
            goto label_192a54;
        }
    }
    ctx->pc = 0x192A38u;
    // 0x192a38: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192a3c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x192a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x192a40: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x192a44: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192A44u;
    SET_GPR_U32(ctx, 31, 0x192A4Cu);
    ctx->pc = 0x192A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A44u;
            // 0x192a48: 0x24a55038  addiu       $a1, $a1, 0x5038 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A4Cu; }
        if (ctx->pc != 0x192A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A4Cu; }
        if (ctx->pc != 0x192A4Cu) { return; }
    }
    ctx->pc = 0x192A4Cu;
label_192a4c:
    // 0x192a4c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x192A4Cu;
    {
        const bool branch_taken_0x192a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a4c) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192A54u;
label_192a54:
    // 0x192a54: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x192a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x192a58: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x192a5c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192A5Cu;
    SET_GPR_U32(ctx, 31, 0x192A64u);
    ctx->pc = 0x192A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A5Cu;
            // 0x192a60: 0x24a55048  addiu       $a1, $a1, 0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A64u; }
        if (ctx->pc != 0x192A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A64u; }
        if (ctx->pc != 0x192A64u) { return; }
    }
    ctx->pc = 0x192A64u;
label_192a64:
    // 0x192a64: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x192A64u;
    {
        const bool branch_taken_0x192a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a64) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192A6Cu;
label_192a6c:
    // 0x192a6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192a74: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192a78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x192a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x192a7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192a80: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x192A80u;
    {
        const bool branch_taken_0x192a80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x192A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A80u;
            // 0x192a84: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a80) {
            ctx->pc = 0x192ABCu;
            goto label_192abc;
        }
    }
    ctx->pc = 0x192A88u;
    // 0x192a88: 0x10c7000a  beq         $a2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x192A88u;
    {
        const bool branch_taken_0x192a88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x192A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A88u;
            // 0x192a8c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a88) {
            ctx->pc = 0x192AB4u;
            goto label_192ab4;
        }
    }
    ctx->pc = 0x192A90u;
    // 0x192a90: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x192A90u;
    {
        const bool branch_taken_0x192a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A90u;
            // 0x192a94: 0x24020fa0  addiu       $v0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a90) {
            ctx->pc = 0x192AA0u;
            goto label_192aa0;
        }
    }
    ctx->pc = 0x192A98u;
    // 0x192a98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192A98u;
    {
        const bool branch_taken_0x192a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a98) {
            ctx->pc = 0x192AC0u;
            goto label_192ac0;
        }
    }
    ctx->pc = 0x192AA0u;
label_192aa0:
    // 0x192aa0: 0xafa70484  sw          $a3, 0x484($sp)
    ctx->pc = 0x192aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 7));
    // 0x192aa4: 0xafa20488  sw          $v0, 0x488($sp)
    ctx->pc = 0x192aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 2));
    // 0x192aa8: 0xafa30440  sw          $v1, 0x440($sp)
    ctx->pc = 0x192aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 3));
    // 0x192aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x192AACu;
    {
        const bool branch_taken_0x192aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AACu;
            // 0x192ab0: 0xafa3052c  sw          $v1, 0x52C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192aac) {
            ctx->pc = 0x192AC0u;
            goto label_192ac0;
        }
    }
    ctx->pc = 0x192AB4u;
label_192ab4:
    // 0x192ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192AB4u;
    {
        const bool branch_taken_0x192ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AB4u;
            // 0x192ab8: 0xafa20440  sw          $v0, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ab4) {
            ctx->pc = 0x192AC0u;
            goto label_192ac0;
        }
    }
    ctx->pc = 0x192ABCu;
label_192abc:
    // 0x192abc: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x192abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
label_192ac0:
    // 0x192ac0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192ac4: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x192ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x192ac8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192AC8u;
    SET_GPR_U32(ctx, 31, 0x192AD0u);
    ctx->pc = 0x192ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192AC8u;
            // 0x192acc: 0x24a55058  addiu       $a1, $a1, 0x5058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AD0u; }
        if (ctx->pc != 0x192AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AD0u; }
        if (ctx->pc != 0x192AD0u) { return; }
    }
    ctx->pc = 0x192AD0u;
label_192ad0:
    // 0x192ad0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x192AD0u;
    {
        const bool branch_taken_0x192ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ad0) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192AD8u;
label_192ad8:
    // 0x192ad8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192adc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192ADCu;
    SET_GPR_U32(ctx, 31, 0x192AE4u);
    ctx->pc = 0x192AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192ADCu;
            // 0x192ae0: 0x24a55068  addiu       $a1, $a1, 0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AE4u; }
        if (ctx->pc != 0x192AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AE4u; }
        if (ctx->pc != 0x192AE4u) { return; }
    }
    ctx->pc = 0x192AE4u;
label_192ae4:
    // 0x192ae4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x192ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x192ae8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x192AE8u;
    {
        const bool branch_taken_0x192ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AE8u;
            // 0x192aec: 0xafa20440  sw          $v0, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ae8) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192AF0u;
label_192af0:
    // 0x192af0: 0xaf879e08  sw          $a3, -0x61F8($gp)
    ctx->pc = 0x192af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942216), GPR_U32(ctx, 7));
label_192af4:
    // 0x192af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192afc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x192AFCu;
    {
        const bool branch_taken_0x192afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AFCu;
            // 0x192b00: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192afc) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192B04u;
label_192b04:
    // 0x192b04: 0xaf878b30  sw          $a3, -0x74D0($gp)
    ctx->pc = 0x192b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 7));
    // 0x192b08: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B08u;
            // 0x192b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192B10u;
label_192b10:
    // 0x192b10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192b14: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192b18: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192b1c: 0x24a55070  addiu       $a1, $a1, 0x5070
    ctx->pc = 0x192b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20592));
    // 0x192b20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x192b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x192b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x192b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192b28: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192B28u;
    SET_GPR_U32(ctx, 31, 0x192B30u);
    ctx->pc = 0x192B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B28u;
            // 0x192b2c: 0xafa20440  sw          $v0, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B30u; }
        if (ctx->pc != 0x192B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B30u; }
        if (ctx->pc != 0x192B30u) { return; }
    }
    ctx->pc = 0x192B30u;
label_192b30:
    // 0x192b30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x192B30u;
    {
        const bool branch_taken_0x192b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b30) {
            ctx->pc = 0x192BA0u;
            goto label_192ba0;
        }
    }
    ctx->pc = 0x192B38u;
label_192b38:
    // 0x192b38: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x192b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x192b3c: 0xaf878b34  sw          $a3, -0x74CC($gp)
    ctx->pc = 0x192b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 7));
    // 0x192b40: 0x8c2371a4  lw          $v1, 0x71A4($at)
    ctx->pc = 0x192b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29092)));
    // 0x192b44: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x192b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x192b48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x192b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x192b4c: 0x8c2271a0  lw          $v0, 0x71A0($at)
    ctx->pc = 0x192b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29088)));
    // 0x192b50: 0xc0c6c30  jal         func_31B0C0
    ctx->pc = 0x192B50u;
    SET_GPR_U32(ctx, 31, 0x192B58u);
    ctx->pc = 0x192B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B50u;
            // 0x192b54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31B0C0u;
    if (runtime->hasFunction(0x31B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x31B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B58u; }
        if (ctx->pc != 0x192B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitHDDMenu__FP1_0x31b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B58u; }
        if (ctx->pc != 0x192B58u) { return; }
    }
    ctx->pc = 0x192B58u;
label_192b58:
    // 0x192b58: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x192B58u;
    {
        const bool branch_taken_0x192b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B58u;
            // 0x192b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b58) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192B60u;
label_192b60:
    // 0x192b60: 0xc064228  jal         func_1908A0
    ctx->pc = 0x192B60u;
    SET_GPR_U32(ctx, 31, 0x192B68u);
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B68u; }
        if (ctx->pc != 0x192B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B68u; }
        if (ctx->pc != 0x192B68u) { return; }
    }
    ctx->pc = 0x192B68u;
label_192b68:
    // 0x192b68: 0x8f838b38  lw          $v1, -0x74C8($gp)
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x192b6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192b70: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x192b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x192b74: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x192b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x192b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192b80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192b84: 0xc0a7c44  jal         func_29F110
    ctx->pc = 0x192B84u;
    SET_GPR_U32(ctx, 31, 0x192B8Cu);
    ctx->pc = 0x192B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B84u;
            // 0x192b88: 0x27a6052c  addiu       $a2, $sp, 0x52C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1324));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F110u;
    if (runtime->hasFunction(0x29F110u)) {
        auto targetFn = runtime->lookupFunction(0x29F110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B8Cu; }
        if (ctx->pc != 0x192B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitOmakeEnv__FiP13INIT_LOOP_ARGPi_0x29f110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B8Cu; }
        if (ctx->pc != 0x192B8Cu) { return; }
    }
    ctx->pc = 0x192B8Cu;
label_192b8c:
    // 0x192b8c: 0x8fa4052c  lw          $a0, 0x52C($sp)
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1324)));
    // 0x192b90: 0xc064240  jal         func_190900
    ctx->pc = 0x192B90u;
    SET_GPR_U32(ctx, 31, 0x192B98u);
    ctx->pc = 0x192B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B90u;
            // 0x192b94: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B98u; }
        if (ctx->pc != 0x192B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B98u; }
        if (ctx->pc != 0x192B98u) { return; }
    }
    ctx->pc = 0x192B98u;
label_192b98:
    // 0x192b98: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x192B98u;
    {
        const bool branch_taken_0x192b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B98u;
            // 0x192b9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b98) {
            ctx->pc = 0x192C14u;
            goto label_192c14;
        }
    }
    ctx->pc = 0x192BA0u;
label_192ba0:
    // 0x192ba0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192ba4: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x192ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x192ba8: 0x24a55078  addiu       $a1, $a1, 0x5078
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20600));
    // 0x192bac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192BACu;
    SET_GPR_U32(ctx, 31, 0x192BB4u);
    ctx->pc = 0x192BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BACu;
            // 0x192bb0: 0x27a60490  addiu       $a2, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB4u; }
        if (ctx->pc != 0x192BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB4u; }
        if (ctx->pc != 0x192BB4u) { return; }
    }
    ctx->pc = 0x192BB4u;
label_192bb4:
    // 0x192bb4: 0xc064228  jal         func_1908A0
    ctx->pc = 0x192BB4u;
    SET_GPR_U32(ctx, 31, 0x192BBCu);
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BBCu; }
        if (ctx->pc != 0x192BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BBCu; }
        if (ctx->pc != 0x192BBCu) { return; }
    }
    ctx->pc = 0x192BBCu;
label_192bbc:
    // 0x192bbc: 0xc064df0  jal         func_1937C0
    ctx->pc = 0x192BBCu;
    SET_GPR_U32(ctx, 31, 0x192BC4u);
    ctx->pc = 0x192BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BBCu;
            // 0x192bc0: 0x27a404d0  addiu       $a0, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1937C0u;
    if (runtime->hasFunction(0x1937C0u)) {
        auto targetFn = runtime->lookupFunction(0x1937C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC4u; }
        if (ctx->pc != 0x192BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameConfig__FPc_0x1937c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC4u; }
        if (ctx->pc != 0x192BC4u) { return; }
    }
    ctx->pc = 0x192BC4u;
label_192bc4:
    // 0x192bc4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x192BC4u;
    {
        const bool branch_taken_0x192bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x192bc4) {
            ctx->pc = 0x192C04u;
            goto label_192c04;
        }
    }
    ctx->pc = 0x192BCCu;
    // 0x192bcc: 0xc064220  jal         func_190880
    ctx->pc = 0x192BCCu;
    SET_GPR_U32(ctx, 31, 0x192BD4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BD4u; }
        if (ctx->pc != 0x192BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BD4u; }
        if (ctx->pc != 0x192BD4u) { return; }
    }
    ctx->pc = 0x192BD4u;
label_192bd4:
    // 0x192bd4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x192bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x192bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192bdc: 0x3463d2a0  ori         $v1, $v1, 0xD2A0
    ctx->pc = 0x192bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53920);
    // 0x192be0: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x192BE0u;
    SET_GPR_U32(ctx, 31, 0x192BE8u);
    ctx->pc = 0x192BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BE0u;
            // 0x192be4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BE8u; }
        if (ctx->pc != 0x192BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BE8u; }
        if (ctx->pc != 0x192BE8u) { return; }
    }
    ctx->pc = 0x192BE8u;
label_192be8:
    // 0x192be8: 0xc064220  jal         func_190880
    ctx->pc = 0x192BE8u;
    SET_GPR_U32(ctx, 31, 0x192BF0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BF0u; }
        if (ctx->pc != 0x192BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BF0u; }
        if (ctx->pc != 0x192BF0u) { return; }
    }
    ctx->pc = 0x192BF0u;
label_192bf0:
    // 0x192bf0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x192bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x192bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192bf8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x192bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x192bfc: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x192BFCu;
    SET_GPR_U32(ctx, 31, 0x192C04u);
    ctx->pc = 0x192C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BFCu;
            // 0x192c00: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C04u; }
        if (ctx->pc != 0x192C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C04u; }
        if (ctx->pc != 0x192C04u) { return; }
    }
    ctx->pc = 0x192C04u;
label_192c04:
    // 0x192c04: 0x8fa4052c  lw          $a0, 0x52C($sp)
    ctx->pc = 0x192c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1324)));
    // 0x192c08: 0xc064240  jal         func_190900
    ctx->pc = 0x192C08u;
    SET_GPR_U32(ctx, 31, 0x192C10u);
    ctx->pc = 0x192C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C08u;
            // 0x192c0c: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C10u; }
        if (ctx->pc != 0x192C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C10u; }
        if (ctx->pc != 0x192C10u) { return; }
    }
    ctx->pc = 0x192C10u;
label_192c10:
    // 0x192c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192c14:
    // 0x192c14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x192c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192c18:
    // 0x192c18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192c18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192c24: 0x3e00008  jr          $ra
    ctx->pc = 0x192C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C24u;
            // 0x192c28: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192C2Cu;
}
