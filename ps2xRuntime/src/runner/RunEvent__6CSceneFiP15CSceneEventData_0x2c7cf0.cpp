#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RunEvent__6CSceneFiP15CSceneEventData
// Address: 0x2c7cf0 - 0x2c7e5c
void RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0");
#endif

    switch (ctx->pc) {
        case 0x2c7d24u: goto label_2c7d24;
        default: break;
    }

    ctx->pc = 0x2c7cf0u;

    // 0x2c7cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c7cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c7cf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c7cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c7cf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7d00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c7d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7d08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d0c: 0x8c832e88  lw          $v1, 0x2E88($a0)
    ctx->pc = 0x2c7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11912)));
    // 0x2c7d10: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7D10u;
    {
        const bool branch_taken_0x2c7d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7D10u;
            // 0x2c7d14: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d10) {
            ctx->pc = 0x2C7D34u;
            goto label_2c7d34;
        }
    }
    ctx->pc = 0x2C7D18u;
    // 0x2c7d18: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c7d1c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2C7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D24u);
    ctx->pc = 0x2C7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7D1Cu;
            // 0x2c7d20: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7D24u; }
        if (ctx->pc != 0x2C7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7D24u; }
        if (ctx->pc != 0x2C7D24u) { return; }
    }
    ctx->pc = 0x2C7D24u;
label_2c7d24:
    // 0x2c7d24: 0x8e242e8c  lw          $a0, 0x2E8C($s1)
    ctx->pc = 0x2c7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    // 0x2c7d28: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2c7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c7d2c: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C7D2Cu;
    {
        const bool branch_taken_0x2c7d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c7d2c) {
            ctx->pc = 0x2C7E44u;
            goto label_2c7e44;
        }
    }
    ctx->pc = 0x2C7D34u;
label_2c7d34:
    // 0x2c7d34: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C7D34u;
    {
        const bool branch_taken_0x2c7d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7D34u;
            // 0x2c7d38: 0xae322e8c  sw          $s2, 0x2E8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d34) {
            ctx->pc = 0x2C7E3Cu;
            goto label_2c7e3c;
        }
    }
    ctx->pc = 0x2C7D3Cu;
    // 0x2c7d3c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2c7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7d40: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2c7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d44: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2c7d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d48: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2c7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d4c: 0xe6232e90  swc1        $f3, 0x2E90($s1)
    ctx->pc = 0x2c7d4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11920), bits); }
    // 0x2c7d50: 0xe6222e94  swc1        $f2, 0x2E94($s1)
    ctx->pc = 0x2c7d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11924), bits); }
    // 0x2c7d54: 0xe6212e98  swc1        $f1, 0x2E98($s1)
    ctx->pc = 0x2c7d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11928), bits); }
    // 0x2c7d58: 0xe6202e9c  swc1        $f0, 0x2E9C($s1)
    ctx->pc = 0x2c7d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11932), bits); }
    // 0x2c7d5c: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x2c7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7d60: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2c7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d64: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2c7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d68: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2c7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d6c: 0xe6232ea0  swc1        $f3, 0x2EA0($s1)
    ctx->pc = 0x2c7d6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11936), bits); }
    // 0x2c7d70: 0xe6222ea4  swc1        $f2, 0x2EA4($s1)
    ctx->pc = 0x2c7d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11940), bits); }
    // 0x2c7d74: 0xe6212ea8  swc1        $f1, 0x2EA8($s1)
    ctx->pc = 0x2c7d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11944), bits); }
    // 0x2c7d78: 0xe6202eac  swc1        $f0, 0x2EAC($s1)
    ctx->pc = 0x2c7d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11948), bits); }
    // 0x2c7d7c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2c7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d80: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2c7d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d84: 0xe6212eb0  swc1        $f1, 0x2EB0($s1)
    ctx->pc = 0x2c7d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11952), bits); }
    // 0x2c7d88: 0xe6202eb4  swc1        $f0, 0x2EB4($s1)
    ctx->pc = 0x2c7d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11956), bits); }
    // 0x2c7d8c: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2c7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7d90: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2c7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d94: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2c7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d98: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2c7d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d9c: 0xe6232ec0  swc1        $f3, 0x2EC0($s1)
    ctx->pc = 0x2c7d9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11968), bits); }
    // 0x2c7da0: 0xe6222ec4  swc1        $f2, 0x2EC4($s1)
    ctx->pc = 0x2c7da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11972), bits); }
    // 0x2c7da4: 0xe6212ec8  swc1        $f1, 0x2EC8($s1)
    ctx->pc = 0x2c7da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11976), bits); }
    // 0x2c7da8: 0xe6202ecc  swc1        $f0, 0x2ECC($s1)
    ctx->pc = 0x2c7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11980), bits); }
    // 0x2c7dac: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x2c7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7db0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x2c7db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7db4: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2c7db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7db8: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2c7db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7dbc: 0xe6232ed0  swc1        $f3, 0x2ED0($s1)
    ctx->pc = 0x2c7dbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11984), bits); }
    // 0x2c7dc0: 0xe6222ed4  swc1        $f2, 0x2ED4($s1)
    ctx->pc = 0x2c7dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11988), bits); }
    // 0x2c7dc4: 0xe6212ed8  swc1        $f1, 0x2ED8($s1)
    ctx->pc = 0x2c7dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11992), bits); }
    // 0x2c7dc8: 0xe6202edc  swc1        $f0, 0x2EDC($s1)
    ctx->pc = 0x2c7dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11996), bits); }
    // 0x2c7dcc: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x2c7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7dd0: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x2c7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7dd4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x2c7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7dd8: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x2c7dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ddc: 0xe6232ee0  swc1        $f3, 0x2EE0($s1)
    ctx->pc = 0x2c7ddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12000), bits); }
    // 0x2c7de0: 0xe6222ee4  swc1        $f2, 0x2EE4($s1)
    ctx->pc = 0x2c7de0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12004), bits); }
    // 0x2c7de4: 0xe6212ee8  swc1        $f1, 0x2EE8($s1)
    ctx->pc = 0x2c7de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12008), bits); }
    // 0x2c7de8: 0xe6202eec  swc1        $f0, 0x2EEC($s1)
    ctx->pc = 0x2c7de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12012), bits); }
    // 0x2c7dec: 0x7a060060  lq          $a2, 0x60($s0)
    ctx->pc = 0x2c7decu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c7df0: 0x7a050070  lq          $a1, 0x70($s0)
    ctx->pc = 0x2c7df0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c7df4: 0x7a040080  lq          $a0, 0x80($s0)
    ctx->pc = 0x2c7df4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2c7df8: 0x7a030090  lq          $v1, 0x90($s0)
    ctx->pc = 0x2c7df8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2c7dfc: 0x7e262ef0  sq          $a2, 0x2EF0($s1)
    ctx->pc = 0x2c7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12016), GPR_VEC(ctx, 6));
    // 0x2c7e00: 0x7e252f00  sq          $a1, 0x2F00($s1)
    ctx->pc = 0x2c7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12032), GPR_VEC(ctx, 5));
    // 0x2c7e04: 0x7e242f10  sq          $a0, 0x2F10($s1)
    ctx->pc = 0x2c7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12048), GPR_VEC(ctx, 4));
    // 0x2c7e08: 0x7e232f20  sq          $v1, 0x2F20($s1)
    ctx->pc = 0x2c7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12064), GPR_VEC(ctx, 3));
    // 0x2c7e0c: 0x7a0400a0  lq          $a0, 0xA0($s0)
    ctx->pc = 0x2c7e0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2c7e10: 0x7a0300b0  lq          $v1, 0xB0($s0)
    ctx->pc = 0x2c7e10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2c7e14: 0x7e242f30  sq          $a0, 0x2F30($s1)
    ctx->pc = 0x2c7e14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12080), GPR_VEC(ctx, 4));
    // 0x2c7e18: 0x7e232f40  sq          $v1, 0x2F40($s1)
    ctx->pc = 0x2c7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 12096), GPR_VEC(ctx, 3));
    // 0x2c7e1c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2c7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2c7e20: 0xae232f50  sw          $v1, 0x2F50($s1)
    ctx->pc = 0x2c7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12112), GPR_U32(ctx, 3));
    // 0x2c7e24: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2c7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2c7e28: 0xae232f54  sw          $v1, 0x2F54($s1)
    ctx->pc = 0x2c7e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12116), GPR_U32(ctx, 3));
    // 0x2c7e2c: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x2c7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2c7e30: 0xae232f58  sw          $v1, 0x2F58($s1)
    ctx->pc = 0x2c7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12120), GPR_U32(ctx, 3));
    // 0x2c7e34: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2c7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2c7e38: 0xae232f5c  sw          $v1, 0x2F5C($s1)
    ctx->pc = 0x2c7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12124), GPR_U32(ctx, 3));
label_2c7e3c:
    // 0x2c7e3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7e40: 0xae232e88  sw          $v1, 0x2E88($s1)
    ctx->pc = 0x2c7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11912), GPR_U32(ctx, 3));
label_2c7e44:
    // 0x2c7e44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c7e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E54u;
            // 0x2c7e58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7E5Cu;
}
