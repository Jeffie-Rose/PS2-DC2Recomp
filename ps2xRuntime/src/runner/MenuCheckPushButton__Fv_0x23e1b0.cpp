#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCheckPushButton__Fv
// Address: 0x23e1b0 - 0x23e2d4
void MenuCheckPushButton__Fv_0x23e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCheckPushButton__Fv_0x23e1b0");
#endif

    switch (ctx->pc) {
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e208u: goto label_23e208;
        case 0x23e224u: goto label_23e224;
        case 0x23e240u: goto label_23e240;
        case 0x23e25cu: goto label_23e25c;
        case 0x23e278u: goto label_23e278;
        case 0x23e294u: goto label_23e294;
        case 0x23e2b0u: goto label_23e2b0;
        default: break;
    }

    ctx->pc = 0x23e1b0u;

    // 0x23e1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e1c0: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x23e1c4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x23e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x23e1c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23e1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1cc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E1CCu;
    {
        const bool branch_taken_0x23e1cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1CCu;
            // 0x23e1d0: 0x26310c60  addiu       $s1, $s1, 0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1cc) {
            ctx->pc = 0x23E1DCu;
            goto label_23e1dc;
        }
    }
    ctx->pc = 0x23E1D4u;
    // 0x23e1d4: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x23e1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x23e1d8: 0x26310c68  addiu       $s1, $s1, 0xC68
    ctx->pc = 0x23e1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3176));
label_23e1dc:
    // 0x23e1dc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e1e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e1e4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E1E4u;
    SET_GPR_U32(ctx, 31, 0x23E1ECu);
    ctx->pc = 0x23E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1E4u;
            // 0x23e1e8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E1ECu; }
        if (ctx->pc != 0x23E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E1ECu; }
        if (ctx->pc != 0x23E1ECu) { return; }
    }
    ctx->pc = 0x23E1ECu;
label_23e1ec:
    // 0x23e1ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E1ECu;
    {
        const bool branch_taken_0x23e1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1ECu;
            // 0x23e1f0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1ec) {
            ctx->pc = 0x23E1FCu;
            goto label_23e1fc;
        }
    }
    ctx->pc = 0x23E1F4u;
    // 0x23e1f4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x23E1F4u;
    {
        const bool branch_taken_0x23e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1F4u;
            // 0x23e1f8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1f4) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E1FCu;
label_23e1fc:
    // 0x23e1fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23e200: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E200u;
    SET_GPR_U32(ctx, 31, 0x23E208u);
    ctx->pc = 0x23E204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E200u;
            // 0x23e204: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E208u; }
        if (ctx->pc != 0x23E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E208u; }
        if (ctx->pc != 0x23E208u) { return; }
    }
    ctx->pc = 0x23E208u;
label_23e208:
    // 0x23e208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E208u;
    {
        const bool branch_taken_0x23e208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E208u;
            // 0x23e20c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e208) {
            ctx->pc = 0x23E218u;
            goto label_23e218;
        }
    }
    ctx->pc = 0x23E210u;
    // 0x23e210: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23E210u;
    {
        const bool branch_taken_0x23e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E210u;
            // 0x23e214: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e210) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E218u;
label_23e218:
    // 0x23e218: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e21c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E21Cu;
    SET_GPR_U32(ctx, 31, 0x23E224u);
    ctx->pc = 0x23E220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E21Cu;
            // 0x23e220: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E224u; }
        if (ctx->pc != 0x23E224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E224u; }
        if (ctx->pc != 0x23E224u) { return; }
    }
    ctx->pc = 0x23E224u;
label_23e224:
    // 0x23e224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E224u;
    {
        const bool branch_taken_0x23e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E224u;
            // 0x23e228: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e224) {
            ctx->pc = 0x23E234u;
            goto label_23e234;
        }
    }
    ctx->pc = 0x23E22Cu;
    // 0x23e22c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x23E22Cu;
    {
        const bool branch_taken_0x23e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E22Cu;
            // 0x23e230: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e22c) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E234u;
label_23e234:
    // 0x23e234: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x23e234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23e238: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E238u;
    SET_GPR_U32(ctx, 31, 0x23E240u);
    ctx->pc = 0x23E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E238u;
            // 0x23e23c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E240u; }
        if (ctx->pc != 0x23E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E240u; }
        if (ctx->pc != 0x23E240u) { return; }
    }
    ctx->pc = 0x23E240u;
label_23e240:
    // 0x23e240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E240u;
    {
        const bool branch_taken_0x23e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E240u;
            // 0x23e244: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e240) {
            ctx->pc = 0x23E250u;
            goto label_23e250;
        }
    }
    ctx->pc = 0x23E248u;
    // 0x23e248: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23E248u;
    {
        const bool branch_taken_0x23e248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E248u;
            // 0x23e24c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e248) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E250u;
label_23e250:
    // 0x23e250: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23e254: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E254u;
    SET_GPR_U32(ctx, 31, 0x23E25Cu);
    ctx->pc = 0x23E258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E254u;
            // 0x23e258: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E25Cu; }
        if (ctx->pc != 0x23E25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E25Cu; }
        if (ctx->pc != 0x23E25Cu) { return; }
    }
    ctx->pc = 0x23E25Cu;
label_23e25c:
    // 0x23e25c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E25Cu;
    {
        const bool branch_taken_0x23e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E25Cu;
            // 0x23e260: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e25c) {
            ctx->pc = 0x23E26Cu;
            goto label_23e26c;
        }
    }
    ctx->pc = 0x23E264u;
    // 0x23e264: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23E264u;
    {
        const bool branch_taken_0x23e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E264u;
            // 0x23e268: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e264) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E26Cu;
label_23e26c:
    // 0x23e26c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x23e270: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E270u;
    SET_GPR_U32(ctx, 31, 0x23E278u);
    ctx->pc = 0x23E274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E270u;
            // 0x23e274: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E278u; }
        if (ctx->pc != 0x23E278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E278u; }
        if (ctx->pc != 0x23E278u) { return; }
    }
    ctx->pc = 0x23E278u;
label_23e278:
    // 0x23e278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E278u;
    {
        const bool branch_taken_0x23e278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E278u;
            // 0x23e27c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e278) {
            ctx->pc = 0x23E288u;
            goto label_23e288;
        }
    }
    ctx->pc = 0x23E280u;
    // 0x23e280: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23E280u;
    {
        const bool branch_taken_0x23e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E280u;
            // 0x23e284: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e280) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E288u;
label_23e288:
    // 0x23e288: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x23e28c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E28Cu;
    SET_GPR_U32(ctx, 31, 0x23E294u);
    ctx->pc = 0x23E290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E28Cu;
            // 0x23e290: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E294u; }
        if (ctx->pc != 0x23E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E294u; }
        if (ctx->pc != 0x23E294u) { return; }
    }
    ctx->pc = 0x23E294u;
label_23e294:
    // 0x23e294: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E294u;
    {
        const bool branch_taken_0x23e294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E294u;
            // 0x23e298: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e294) {
            ctx->pc = 0x23E2A4u;
            goto label_23e2a4;
        }
    }
    ctx->pc = 0x23E29Cu;
    // 0x23e29c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E29Cu;
    {
        const bool branch_taken_0x23e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E29Cu;
            // 0x23e2a0: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e29c) {
            ctx->pc = 0x23E2BCu;
            goto label_23e2bc;
        }
    }
    ctx->pc = 0x23E2A4u;
label_23e2a4:
    // 0x23e2a4: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x23e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x23e2a8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x23E2A8u;
    SET_GPR_U32(ctx, 31, 0x23E2B0u);
    ctx->pc = 0x23E2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2A8u;
            // 0x23e2ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2B0u; }
        if (ctx->pc != 0x23E2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2B0u; }
        if (ctx->pc != 0x23E2B0u) { return; }
    }
    ctx->pc = 0x23E2B0u;
label_23e2b0:
    // 0x23e2b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E2B0u;
    {
        const bool branch_taken_0x23e2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2B0u;
            // 0x23e2b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2b0) {
            ctx->pc = 0x23E2C0u;
            goto label_23e2c0;
        }
    }
    ctx->pc = 0x23E2B8u;
    // 0x23e2b8: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x23e2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23e2bc:
    // 0x23e2bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e2c0:
    // 0x23e2c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e2c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23E2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2CCu;
            // 0x23e2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E2D4u;
}
