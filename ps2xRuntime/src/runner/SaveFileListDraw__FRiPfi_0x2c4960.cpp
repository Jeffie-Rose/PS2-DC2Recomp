#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveFileListDraw__FRiPfi
// Address: 0x2c4960 - 0x2c4fa8
void SaveFileListDraw__FRiPfi_0x2c4960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveFileListDraw__FRiPfi_0x2c4960");
#endif

    switch (ctx->pc) {
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c4a30u: goto label_2c4a30;
        case 0x2c4a38u: goto label_2c4a38;
        case 0x2c4a44u: goto label_2c4a44;
        case 0x2c4a50u: goto label_2c4a50;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4a74u: goto label_2c4a74;
        case 0x2c4a84u: goto label_2c4a84;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4b0cu: goto label_2c4b0c;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b38u: goto label_2c4b38;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b90u: goto label_2c4b90;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bc4u: goto label_2c4bc4;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bfcu: goto label_2c4bfc;
        case 0x2c4c14u: goto label_2c4c14;
        case 0x2c4c4cu: goto label_2c4c4c;
        case 0x2c4c64u: goto label_2c4c64;
        case 0x2c4c80u: goto label_2c4c80;
        case 0x2c4c90u: goto label_2c4c90;
        case 0x2c4ca0u: goto label_2c4ca0;
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cc0u: goto label_2c4cc0;
        case 0x2c4cd0u: goto label_2c4cd0;
        case 0x2c4cdcu: goto label_2c4cdc;
        case 0x2c4d2cu: goto label_2c4d2c;
        case 0x2c4d44u: goto label_2c4d44;
        case 0x2c4d5cu: goto label_2c4d5c;
        case 0x2c4d68u: goto label_2c4d68;
        case 0x2c4d84u: goto label_2c4d84;
        case 0x2c4d98u: goto label_2c4d98;
        case 0x2c4da4u: goto label_2c4da4;
        case 0x2c4db4u: goto label_2c4db4;
        case 0x2c4dc0u: goto label_2c4dc0;
        case 0x2c4dccu: goto label_2c4dcc;
        case 0x2c4ddcu: goto label_2c4ddc;
        case 0x2c4de8u: goto label_2c4de8;
        case 0x2c4df4u: goto label_2c4df4;
        case 0x2c4e00u: goto label_2c4e00;
        case 0x2c4e0cu: goto label_2c4e0c;
        case 0x2c4e18u: goto label_2c4e18;
        case 0x2c4e28u: goto label_2c4e28;
        case 0x2c4e3cu: goto label_2c4e3c;
        case 0x2c4e54u: goto label_2c4e54;
        case 0x2c4e68u: goto label_2c4e68;
        case 0x2c4e84u: goto label_2c4e84;
        case 0x2c4eacu: goto label_2c4eac;
        case 0x2c4ec0u: goto label_2c4ec0;
        case 0x2c4ed4u: goto label_2c4ed4;
        case 0x2c4ee8u: goto label_2c4ee8;
        case 0x2c4f18u: goto label_2c4f18;
        case 0x2c4f30u: goto label_2c4f30;
        case 0x2c4f44u: goto label_2c4f44;
        case 0x2c4f54u: goto label_2c4f54;
        case 0x2c4f5cu: goto label_2c4f5c;
        case 0x2c4f64u: goto label_2c4f64;
        default: break;
    }

    ctx->pc = 0x2c4960u;

    // 0x2c4960: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x2c4964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c4968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c496c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c4970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c4970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c4974: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c4974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4978: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c497c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c498c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4990: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x2c4990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x2c4994: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4998: 0x18600177  blez        $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x2C4998u;
    {
        const bool branch_taken_0x2c4998 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4998u;
            // 0x2c499c: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4998) {
            ctx->pc = 0x2C4F78u;
            goto label_2c4f78;
        }
    }
    ctx->pc = 0x2C49A0u;
    // 0x2c49a0: 0x8f839d10  lw          $v1, -0x62F0($gp)
    ctx->pc = 0x2c49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941968)));
    // 0x2c49a4: 0x10600174  beqz        $v1, . + 4 + (0x174 << 2)
    ctx->pc = 0x2C49A4u;
    {
        const bool branch_taken_0x2c49a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49a4) {
            ctx->pc = 0x2C4F78u;
            goto label_2c4f78;
        }
    }
    ctx->pc = 0x2C49ACu;
    // 0x2c49ac: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2c49acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c49b0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2c49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c49b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c49b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49b8: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x2c49b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2c49bc: 0x2407017e  addiu       $a3, $zero, 0x17E
    ctx->pc = 0x2c49bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x2c49c0: 0x2408004a  addiu       $t0, $zero, 0x4A
    ctx->pc = 0x2c49c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2c49c4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2c49c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2c49c8: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x2c49c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c49cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2C49CCu;
    SET_GPR_U32(ctx, 31, 0x2C49D4u);
    ctx->pc = 0x2C49D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49CCu;
            // 0x2c49d0: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49D4u; }
        if (ctx->pc != 0x2C49D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49D4u; }
        if (ctx->pc != 0x2C49D4u) { return; }
    }
    ctx->pc = 0x2C49D4u;
label_2c49d4:
    // 0x2c49d4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2c49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c49d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c49d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49dc: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x2c49dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2c49e0: 0x240700ea  addiu       $a3, $zero, 0xEA
    ctx->pc = 0x2c49e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x2c49e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2C49E4u;
    SET_GPR_U32(ctx, 31, 0x2C49ECu);
    ctx->pc = 0x2C49E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49E4u;
            // 0x2c49e8: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49ECu; }
        if (ctx->pc != 0x2C49ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49ECu; }
        if (ctx->pc != 0x2C49ECu) { return; }
    }
    ctx->pc = 0x2C49ECu;
label_2c49ec:
    // 0x2c49ec: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2c49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c49f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C49F0u;
    {
        const bool branch_taken_0x2c49f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C49F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49F0u;
            // 0x2c49f4: 0x240301ca  addiu       $v1, $zero, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49f0) {
            ctx->pc = 0x2C4A04u;
            goto label_2c4a04;
        }
    }
    ctx->pc = 0x2C49F8u;
    // 0x2c49f8: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x2c49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2c49fc: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x2c49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x2c4a00: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2c4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_2c4a04:
    // 0x2c4a04: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a08: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x2c4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x2c4a0c: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x2c4a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x2c4a10: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c4a14: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x2c4a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2c4a18: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x2c4a18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2c4a1c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x2c4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c4a20: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2c4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2c4a24: 0x1010  mfhi        $v0
    ctx->pc = 0x2c4a24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c4a28: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2C4A28u;
    SET_GPR_U32(ctx, 31, 0x2C4A30u);
    ctx->pc = 0x2C4A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A28u;
            // 0x2c4a2c: 0x46f021  addu        $fp, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A30u; }
        if (ctx->pc != 0x2C4A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A30u; }
        if (ctx->pc != 0x2C4A30u) { return; }
    }
    ctx->pc = 0x2C4A30u;
label_2c4a30:
    // 0x2c4a30: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2C4A30u;
    SET_GPR_U32(ctx, 31, 0x2C4A38u);
    ctx->pc = 0x2C4A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A30u;
            // 0x2c4a34: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A38u; }
        if (ctx->pc != 0x2C4A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A38u; }
        if (ctx->pc != 0x2C4A38u) { return; }
    }
    ctx->pc = 0x2C4A38u;
label_2c4a38:
    // 0x2c4a38: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4a3c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2C4A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A44u);
    ctx->pc = 0x2C4A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A3Cu;
            // 0x2c4a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A44u; }
        if (ctx->pc != 0x2C4A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A44u; }
        if (ctx->pc != 0x2C4A44u) { return; }
    }
    ctx->pc = 0x2C4A44u;
label_2c4a44:
    // 0x2c4a44: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4a48: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2C4A48u;
    SET_GPR_U32(ctx, 31, 0x2C4A50u);
    ctx->pc = 0x2C4A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A48u;
            // 0x2c4a4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A50u; }
        if (ctx->pc != 0x2C4A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A50u; }
        if (ctx->pc != 0x2C4A50u) { return; }
    }
    ctx->pc = 0x2C4A50u;
label_2c4a50:
    // 0x2c4a50: 0x8f859d10  lw          $a1, -0x62F0($gp)
    ctx->pc = 0x2c4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941968)));
    // 0x2c4a54: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2C4A54u;
    SET_GPR_U32(ctx, 31, 0x2C4A5Cu);
    ctx->pc = 0x2C4A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A54u;
            // 0x2c4a58: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A5Cu; }
        if (ctx->pc != 0x2C4A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A5Cu; }
        if (ctx->pc != 0x2C4A5Cu) { return; }
    }
    ctx->pc = 0x2C4A5Cu;
label_2c4a5c:
    // 0x2c4a5c: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x2c4a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a60: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2c4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c4a64: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4a68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c4a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a6c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2C4A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A74u);
    ctx->pc = 0x2C4A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A6Cu;
            // 0x2c4a70: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A74u; }
        if (ctx->pc != 0x2C4A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A74u; }
        if (ctx->pc != 0x2C4A74u) { return; }
    }
    ctx->pc = 0x2C4A74u;
label_2c4a74:
    // 0x2c4a74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c4a78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c4a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a84:
    // 0x2c4a84: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2c4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2c4a88: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c4a8c: 0x24560130  addiu       $s6, $v0, 0x130
    ctx->pc = 0x2c4a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2c4a90: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4a94: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2c4a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a9c: 0x245300c0  addiu       $s3, $v0, 0xC0
    ctx->pc = 0x2c4a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2c4aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4aa4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c4aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4aac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2c4aacu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ab0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2c4ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ab4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4ab8: 0x26740004  addiu       $s4, $s3, 0x4
    ctx->pc = 0x2c4ab8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c4abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4ac0: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2c4ac4: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x2c4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2c4ac8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2c4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2c4acc: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c4accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4ad0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c4ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4ad4: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x2c4ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c4ad8: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4adc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c4adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4ae0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2C4AE0u;
    SET_GPR_U32(ctx, 31, 0x2C4AE8u);
    ctx->pc = 0x2C4AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4AE0u;
            // 0x2c4ae4: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4AE8u; }
        if (ctx->pc != 0x2C4AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4AE8u; }
        if (ctx->pc != 0x2C4AE8u) { return; }
    }
    ctx->pc = 0x2C4AE8u;
label_2c4ae8:
    // 0x2c4ae8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2c4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4aec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c4af0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2c4af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4af4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4af8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c4af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4afc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2c4afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c4b00: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x2c4b00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c4b04: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2C4B04u;
    SET_GPR_U32(ctx, 31, 0x2C4B0Cu);
    ctx->pc = 0x2C4B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B04u;
            // 0x2c4b08: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B0Cu; }
        if (ctx->pc != 0x2C4B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B0Cu; }
        if (ctx->pc != 0x2C4B0Cu) { return; }
    }
    ctx->pc = 0x2C4B0Cu;
label_2c4b0c:
    // 0x2c4b0c: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x2c4b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4b10: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c4b14: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4b18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c4b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b1c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2C4B1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4B24u);
    ctx->pc = 0x2C4B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B1Cu;
            // 0x2c4b20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B24u; }
        if (ctx->pc != 0x2C4B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B24u; }
        if (ctx->pc != 0x2C4B24u) { return; }
    }
    ctx->pc = 0x2C4B24u;
label_2c4b24:
    // 0x2c4b24: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x2c4b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4b28: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4b2c: 0xc68d0000  lwc1        $f13, 0x0($s4)
    ctx->pc = 0x2c4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c4b30: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2C4B30u;
    SET_GPR_U32(ctx, 31, 0x2C4B38u);
    ctx->pc = 0x2C4B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B30u;
            // 0x2c4b34: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B38u; }
        if (ctx->pc != 0x2C4B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B38u; }
        if (ctx->pc != 0x2C4B38u) { return; }
    }
    ctx->pc = 0x2C4B38u;
label_2c4b38:
    // 0x2c4b38: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c4b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4b40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C4B40u;
    {
        const bool branch_taken_0x2c4b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B40u;
            // 0x2c4b44: 0x3c024208  lui         $v0, 0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b40) {
            ctx->pc = 0x2C4B70u;
            goto label_2c4b70;
        }
    }
    ctx->pc = 0x2C4B48u;
    // 0x2c4b48: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2c4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4b4c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c4b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c4b50: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2c4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c4b54: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2c4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4b58: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2c4b5c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c4b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4b64: 0x46021b40  add.s       $f13, $f3, $f2
    ctx->pc = 0x2c4b64u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c4b68: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2C4B68u;
    SET_GPR_U32(ctx, 31, 0x2C4B70u);
    ctx->pc = 0x2C4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B68u;
            // 0x2c4b6c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B70u; }
        if (ctx->pc != 0x2C4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B70u; }
        if (ctx->pc != 0x2C4B70u) { return; }
    }
    ctx->pc = 0x2C4B70u;
label_2c4b70:
    // 0x2c4b70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c4b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c4b74: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x2c4b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2c4b78: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x2c4b78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2c4b7c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c4b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c4b80: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2C4B80u;
    {
        const bool branch_taken_0x2c4b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B80u;
            // 0x2c4b84: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b80) {
            ctx->pc = 0x2C4A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4a84;
        }
    }
    ctx->pc = 0x2C4B88u;
    // 0x2c4b88: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2C4B88u;
    SET_GPR_U32(ctx, 31, 0x2C4B90u);
    ctx->pc = 0x2C4B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B88u;
            // 0x2c4b8c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B90u; }
        if (ctx->pc != 0x2C4B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B90u; }
        if (ctx->pc != 0x2C4B90u) { return; }
    }
    ctx->pc = 0x2C4B90u;
label_2c4b90:
    // 0x2c4b90: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2c4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c4b94: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2c4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2c4b98: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c4b9c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4B9Cu;
    {
        const bool branch_taken_0x2c4b9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C4BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B9Cu;
            // 0x2c4ba0: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b9c) {
            ctx->pc = 0x2C4BACu;
            goto label_2c4bac;
        }
    }
    ctx->pc = 0x2C4BA4u;
    // 0x2c4ba4: 0x2402011a  addiu       $v0, $zero, 0x11A
    ctx->pc = 0x2c4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    // 0x2c4ba8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2c4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2c4bac:
    // 0x2c4bac: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2C4BACu;
    SET_GPR_U32(ctx, 31, 0x2C4BB4u);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BB4u; }
        if (ctx->pc != 0x2C4BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BB4u; }
        if (ctx->pc != 0x2C4BB4u) { return; }
    }
    ctx->pc = 0x2C4BB4u;
label_2c4bb4:
    // 0x2c4bb4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c4bb8: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2c4bbc: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2C4BBCu;
    SET_GPR_U32(ctx, 31, 0x2C4BC4u);
    ctx->pc = 0x2C4BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4BBCu;
            // 0x2c4bc0: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BC4u; }
        if (ctx->pc != 0x2C4BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BC4u; }
        if (ctx->pc != 0x2C4BC4u) { return; }
    }
    ctx->pc = 0x2C4BC4u;
label_2c4bc4:
    // 0x2c4bc4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c4bc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c4bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bcc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c4bccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bd0:
    // 0x2c4bd0: 0x2fd1021  addu        $v0, $s7, $sp
    ctx->pc = 0x2c4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x2c4bd4: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2c4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2c4bd8: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x2c4bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2c4bdc: 0x2463d290  addiu       $v1, $v1, -0x2D70
    ctx->pc = 0x2c4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955664));
    // 0x2c4be0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2c4be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4be4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2c4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2c4be8: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2c4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2c4bec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4bf4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4BF4u;
    SET_GPR_U32(ctx, 31, 0x2C4BFCu);
    ctx->pc = 0x2C4BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4BF4u;
            // 0x2c4bf8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BFCu; }
        if (ctx->pc != 0x2C4BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BFCu; }
        if (ctx->pc != 0x2C4BFCu) { return; }
    }
    ctx->pc = 0x2C4BFCu;
label_2c4bfc:
    // 0x2c4bfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2c4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4c00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c04: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2c4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2c4c08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4c0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4C14u);
    ctx->pc = 0x2C4C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C0Cu;
            // 0x2c4c10: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C14u; }
        if (ctx->pc != 0x2C4C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C14u; }
        if (ctx->pc != 0x2C4C14u) { return; }
    }
    ctx->pc = 0x2C4C14u;
label_2c4c14:
    // 0x2c4c14: 0xae021b94  sw          $v0, 0x1B94($s0)
    ctx->pc = 0x2c4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 2));
    // 0x2c4c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c1c: 0xae121b98  sw          $s2, 0x1B98($s0)
    ctx->pc = 0x2c4c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 18));
    // 0x2c4c20: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2c4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x2c4c24: 0xae031c34  sw          $v1, 0x1C34($s0)
    ctx->pc = 0x2c4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 3));
    // 0x2c4c28: 0x8c520130  lw          $s2, 0x130($v0)
    ctx->pc = 0x2c4c28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c4c2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4c30: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2C4C30u;
    {
        const bool branch_taken_0x2c4c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c30) {
            ctx->pc = 0x2C4EF0u;
            goto label_2c4ef0;
        }
    }
    ctx->pc = 0x2C4C38u;
    // 0x2c4c38: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c4c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4c3c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c4c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4c44: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4C44u;
    SET_GPR_U32(ctx, 31, 0x2C4C4Cu);
    ctx->pc = 0x2C4C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C44u;
            // 0x2c4c48: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C4Cu; }
        if (ctx->pc != 0x2C4C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C4Cu; }
        if (ctx->pc != 0x2C4C4Cu) { return; }
    }
    ctx->pc = 0x2C4C4Cu;
label_2c4c4c:
    // 0x2c4c4c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2c4c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4c50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c54: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x2c4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
    // 0x2c4c58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4c5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4C64u);
    ctx->pc = 0x2C4C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C5Cu;
            // 0x2c4c60: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C64u; }
        if (ctx->pc != 0x2C4C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C64u; }
        if (ctx->pc != 0x2C4C64u) { return; }
    }
    ctx->pc = 0x2C4C64u;
label_2c4c64:
    // 0x2c4c64: 0xae021b9c  sw          $v0, 0x1B9C($s0)
    ctx->pc = 0x2c4c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 2));
    // 0x2c4c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c6c: 0xae131ba0  sw          $s3, 0x1BA0($s0)
    ctx->pc = 0x2c4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 19));
    // 0x2c4c70: 0xae021c38  sw          $v0, 0x1C38($s0)
    ctx->pc = 0x2c4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 2));
    // 0x2c4c74: 0xde440028  ld          $a0, 0x28($s2)
    ctx->pc = 0x2c4c74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2c4c78: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2C4C78u;
    SET_GPR_U32(ctx, 31, 0x2C4C80u);
    ctx->pc = 0x2C4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C78u;
            // 0x2c4c7c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C80u; }
        if (ctx->pc != 0x2C4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C80u; }
        if (ctx->pc != 0x2C4C80u) { return; }
    }
    ctx->pc = 0x2C4C80u;
label_2c4c80:
    // 0x2c4c80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c84: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2c4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c4c88: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2C4C88u;
    SET_GPR_U32(ctx, 31, 0x2C4C90u);
    ctx->pc = 0x2C4C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C88u;
            // 0x2c4c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C90u; }
        if (ctx->pc != 0x2C4C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C90u; }
        if (ctx->pc != 0x2C4C90u) { return; }
    }
    ctx->pc = 0x2C4C90u;
label_2c4c90:
    // 0x2c4c90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c94: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2c4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c4c98: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2C4C98u;
    SET_GPR_U32(ctx, 31, 0x2C4CA0u);
    ctx->pc = 0x2C4C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C98u;
            // 0x2c4c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CA0u; }
        if (ctx->pc != 0x2C4CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CA0u; }
        if (ctx->pc != 0x2C4CA0u) { return; }
    }
    ctx->pc = 0x2C4CA0u;
label_2c4ca0:
    // 0x2c4ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ca4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2c4ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c4ca8: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x2C4CA8u;
    SET_GPR_U32(ctx, 31, 0x2C4CB0u);
    ctx->pc = 0x2C4CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CA8u;
            // 0x2c4cac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CB0u; }
        if (ctx->pc != 0x2C4CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CB0u; }
        if (ctx->pc != 0x2C4CB0u) { return; }
    }
    ctx->pc = 0x2C4CB0u;
label_2c4cb0:
    // 0x2c4cb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c4cb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cb4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2c4cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c4cb8: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x2C4CB8u;
    SET_GPR_U32(ctx, 31, 0x2C4CC0u);
    ctx->pc = 0x2C4CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CB8u;
            // 0x2c4cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CC0u; }
        if (ctx->pc != 0x2C4CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CC0u; }
        if (ctx->pc != 0x2C4CC0u) { return; }
    }
    ctx->pc = 0x2C4CC0u;
label_2c4cc0:
    // 0x2c4cc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c4cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cc4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c4cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c4cc8: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x2C4CC8u;
    SET_GPR_U32(ctx, 31, 0x2C4CD0u);
    ctx->pc = 0x2C4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CC8u;
            // 0x2c4ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CD0u; }
        if (ctx->pc != 0x2C4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CD0u; }
        if (ctx->pc != 0x2C4CD0u) { return; }
    }
    ctx->pc = 0x2C4CD0u;
label_2c4cd0:
    // 0x2c4cd0: 0x2a2202f  dsubu       $a0, $s5, $v0
    ctx->pc = 0x2c4cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) - GPR_U64(ctx, 2));
    // 0x2c4cd4: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2C4CD4u;
    SET_GPR_U32(ctx, 31, 0x2C4CDCu);
    ctx->pc = 0x2C4CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CD4u;
            // 0x2c4cd8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CDCu; }
        if (ctx->pc != 0x2C4CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CDCu; }
        if (ctx->pc != 0x2C4CDCu) { return; }
    }
    ctx->pc = 0x2C4CDCu;
label_2c4cdc:
    // 0x2c4cdc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2c4cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2c4ce0: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x2c4ce0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c4ce4: 0x3421e071  ori         $at, $at, 0xE071
    ctx->pc = 0x2c4ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57457);
    // 0x2c4ce8: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x2c4ce8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2c4cec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4CECu;
    {
        const bool branch_taken_0x2c4cec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CECu;
            // 0x2c4cf0: 0x15a83f  dsra32      $s5, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cec) {
            ctx->pc = 0x2C4D00u;
            goto label_2c4d00;
        }
    }
    ctx->pc = 0x2C4CF4u;
    // 0x2c4cf4: 0x241203e7  addiu       $s2, $zero, 0x3E7
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2c4cf8: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x2c4cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c4cfc: 0x2416003b  addiu       $s6, $zero, 0x3B
    ctx->pc = 0x2c4cfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2c4d00:
    // 0x2c4d00: 0x83829d18  lb          $v0, -0x62E8($gp)
    ctx->pc = 0x2c4d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941976)));
    // 0x2c4d04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4D04u;
    {
        const bool branch_taken_0x2c4d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D04u;
            // 0x2c4d08: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d04) {
            ctx->pc = 0x2C4D1Cu;
            goto label_2c4d1c;
        }
    }
    ctx->pc = 0x2C4D0Cu;
    // 0x2c4d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4d10: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x2c4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x2c4d14: 0xa3829d18  sb          $v0, -0x62E8($gp)
    ctx->pc = 0x2c4d14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941976), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c4d18: 0xaf839d14  sw          $v1, -0x62EC($gp)
    ctx->pc = 0x2c4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941972), GPR_U32(ctx, 3));
label_2c4d1c:
    // 0x2c4d1c: 0x0  nop
    ctx->pc = 0x2c4d1cu;
    // NOP
    // 0x2c4d20: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2c4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c4d24: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2C4D24u;
    SET_GPR_U32(ctx, 31, 0x2C4D2Cu);
    ctx->pc = 0x2C4D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D24u;
            // 0x2c4d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D2Cu; }
        if (ctx->pc != 0x2C4D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D2Cu; }
        if (ctx->pc != 0x2C4D2Cu) { return; }
    }
    ctx->pc = 0x2C4D2Cu;
label_2c4d2c:
    // 0x2c4d2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d30: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4D30u;
    {
        const bool branch_taken_0x2c4d30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d30) {
            ctx->pc = 0x2C4D4Cu;
            goto label_2c4d4c;
        }
    }
    ctx->pc = 0x2C4D38u;
    // 0x2c4d38: 0x8f859d14  lw          $a1, -0x62EC($gp)
    ctx->pc = 0x2c4d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941972)));
    // 0x2c4d3c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2C4D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4D44u);
    ctx->pc = 0x2C4D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D3Cu;
            // 0x2c4d40: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D44u; }
        if (ctx->pc != 0x2C4D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D44u; }
        if (ctx->pc != 0x2C4D44u) { return; }
    }
    ctx->pc = 0x2C4D44u;
label_2c4d44:
    // 0x2c4d44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4D44u;
    {
        const bool branch_taken_0x2c4d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d44) {
            ctx->pc = 0x2C4D68u;
            goto label_2c4d68;
        }
    }
    ctx->pc = 0x2C4D4Cu;
label_2c4d4c:
    // 0x2c4d4c: 0x0  nop
    ctx->pc = 0x2c4d4cu;
    // NOP
    // 0x2c4d50: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x2c4d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2c4d54: 0xc087380  jal         func_21CE00
    ctx->pc = 0x2C4D54u;
    SET_GPR_U32(ctx, 31, 0x2C4D5Cu);
    ctx->pc = 0x2C4D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D54u;
            // 0x2c4d58: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D5Cu; }
        if (ctx->pc != 0x2C4D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D5Cu; }
        if (ctx->pc != 0x2C4D5Cu) { return; }
    }
    ctx->pc = 0x2C4D5Cu;
label_2c4d5c:
    // 0x2c4d5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d60: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2C4D60u;
    SET_GPR_U32(ctx, 31, 0x2C4D68u);
    ctx->pc = 0x2C4D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D60u;
            // 0x2c4d64: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D68u; }
        if (ctx->pc != 0x2C4D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D68u; }
        if (ctx->pc != 0x2C4D68u) { return; }
    }
    ctx->pc = 0x2C4D68u;
label_2c4d68:
    // 0x2c4d68: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4D68u;
    {
        const bool branch_taken_0x2c4d68 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d68) {
            ctx->pc = 0x2C4D8Cu;
            goto label_2c4d8c;
        }
    }
    ctx->pc = 0x2C4D70u;
    // 0x2c4d70: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4D70u;
    {
        const bool branch_taken_0x2c4d70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d70) {
            ctx->pc = 0x2C4D8Cu;
            goto label_2c4d8c;
        }
    }
    ctx->pc = 0x2C4D78u;
    // 0x2c4d78: 0x8f859d14  lw          $a1, -0x62EC($gp)
    ctx->pc = 0x2c4d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941972)));
    // 0x2c4d7c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C4D84u);
    ctx->pc = 0x2C4D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D7Cu;
            // 0x2c4d80: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D84u; }
        if (ctx->pc != 0x2C4D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D84u; }
        if (ctx->pc != 0x2C4D84u) { return; }
    }
    ctx->pc = 0x2C4D84u;
label_2c4d84:
    // 0x2c4d84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4D84u;
    {
        const bool branch_taken_0x2c4d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d84) {
            ctx->pc = 0x2C4DA4u;
            goto label_2c4da4;
        }
    }
    ctx->pc = 0x2C4D8Cu;
label_2c4d8c:
    // 0x2c4d8c: 0x0  nop
    ctx->pc = 0x2c4d8cu;
    // NOP
    // 0x2c4d90: 0xc087380  jal         func_21CE00
    ctx->pc = 0x2C4D90u;
    SET_GPR_U32(ctx, 31, 0x2C4D98u);
    ctx->pc = 0x2C4D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D90u;
            // 0x2c4d94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D98u; }
        if (ctx->pc != 0x2C4D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D98u; }
        if (ctx->pc != 0x2C4D98u) { return; }
    }
    ctx->pc = 0x2C4D98u;
label_2c4d98:
    // 0x2c4d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d9c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4DA4u);
    ctx->pc = 0x2C4DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D9Cu;
            // 0x2c4da0: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DA4u; }
        if (ctx->pc != 0x2C4DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DA4u; }
        if (ctx->pc != 0x2C4DA4u) { return; }
    }
    ctx->pc = 0x2C4DA4u;
label_2c4da4:
    // 0x2c4da4: 0x0  nop
    ctx->pc = 0x2c4da4u;
    // NOP
    // 0x2c4da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dac: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x2C4DACu;
    SET_GPR_U32(ctx, 31, 0x2C4DB4u);
    ctx->pc = 0x2C4DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DACu;
            // 0x2c4db0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DB4u; }
        if (ctx->pc != 0x2C4DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DB4u; }
        if (ctx->pc != 0x2C4DB4u) { return; }
    }
    ctx->pc = 0x2C4DB4u;
label_2c4db4:
    // 0x2c4db4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2c4db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c4db8: 0xc087380  jal         func_21CE00
    ctx->pc = 0x2C4DB8u;
    SET_GPR_U32(ctx, 31, 0x2C4DC0u);
    ctx->pc = 0x2C4DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DB8u;
            // 0x2c4dbc: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DC0u; }
        if (ctx->pc != 0x2C4DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DC0u; }
        if (ctx->pc != 0x2C4DC0u) { return; }
    }
    ctx->pc = 0x2C4DC0u;
label_2c4dc0:
    // 0x2c4dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dc4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C4DC4u;
    SET_GPR_U32(ctx, 31, 0x2C4DCCu);
    ctx->pc = 0x2C4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DC4u;
            // 0x2c4dc8: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DCCu; }
        if (ctx->pc != 0x2C4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DCCu; }
        if (ctx->pc != 0x2C4DCCu) { return; }
    }
    ctx->pc = 0x2C4DCCu;
label_2c4dcc:
    // 0x2c4dcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c4dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c4dd0: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2c4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x2c4dd4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C4DD4u;
    SET_GPR_U32(ctx, 31, 0x2C4DDCu);
    ctx->pc = 0x2C4DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DD4u;
            // 0x2c4dd8: 0x24a5fcb8  addiu       $a1, $a1, -0x348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DDCu; }
        if (ctx->pc != 0x2C4DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DDCu; }
        if (ctx->pc != 0x2C4DDCu) { return; }
    }
    ctx->pc = 0x2C4DDCu;
label_2c4ddc:
    // 0x2c4ddc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c4de0: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2C4DE0u;
    SET_GPR_U32(ctx, 31, 0x2C4DE8u);
    ctx->pc = 0x2C4DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DE0u;
            // 0x2c4de4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DE8u; }
        if (ctx->pc != 0x2C4DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DE8u; }
        if (ctx->pc != 0x2C4DE8u) { return; }
    }
    ctx->pc = 0x2C4DE8u;
label_2c4de8:
    // 0x2c4de8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2c4de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c4dec: 0xc087380  jal         func_21CE00
    ctx->pc = 0x2C4DECu;
    SET_GPR_U32(ctx, 31, 0x2C4DF4u);
    ctx->pc = 0x2C4DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DECu;
            // 0x2c4df0: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DF4u; }
        if (ctx->pc != 0x2C4DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DF4u; }
        if (ctx->pc != 0x2C4DF4u) { return; }
    }
    ctx->pc = 0x2C4DF4u;
label_2c4df4:
    // 0x2c4df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4df8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C4DF8u;
    SET_GPR_U32(ctx, 31, 0x2C4E00u);
    ctx->pc = 0x2C4DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DF8u;
            // 0x2c4dfc: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E00u; }
        if (ctx->pc != 0x2C4E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E00u; }
        if (ctx->pc != 0x2C4E00u) { return; }
    }
    ctx->pc = 0x2C4E00u;
label_2c4e00:
    // 0x2c4e00: 0x16203c  dsll32      $a0, $s6, 0
    ctx->pc = 0x2c4e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2c4e04: 0xc087380  jal         func_21CE00
    ctx->pc = 0x2C4E04u;
    SET_GPR_U32(ctx, 31, 0x2C4E0Cu);
    ctx->pc = 0x2C4E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E04u;
            // 0x2c4e08: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E0Cu; }
        if (ctx->pc != 0x2C4E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E0Cu; }
        if (ctx->pc != 0x2C4E0Cu) { return; }
    }
    ctx->pc = 0x2C4E0Cu;
label_2c4e0c:
    // 0x2c4e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e10: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2C4E10u;
    SET_GPR_U32(ctx, 31, 0x2C4E18u);
    ctx->pc = 0x2C4E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E10u;
            // 0x2c4e14: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E18u; }
        if (ctx->pc != 0x2C4E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E18u; }
        if (ctx->pc != 0x2C4E18u) { return; }
    }
    ctx->pc = 0x2C4E18u;
label_2c4e18:
    // 0x2c4e18: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2c4e1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c4e20: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x2C4E20u;
    SET_GPR_U32(ctx, 31, 0x2C4E28u);
    ctx->pc = 0x2C4E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E20u;
            // 0x2c4e24: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E28u; }
        if (ctx->pc != 0x2C4E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E28u; }
        if (ctx->pc != 0x2C4E28u) { return; }
    }
    ctx->pc = 0x2C4E28u;
label_2c4e28:
    // 0x2c4e28: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2c4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e2c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2c4e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4e34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4E34u;
    SET_GPR_U32(ctx, 31, 0x2C4E3Cu);
    ctx->pc = 0x2C4E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E34u;
            // 0x2c4e38: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E3Cu; }
        if (ctx->pc != 0x2C4E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E3Cu; }
        if (ctx->pc != 0x2C4E3Cu) { return; }
    }
    ctx->pc = 0x2C4E3Cu;
label_2c4e3c:
    // 0x2c4e3c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2c4e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e44: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2c4e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4e4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4E4Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E54u);
    ctx->pc = 0x2C4E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E4Cu;
            // 0x2c4e50: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E54u; }
        if (ctx->pc != 0x2C4E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E54u; }
        if (ctx->pc != 0x2C4E54u) { return; }
    }
    ctx->pc = 0x2C4E54u;
label_2c4e54:
    // 0x2c4e54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c4e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c4e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e5c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2c4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2c4e60: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C4E60u;
    SET_GPR_U32(ctx, 31, 0x2C4E68u);
    ctx->pc = 0x2C4E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E60u;
            // 0x2c4e64: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E68u; }
        if (ctx->pc != 0x2C4E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E68u; }
        if (ctx->pc != 0x2C4E68u) { return; }
    }
    ctx->pc = 0x2C4E68u;
label_2c4e68:
    // 0x2c4e68: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4e6c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2c4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e74: 0x0  nop
    ctx->pc = 0x2c4e74u;
    // NOP
    // 0x2c4e78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4e7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E84u);
    ctx->pc = 0x2C4E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E7Cu;
            // 0x2c4e80: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E84u; }
        if (ctx->pc != 0x2C4E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E84u; }
        if (ctx->pc != 0x2C4E84u) { return; }
    }
    ctx->pc = 0x2C4E84u;
label_2c4e84:
    // 0x2c4e84: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2c4e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4e88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c4e8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c4e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4e90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e9c: 0x0  nop
    ctx->pc = 0x2c4e9cu;
    // NOP
    // 0x2c4ea0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c4ea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c4ea4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4EA4u;
    SET_GPR_U32(ctx, 31, 0x2C4EACu);
    ctx->pc = 0x2C4EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EA4u;
            // 0x2c4ea8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EACu; }
        if (ctx->pc != 0x2C4EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EACu; }
        if (ctx->pc != 0x2C4EACu) { return; }
    }
    ctx->pc = 0x2C4EACu;
label_2c4eac:
    // 0x2c4eac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c4eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4eb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4eb8: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C4EB8u;
    SET_GPR_U32(ctx, 31, 0x2C4EC0u);
    ctx->pc = 0x2C4EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EB8u;
            // 0x2c4ebc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EC0u; }
        if (ctx->pc != 0x2C4EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EC0u; }
        if (ctx->pc != 0x2C4EC0u) { return; }
    }
    ctx->pc = 0x2C4EC0u;
label_2c4ec0:
    // 0x2c4ec0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4ec4: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2c4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2c4ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ecc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4ECCu;
    SET_GPR_U32(ctx, 31, 0x2C4ED4u);
    ctx->pc = 0x2C4ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4ECCu;
            // 0x2c4ed0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4ED4u; }
        if (ctx->pc != 0x2C4ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4ED4u; }
        if (ctx->pc != 0x2C4ED4u) { return; }
    }
    ctx->pc = 0x2C4ED4u;
label_2c4ed4:
    // 0x2c4ed4: 0x2646000d  addiu       $a2, $s2, 0xD
    ctx->pc = 0x2c4ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
    // 0x2c4ed8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c4ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ee0: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C4EE0u;
    SET_GPR_U32(ctx, 31, 0x2C4EE8u);
    ctx->pc = 0x2C4EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EE0u;
            // 0x2c4ee4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EE8u; }
        if (ctx->pc != 0x2C4EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EE8u; }
        if (ctx->pc != 0x2C4EE8u) { return; }
    }
    ctx->pc = 0x2C4EE8u;
label_2c4ee8:
    // 0x2c4ee8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4EE8u;
    {
        const bool branch_taken_0x2c4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ee8) {
            ctx->pc = 0x2C4F44u;
            goto label_2c4f44;
        }
    }
    ctx->pc = 0x2C4EF0u;
label_2c4ef0:
    // 0x2c4ef0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4ef4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2c4ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4ef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4efc: 0x0  nop
    ctx->pc = 0x2c4efcu;
    // NOP
    // 0x2c4f00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c4f04: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2c4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2c4f08: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2c4f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c4f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4F10u;
    SET_GPR_U32(ctx, 31, 0x2C4F18u);
    ctx->pc = 0x2C4F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F10u;
            // 0x2c4f14: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F18u; }
        if (ctx->pc != 0x2C4F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F18u; }
        if (ctx->pc != 0x2C4F18u) { return; }
    }
    ctx->pc = 0x2C4F18u;
label_2c4f18:
    // 0x2c4f18: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c4f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c4f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f20: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2c4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2c4f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f28: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C4F28u;
    SET_GPR_U32(ctx, 31, 0x2C4F30u);
    ctx->pc = 0x2C4F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F28u;
            // 0x2c4f2c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F30u; }
        if (ctx->pc != 0x2C4F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F30u; }
        if (ctx->pc != 0x2C4F30u) { return; }
    }
    ctx->pc = 0x2C4F30u;
label_2c4f30:
    // 0x2c4f30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c4f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c4f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f3c: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C4F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F44u);
    ctx->pc = 0x2C4F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F3Cu;
            // 0x2c4f40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F44u; }
        if (ctx->pc != 0x2C4F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F44u; }
        if (ctx->pc != 0x2C4F44u) { return; }
    }
    ctx->pc = 0x2C4F44u;
label_2c4f44:
    // 0x2c4f44: 0x0  nop
    ctx->pc = 0x2c4f44u;
    // NOP
    // 0x2c4f48: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x2c4f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4f4c: 0xc0878f0  jal         func_21E3C0
    ctx->pc = 0x2C4F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F54u);
    ctx->pc = 0x2C4F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F4Cu;
            // 0x2c4f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C0u;
    if (runtime->hasFunction(0x21E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F54u; }
        if (ctx->pc != 0x2C4F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgAlpha__7CDC2MesFi_0x21e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F54u; }
        if (ctx->pc != 0x2C4F54u) { return; }
    }
    ctx->pc = 0x2C4F54u;
label_2c4f54:
    // 0x2c4f54: 0xc087898  jal         func_21E260
    ctx->pc = 0x2C4F54u;
    SET_GPR_U32(ctx, 31, 0x2C4F5Cu);
    ctx->pc = 0x2C4F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F54u;
            // 0x2c4f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F5Cu; }
        if (ctx->pc != 0x2C4F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F5Cu; }
        if (ctx->pc != 0x2C4F5Cu) { return; }
    }
    ctx->pc = 0x2C4F5Cu;
label_2c4f5c:
    // 0x2c4f5c: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2C4F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F64u);
    ctx->pc = 0x2C4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F5Cu;
            // 0x2c4f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F64u; }
        if (ctx->pc != 0x2C4F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F64u; }
        if (ctx->pc != 0x2C4F64u) { return; }
    }
    ctx->pc = 0x2C4F64u;
label_2c4f64:
    // 0x2c4f64: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2c4f68: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2c4f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2c4f6c: 0x2bc3000d  slti        $v1, $fp, 0xD
    ctx->pc = 0x2c4f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2c4f70: 0x1460ff17  bnez        $v1, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x2C4F70u;
    {
        const bool branch_taken_0x2c4f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F70u;
            // 0x2c4f74: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f70) {
            ctx->pc = 0x2C4BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4bd0;
        }
    }
    ctx->pc = 0x2C4F78u;
label_2c4f78:
    // 0x2c4f78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c4f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4f7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c4f7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4f80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c4f80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4f84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c4f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4f88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c4f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4f8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FA0u;
            // 0x2c4fa4: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4FA8u;
}
